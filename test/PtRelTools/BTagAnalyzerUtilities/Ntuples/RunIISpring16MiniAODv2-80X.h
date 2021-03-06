// EOS paths 
TString EOSPathQCD       = "root://eoscms.cern.ch//eos/cms/store/group/phys_btag/performance/CMSSW_8_0_8_patch1/MC/QCD_TuneCUETP8M1_13TeV_pythia8_RunIISpring16MiniAODv2-PUSpring16_80X_mcRun2_asymptotic_2016_miniAODv2_v0/";
TString EOSPathQCDMu     = "root://eoscms.cern.ch//eos/cms/store/group/phys_btag/performance/CMSSW_8_0_8_patch1/MC/QCD_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8_RunIISpring16MiniAODv2-PUSpring16RAWAODSIM_reHLT_80X_mcRun2_asymptotic_v14/";
TString EOSPathBTagMu      = "root://eoscms.cern.ch//eos/cms/store/group/phys_btag/performance/CMSSW_8_0_12/Data/BTagMu/";
TString EOSPathJetHT       = "root://eoscms.cern.ch//eos/cms/store/group/phys_btag/performance/CMSSW_8_0_12/Data/JetHT/";

TString TreeContentFlag = "_FatJets_Subjets";

// BTag data
const int nBTagMuRanges = 6;
TString BTagMuRangeName[nBTagMuRanges] = {"Run2016B-PromptReco-v2_7p7fb:1of3", "Run2016B-PromptReco-v2_7p7fb:2of3", "Run2016B-PromptReco-v2_7p7fb:3of3", "Run2016C-PromptReco-v2_9p2fb", "Run2016D-PromptReco-v2_12p9fb:1of2", "Run2016D-PromptReco-v2_12p9fb:2of2"};
int nBTagMuTrees[nBTagMuRanges] = {1039, 1039, 1039, 349, 729, 729};

// Jet data
const int nJetRunRanges = 16;
TString JetRunRangeName[nJetRunRanges] = {"Run2016B-PromptReco-v2_July09:1of8", "Run2016B-PromptReco-v2_July09:2of8", "Run2016B-PromptReco-v2_July09:3of8", "Run2016B-PromptReco-v2_July09:4of8", "Run2016B-PromptReco-v2_July09:5of8", "Run2016B-PromptReco-v2_July09:6of8", "Run2016B-PromptReco-v2_July09:7of8", "Run2016B-PromptReco-v2_July09:8of8", "Run2016C-PromptReco-v2_July15:1of3", "Run2016C-PromptReco-v2_July15:2of3", "Run2016C-PromptReco-v2_July15:3of3", "Run2016D-PromptReco-v2_July20:1of5", "Run2016D-PromptReco-v2_July20:2of5", "Run2016D-PromptReco-v2_July20:3of5", "Run2016D-PromptReco-v2_July20:4of5", "Run2016D-PromptReco-v2_July20:5of5"};
int nJetTrees[nJetRunRanges]    = {2612, 2612, 2612, 2612, 2612, 2612, 2612, 2612, 870, 870, 870, 1459, 1459, 1459, 1459, 1459};

// QCD muon enriched 13 TeV
const int nMonteCarloPtHatRanges = 21;
TString MonteCarloPtHatRange[nMonteCarloPtHatRanges] = {"Pt-15to20", "Pt-20to30:1of2", "Pt-20to30:2of2", "Pt-30to50:1of2", "Pt-30to50:2of2", "Pt-50to80:1of2",  "Pt-50to80:2of2", "Pt-80to120", "Pt-120to170", "Pt-170to300", "Pt-170to300_ext1", "Pt-300to470", "Pt-300to470_ext1:1of2", "Pt-300to470_ext1:2of2", "Pt-470to600", "Pt-470to600_ext1", "Pt-600to800", "Pt-600to800_ext1", "Pt-800to1000", "Pt-800to1000_ext1", "Pt-1000toInf"};
double CrossSection[nMonteCarloPtHatRanges] = {1.27319E9*0.003, 5.58528E8*0.0053, 5.58528E8*0.0053, 1.39803E8*0.01182, 1.39803E8*0.01182, 1.92225E7*0.02276, 1.92225E7*0.02276, 2.758420E6*0.03844, 469797.*0.05362, 117989.*0.07335, 117989.*0.07335, 7820.25*0.10196, 7820.25*0.10196, 7820.25*0.10196, 645.528*0.12242, 645.528*0.12242, 187.109*0.13412, 187.109*0.13412, 32.3486*0.14552, 32.3486*0.14552, 10.4305*0.15544};
double GeneratedEvents[nMonteCarloPtHatRanges] = {0., 31516731., 31516731., 28257083.,   28257083., 20383957.,  20383957., 13812017., 7925929., 7722104.+8259650., 7722104.+8259650., 7442028.+16174442., 7442028.+16174442.,  7442028.+16174442., 1890296.+5891766., 1890296.+5891766., 3962231.+5868022., 3962231.+5868022., 3953740.+5526955., 3953740.+5526955., 3700237};
int nMonteCarloTrees[nMonteCarloPtHatRanges] = {0, 817, 817, 725, 725, 461, 461, 334, 193, 191, 217, 175, 372, 372, 42, 137, 87, 130, 90, 129, 86};

// QCD inclusive 13 TeV 
const int nMCInclusivePtHatRanges = 17;                                       
TString MCInclusivePtHatRange[nMCInclusivePtHatRanges] = {"Pt-15to30", "Pt-30to50", "Pt-50to80", "Pt-80to120", "Pt-120to170", "Pt-170to300", "Pt-300to470", "Pt-470to600", "Pt-470to600ext1", "Pt-600to800", "Pt-600to800ext1", "Pt-800to1000", "Pt-1000to1400", "Pt-1400to1800", "Pt-1800to2400", "Pt-2400to3200", "Pt-3200toInf"};
double CrossSectionInclusive[nMCInclusivePtHatRanges] = {1.83741E9, 1.40932E8, 1.92043E7, 2762530., 471100., 117276., 7823., 648.2, 648.2, 186.9, 186.9, 32.293, 9.4183, 0.84265, 0.114943, 0.00682981, 0.000165445};
double GeneratedEventsInclusive[nMCInclusivePtHatRanges] = {9800608., 9930948., 9968391., 6986123., 6863805., 6914063., 5970580., 3928855.+15266458., 3928855.+15266458., 3959746.+9344947., 3959746.+9344947., 3924060., 2999055., 396407., 396093., 399226., 0.};
int nMCInclusiveTrees[nMCInclusivePtHatRanges] = {239, 236, 248, 180, 165, 157, 137, 93, 350, 95, 218, 95, 68, 10, 10, 12, 0};

float PileUpScenario[] = {0.000829312873542,
			  0.00124276120498,
			  0.00339329181587,
			  0.00408224735376,
			  0.00383036590008,
			  0.00659159288946,
			  0.00816022734493,
			  0.00943640833116,
			  0.0137777376066,
			  0.017059392038,
			  0.0213193035468,
			  0.0247343174676,
			  0.0280848773878,
			  0.0323308476564,
			  0.0370394341409,
			  0.0456917721191,
			  0.0558762890594,
			  0.0576956187107,
			  0.0625325287017,
			  0.0591603758776,
			  0.0656650815128,
			  0.0678329011676,
			  0.0625142146389,
			  0.0548068448797,
			  0.0503893295063,
			  0.040209818868,
			  0.0374446988111,
			  0.0299661572042,
			  0.0272024759921,
			  0.0219328403791,
			  0.0179586571619,
			  0.0142926728247,
			  0.00839941654725,
			  0.00522366397213,
			  0.00224457976761,
			  0.000779274977993,
			  0.000197066585944,
			  7.16031761328e-05,
			  0.0,
			  0.0,
			  0.0,
			  0.0,
			  0.0,
			  0.0,
			  0.0,
			  0.0,
			  0.0,
			  0.0,
			  0.0,
			  0.0 };
