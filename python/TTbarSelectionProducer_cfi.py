import FWCore.ParameterSet.Config as cms

ttbarselectionproducer = cms.EDProducer("TTbarSelectionProducer",
                                        selectAll        = cms.bool(False),
                                        verbose          = cms.int32(0),
                                        triggerColl      = cms.InputTag("TriggerResults","","HLT"),
                                        prunedGenParticles       = cms.InputTag('prunedGenParticles'),
                                        metFilters       = cms.VInputTag(cms.InputTag('TriggerResults','','RECO'),
                                                                         cms.InputTag('TriggerResults','','PAT')),
                                        RecoHBHENoiseFilter = cms.InputTag('hcalnoise','','RECO'),
                                        metFiltersToApply= cms.vstring("Flag_goodVertices","Flag_globalTightHalo2016Filter","Flag_HBHENoiseFilter","Flag_HBHENoiseIsoFilter","Flag_EcalDeadCellTriggerPrimitiveFilter","Flag_BadPFMuonFilter","Flag_BadChargedCandidateFilter","Flag_ecalBadCalibFilter"),
                                        vtxColl          = cms.InputTag("offlineSlimmedPrimaryVertices"),
                                        #cf https://twiki.cern.ch/twiki/bin/view/CMS/TopTrigger
                                        trigNamesToSel   = cms.vstring('Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL',
                                                                       'Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ',
                                                                       'Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ',
                                                                       'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ',
                                                                       '_IsoMu22_v',
                                                                       '_IsoMu24_v',    
                                                                       'Ele35_WPLoose_Gsf_v',   
                                                                       'Ele45_WPLoose_Gsf_v',
                                                                       'HLT_Mu50_v',
                                                                       'HLT_TkMu50_v',
                                                                       'HLT_OldMu100_v',
                                                                       'HLT_TkMu100_v',
                                                                       ),
                                        trigChannels     = cms.vint32(13*11,
                                                                      13*11,
                                                                      13*11,
                                                                      13*11,
                                                                      13,
                                                                      13,
                                                                      11,
                                                                      11,
                                                                      13
                                                                      ),
                                        doTrigSel        = cms.bool(True),
                                        electronColl     = cms.InputTag("slimmedElectrons"),
                                        conversions      = cms.InputTag("reducedEgamma:reducedConversions"),
                                        electronIdMap    = cms.InputTag("egmGsfElectronIDs:cutBasedElectronID-Fall17-94X-V1-medium"),
                                        electron_cut_pt  = cms.double(20),
                                        electron_cut_eta = cms.double(2.4),
                                        electron_cut_iso = cms.double(0.11),
                                        muonColl         = cms.InputTag("slimmedMuons"),
                                        muon_cut_pt      = cms.double(20),
                                        muon_cut_eta     = cms.double(2.4),
                                        muon_cut_iso     = cms.double(0.12),
                                        jetColl          = cms.InputTag("slimmedJets"),
                                        jet_cut_pt       = cms.double(20),
                                        jet_cut_eta      = cms.double(2.5),
                                        metColl          = cms.InputTag("slimmedMETs"),
                                        met_cut          = cms.double(0)
                                        )
