// system include files
#include <memory>
// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/stream/EDFilter.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Utilities/interface/StreamID.h"
// new includes
#include "DataFormats/PatCandidates/interface/Jet.h"
#include "FWCore/ServiceRegistry/interface/Service.h"
#include "CommonTools/UtilAlgos/interface/TFileService.h"

class AK8JetFilter : public edm::stream::EDFilter<> {
   public:
      explicit AK8JetFilter(const edm::ParameterSet&);
   private:
      virtual bool filter(edm::Event&, const edm::EventSetup&) override;
      edm::EDGetTokenT<std::vector<pat::Jet>> jetCollectionToken_;
      TH1D * h;
};

AK8JetFilter::AK8JetFilter(const edm::ParameterSet& iConfig)
{
   jetCollectionToken_ = consumes<std::vector<pat::Jet>>(edm::InputTag("slimmedJetsAK8")); 
   edm::Service<TFileService> fs;
   h = fs->make<TH1D>("h", ";# of AK8 jets;events / 1", 6, -0.5, 5.5);
}

bool AK8JetFilter::filter(edm::Event& iEvent, const edm::EventSetup& iSetup)
{
   edm::Handle<std::vector<pat::Jet>> jets;
   iEvent.getByToken(jetCollectionToken_, jets);
   int nJets = 0;
   for (auto i = jets->begin(); i != jets->end(); ++i) {
      if (i->isPFJet()) {
         ++nJets;
      }
   }
   h->Fill(nJets);
   if (nJets) return true;
   return false;
}

DEFINE_FWK_MODULE(AK8JetFilter);

