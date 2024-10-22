

#include "VIAnalytics.h"
#include "VILazyImage.h"
#include "VICVNLPCommSafetyHandlerInternal.h"
#include "VIQueryContextQueryIDMapper.h"
#include "VIQueryContextApplicationIdentifierMapper.h"
#include "VIQueryContextUIScaleMapper.h"
#include "VIQueryContextTeamIDMapper.h"
#include "VIQueryContextCatalogIDsMapper.h"
#include "VIQueryContextLocationMapper.h"
#include "VIQueryContextImageURLMapper.h"
#include "VIQueryContextReferralURLMapper.h"
#include "VIQueryContextImageTypeMapper.h"
#include "VIQueryContextFeatureIdentifierMapper.h"
#include "VIQueryContextPreferredMetalDeviceMapper.h"
#include "VIQueryContextIncludeLowConfidenceRegionMapper.h"
#include "VIQueryContextLocaleMapper.h"
#include "VIQueryContextCountryCodeMapper.h"
#include "VIScenenetAnnotation.h"
#include "VIACacheHitEvent.h"
#include "VIACacheHitLogger.h"
#include "VIImageRegion.h"
#include "VISearchResult.h"
#include "VIParsedVisualQuery.h"
#include "VIParseResult.h"
#include "VIEntitlementManager.h"
#include "VIRegionOfInterestResult.h"
#include "VIStreamingSession.h"
#include "VIRefineRegionRequest.h"
#include "VITextContext.h"
#include "VITextLookupQuery.h"
#include "VIAEventCache.h"
#include "VIStreamingParseResult.h"
#include "VIStreamingSignalExtractionRequest.h"
#include "VIAFeedbackSubmitter.h"
#include "VIBarcodeAnnotationItem.h"
#include "VIBarcodeAnnotation.h"
#include "VIThirdPartyObject.h"
#include "VIOntologyGraph.h"
#include "VIE5RunnerPortDesc.h"
#include "VIE5Runner.h"
#include "VICloudKitHandlerInternal.h"
#include "VIImageRegionDomainInfo.h"
#include "VIStreamingParseRequest.h"
#include "VIImageScaler.h"
#include "VIStreamingDetectedObject.h"
#include "VINoopQueryHandler.h"
#include "VIService.h"
#include "VIVisualUnderstanding.h"
#include "VIStreamingSignalExtractionResult.h"
#include "VIImage.h"
#include "VITextLookupResult.h"
#include "VIAEntryPointEvent.h"
#include "VIObjectCategory.h"
#include "VIBoxScorer.h"
#include "VIRegionalAnnotation.h"
#include "VIObjectKnowledgeProperty.h"
#include "VIObjectKnowledge.h"
#include "VIBitVector.h"
#include "VIUserFeedback.h"
#include "VIRefineRegionResult.h"
#include "VIAEntryPointLogger.h"
#include "VIOntologyNode.h"
#include "VIQueryContext.h"
#include "VIEspressoRunner.h"
#include "VIRegionOfInterestResultItem.h"
#include "VIDetectedResult.h"
#include "VIAnnotation.h"
#include "VIQueryContextBuilder.h"
#include "VITextAnnotation.h"
#include "VITextBlockAnnotation.h"
#include "VIStreamingFrame.h"
#include "VIFeatureFlags.h"
#include "VIBloomFilter.h"
#include "VIVisualQuery.h"
#include "VIRefinedRegion.h"
#include "_TtC18VisualIntelligence11ResultsNode.h"
#include "_TtC18VisualIntelligence22RegionMergingProcessor.h"
#include "_TtC18VisualIntelligence26SignalsExtractionProcessor.h"
#include "_TtC18VisualIntelligence26DomainPredictionModelInput.h"
#include "_TtC18VisualIntelligence32DomainPredcitionRequestProcessor.h"
#include "_TtC18VisualIntelligence19ModelBundleProvider.h"
#include "_TtC18VisualIntelligence19Argos2DModelFactory.h"
#include "_TtC18VisualIntelligence19InputProcessingNode.h"
#include "_TtC18VisualIntelligence28ClassificationModelPredictor.h"
#include "_TtC18VisualIntelligence20NSFWCheckerProcessor.h"
#include "_TtC18VisualIntelligence22AvailableDomainManager.h"
#include "_TtC18VisualIntelligence19DomainPredictionNet.h"
#include "_TtC18VisualIntelligence29TriggeringPredictionProcessor.h"
#include "_TtC18VisualIntelligence27ClassificationTopKProcessor.h"
#include "_TtC18VisualIntelligence9GraphEdge.h"
#include "_TtC18VisualIntelligence18NatureModelFactory.h"
#include "_TtCV18VisualIntelligence13OntologyGraph4Node.h"
#include "_TtC18VisualIntelligence24VisualIntelligenceLogger.h"
#include "_TtC18VisualIntelligence23ProcessInputImageVision.h"
#include "_TtC18VisualIntelligence25ProcessInputImageEspresso.h"
#include "_TtC18VisualIntelligence24DomainSelectionProcessor.h"
#include "_TtC18VisualIntelligence19AnimalsModelFactory.h"
#include "_TtC18VisualIntelligence15ProcessingGraph.h"
#include "_TtC18VisualIntelligence28AnnotationExtractorProcessor.h"
#include "_TtC18VisualIntelligence20LandmarkModelFactory.h"
#include "_TtC18VisualIntelligence7E5Model.h"
#include "_TtC18VisualIntelligence9E5Request.h"
#include "_TtC18VisualIntelligence31SceneClassificationModelFactory.h"
#include "_TtC18VisualIntelligence18EligibilityChecker.h"
#include "_TtC18VisualIntelligence14ObjectOntology.h"
#include "_TtC18VisualIntelligence10ParseGraph.h"
#include "_TtCV18VisualIntelligence34Argos_Protos_Queryflow_ParseConfigP33_7DF24988070CDFF9E5CDF6DD63AA88A313_StorageClass.h"
#include "_TtC18VisualIntelligence38VisualIntelligenceModelProviderService.h"
#include "_TtC18VisualIntelligence16PetsModelFactory.h"
#include "_TtCC18VisualIntelligence15ProcessingGraph9NodeState.h"
#include "_TtC18VisualIntelligence24RegionSelectionProcessor.h"
#include "_TtC18VisualIntelligence34AnimalsClassificationPostProcessor.h"
#include "_TtC18VisualIntelligence14ObjectDetector.h"
#include "_TtC18VisualIntelligence30ImageFingerprintRequestFactory.h"
#include "_TtC18VisualIntelligence14NetworkService.h"
#include "_TtC18VisualIntelligence21ParseGraphEdgeCreator.h"
#include "_TtC18VisualIntelligence25DomainAssignmentProcessor.h"
#include "_TtC18VisualIntelligence17AnyVIImageContent.h"
#include "_TtC18VisualIntelligence14TextLookupFlow.h"
#include "_TtC18VisualIntelligence13SignpostEvent.h"
#include "_TtC18VisualIntelligence25DomainModelRequestFactory.h"
#include "_TtC18VisualIntelligence20TextLookupServerFlow.h"
#include "_TtC18VisualIntelligence33NatureClassificationPostProcessor.h"
#include "_TtC18VisualIntelligence19UnifiedModelFactory.h"
#include "_TtC18VisualIntelligence22DomainSignalsExtractor.h"
#include "_TtC18VisualIntelligence16ImageContentLazy.h"
#include "_TtC18VisualIntelligence19DurationMeasurement.h"
#include "_TtC18VisualIntelligence15VISceneTaxonomy.h"
#include "_TtCV18VisualIntelligence6S2LoopP33_0A5C7CC7D7BDB7AF05ED030EC51F345F15S2LoopEdgeIndex.h"
#include "_TtC18VisualIntelligence9NodeInput.h"
#include "_TtC18VisualIntelligence9ParseFlow.h"
#include "_TtC18VisualIntelligence25UnifiedModelPostProcessor.h"
#include "_TtC18VisualIntelligence19AvailabilityChecker.h"
#include "_TtC18VisualIntelligence15VIVNImageScaler.h"
#include "_TtC18VisualIntelligence10FileMapper.h"
#include "_TtC18VisualIntelligence9BoxScorer.h"
#include "_TtC18VisualIntelligence26PegasusProxyEnableListener.h"
#include "_TtC18VisualIntelligence21RegionsProcessingNode.h"
#include "_TtC18VisualIntelligence18TrialModelProvider.h"
#include "_TtC18VisualIntelligence25VisualIntelligenceService.h"
#include "_TtCC18VisualIntelligence15ProcessingGraph10GraphState.h"
#include "_TtC18VisualIntelligence15S2RegionCoverer.h"
#include "_TtC18VisualIntelligence31ClassificationPetsPostProcessor.h"
#include "_TtC18VisualIntelligence22ServerResultsProcessor.h"
#include "_TtC18VisualIntelligence33DomainPredictionResponseProcessor.h"
#include "_TtC18VisualIntelligence30BarcodeDetectionRequestFactory.h"
#include "_TtC18VisualIntelligence8NSFWNode.h"
#include "_TtC18VisualIntelligence16ImageSizeChecker.h"
#include "_TtC18VisualIntelligence11AnyVIAEvent.h"
#include "_TtC18VisualIntelligence16SignalsExtractor.h"
#include "_TtC18VisualIntelligence20MemoryEventResponder.h"
#include "_TtC18VisualIntelligence22MemoryPressureObserver.h"
#include "_TtC18VisualIntelligence23OntologyGraphCompatible.h"
#include "_TtC18VisualIntelligence34ClassificationDefaultPostProcessor.h"
#include "_TtC18VisualIntelligence25CachedCoreMLModelProvider.h"
#include "_TtC18VisualIntelligence27TextDetectionRequestFactory.h"
#include "_TtC18VisualIntelligence15EspressoRequest.h"
#include "_TtCV18VisualIntelligence22EspressoRequestHandler17ScaledBufferCache.h"
#include "_TtC18VisualIntelligence20TriggeringModelsNode.h"
#include "_TtC18VisualIntelligence13CancelSession.h"
#include "_TtC18VisualIntelligence12ResizingNode.h"
#include "_TtC18VisualIntelligence19BoxScorerCompatible.h"
#include "_TtC18VisualIntelligence11S2EdgeIndex.h"
#include "_TtC18VisualIntelligence10SearchFlow.h"
#include "_TtC18VisualIntelligence21ServerSearchProcessor.h"
#include "_TtC18VisualIntelligence35VisualIntelligenceServiceCompatible.h"
#include "_TtC18VisualIntelligence14FeatureExactor.h"
#include "_TtC18VisualIntelligence12EngineResult.h"
#include "_TtC18VisualIntelligence24TriggeringModelProcessor.h"
#include "_TtC18VisualIntelligence23EmbeddingRequestFactory.h"
#include "_TtC18VisualIntelligence24VisualDomainGlyphManager.h"
#include "_TtC18VisualIntelligence19DomainModelRegistry.h"
#include "_TtC18VisualIntelligence12TrialWrapper.h"
#include "_TtC18VisualIntelligence22EmbeddingPostProcessor.h"
#include "_TtC18VisualIntelligence26VITextLookupFlowCompatible.h"
#include "_TtC18VisualIntelligence22ParseGraphInputCreator.h"
