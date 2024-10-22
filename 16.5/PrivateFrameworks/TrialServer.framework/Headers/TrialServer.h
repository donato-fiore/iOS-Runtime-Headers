

#include "TRIPurgeableConstructs.h"
#include "TRIAssetPurger.h"
#include "TRIDynamicNamespaceRecord.h"
#include "TRITaskRecord.h"
#include "TRITaskQueuingOptions.h"
#include "TRITaskRunResult.h"
#include "TRIXPCActivityState.h"
#include "TRITaskAttributionInternalInsecure.h"
#include "TRISignedAssetURL.h"
#include "TRILaunchDaemonActivityDescriptor.h"
#include "TRIClientTreatmentArtifact.h"
#include "TRIContentTrackingId.h"
#include "TRIActivationEventRecord.h"
#include "TRIFactorPackSet.h"
#include "TRIParsedFactorPackSet.h"
#include "TRIClientRolloutArtifact.h"
#include "TRIRolloutRecord.h"
#include "TRITreatmentContentDescriptor.h"
#include "TRIContentDescriptorUnion.h"
#include "TRIAssetDiffArtifact.h"
#include "TRISizedCKRecordID.h"
#include "TRIAssetIdURL.h"
#include "TRITreatmentQualifiedAssetIndex.h"
#include "TRICKAssetMetadata.h"
#include "TRIMAAssetMetadata.h"
#include "TRIRequiredCloudKitAsset.h"
#include "TRIRequiredMAAsset.h"
#include "TRIGenericRequiredAssets.h"
#include "TRIGenericUniqueRequiredAssets.h"
#include "TRIExperimentRecord.h"
#include "TRIFactorPackAsset.h"
#include "TRIPurgeableFactorPack.h"
#include "TRICKRecordProgress.h"
#include "TRITreatmentRecordFetchPlan.h"
#include "TRITreatmentAssetFetchPlan.h"
#include "TRIFactorPackAssetFetchPlan.h"
#include "TRIFetchOptions.h"
#include "TRIRuleQualifiedFactorPackSetId.h"
#include "TRIDiskUsage.h"
#include "TRIFactorNamespaceRecord.h"
#include "TRIHotfixRolloutTargetingScheduler.h"
#include "TRIMobileAssetUtil.h"
#include "TRIScheduleFetchExperimentNotificationsTask.h"
#include "TRISQLiteCKQueryCursor.h"
#include "TRISQLiteCKContainer.h"
#include "TRISQLiteCKDatabase.h"
#include "TRINamespaceDescriptorSetExternalRefStore.h"
#include "TRINamespaceDescriptorSetStorage.h"
#include "TRITaskSupport.h"
#include "TRIExperimentTaskSupportGuardedData.h"
#include "TRIExperimentTaskSupport.h"
#include "TRIRolloutTaskSupportGuardedData.h"
#include "TRIRolloutTaskSupport.h"
#include "TRILighthouseBitacoraHandler.h"
#include "TRIExperimentBaseTaskGuardedData.h"
#include "TRIExperimentBaseTask.h"
#include "TRILogTreatmentProvider.h"
#include "TRITargetingTask.h"
#include "TRITripersistedTreatmentRoot.h"
#include "TRIPersistedTreatment.h"
#include "TRIXPCHandlerWrapper.h"
#include "TRIXPCInternalServiceWrapper.h"
#include "TRIXPCNamespaceManagementServiceWrapper.h"
#include "TRIXPCStatusServiceWrapper.h"
#include "TRIXPCInternalSystemServiceWrapper.h"
#include "TRIExpressionValidator.h"
#include "TRIMaintenanceTaskGuardedData.h"
#include "TRIMaintenanceTask.h"
#include "TRIMLRuntimeEvaluationHistoryDatabase.h"
#include "TRIClientExperimentArtifact.h"
#include "TRIInternalServiceRequestHandler.h"
#include "TRIXPCInternalServiceListener.h"
#include "TRISubscribeChannelTask.h"
#include "TRISQLiteCKDatabaseFailureInjectionDelegate.h"
#include "TRIDiffableAssetBuilder.h"
#include "TRICacheDeleteCallbacks.h"
#include "TRIPostUpgradeCleanupTask.h"
#include "TRIActivationEventDatabase.h"
#include "TRIRolloutDeploymentRefStore.h"
#include "TRIExperimentDeploymentRefStore.h"
#include "TRINamespaceResolverStorage.h"
#include "TRIMakeDefaultTask.h"
#include "TRIXPCServerContextPromise.h"
#include "TRIActivateTreatmentTask.h"
#include "TRICKQueryLogGuardedData.h"
#include "TRICKQueryLog.h"
#include "TRIXPCActivityManager.h"
#include "TRIFetchTreatmentTask.h"
#include "TRISystemCovariates.h"
#include "TRIRecurrentScheduleFetchRollbacksTask.h"
#include "TRIAggregateFetchRecordsProgressGuardedData.h"
#include "TRIAggregateFetchRecordsProgress.h"
#include "TRIDeferralNotifier.h"
#include "TRIFetchSingleRolloutNotificationTask.h"
#include "TRITaskUtils.h"
#include "TRINamespaceKeyLocator.h"
#include "TRICKOpCancelingGuardedData.h"
#include "TRICancelableCKOperation.h"
#include "TRIAssetDiffQueryGuardedData.h"
#include "TRICKNativeArtifactProvider.h"
#include "TRIFetchOnDemandFactorsTaskGuardedData.h"
#include "TRIFetchOnDemandFactorsTask.h"
#include "TRITaskDatabase.h"
#include "TRIDeactivateTreatmentTask.h"
#include "TRIFetchMultipleExperimentNotificationsTask.h"
#include "TRIPushChannelId.h"
#include "TRIServerContext.h"
#include "TRIPushServiceConnection.h"
#include "TRINotificationReactionChecker.h"
#include "TRIUrgentRollbackScheduler.h"
#include "TRIFactorPackStorage.h"
#include "TRIInternalSystemServiceRequestHandler.h"
#include "TRIXPCInternalSystemServiceListener.h"
#include "TRIDisenrollRolloutGuardedData.h"
#include "TRIDisenrollRolloutTask.h"
#include "TRISQLiteMADatabase.h"
#include "TRIImmediateDownloadTelemetryGenerator.h"
#include "TRIMAProvidingGuardedData.h"
#include "TRISQLiteMAAutoAsset.h"
#include "TRIMAAutoAsset.h"
#include "TRICancelableMAOperation.h"
#include "TRIMAProvider.h"
#include "TRIAssetStore.h"
#include "TRITreatmentBaseTask.h"
#include "TRIXPCServices.h"
#include "TRIRemoteAssetExtractor.h"
#include "TRIRolloutDatabase.h"
#include "TRITripersistedExperimentArtifactRoot.h"
#include "TRIPersistedExperimentArtifact.h"
#include "TRISandboxExtensionFactory.h"
#include "TRISignatureKey.h"
#include "TRIPushNotificationHandler.h"
#include "TRIDeferredDeleter.h"
#include "TRIXPCActivityCriteria.h"
#include "TRIFetchRolloutNotificationListTask.h"
#include "TRIActivateTargetedRolloutDeploymentTask.h"
#include "TRIFactorPackSetExternalReferenceStore.h"
#include "TRIFactorPackSetStorage.h"
#include "TRIUserCovariates.h"
#include "TRIUserAdjustableSettings.h"
#include "TRISetupAssistantFetchUtils.h"
#include "TRIFetchFactorPackSetTask.h"
#include "TRITaskQueueOperation.h"
#include "TRITaskQueueGuardedData.h"
#include "TRITaskQueue.h"
#include "TRITrifetchTaskErrorsRoot.h"
#include "TRIPurgeableExperimentAndRolloutProvider.h"
#include "TRIXPCNamespaceManagementRequestHandler.h"
#include "TRIXPCNamespaceManagementServiceListener.h"
#include "TRIFetchDateManager.h"
#include "TRIRemoteAssetDecrypter.h"
#include "TRIKVStore.h"
#include "TRIExperimentDatabase.h"
#include "TRISequenceTask.h"
#include "TRIPurgeableNamespacesProvider.h"
#include "TRISelectRolloutNotificationGuardedData.h"
#include "TRISelectRolloutNotificationListTask.h"
#include "TRITelemetryFactory.h"
#include "TRIRemoteAssetPatcher.h"
#include "TRINamespaceDatabase.h"
#include "TRIRolloutTargetingOperation.h"
#include "TRITaskCapabilityUtilities.h"
#include "TRITaskCapabilityModifier.h"
#include "TRIReferenceManagedDir.h"
#include "TRIFetchRetryUtils.h"
#include "TRIXPCInternalServiceClient.h"
#include "TRIPersistentUserSettings.h"
#include "TRITripersistedClientRolloutArtifactRoot.h"
#include "TRIPersistedClientRolloutArtifact.h"
#include "TRIBaseTask.h"
#include "TRIAssetStoreOperator.h"
#include "TRINamespaceFactorSubscriptionSettings.h"
#include "TRITripersistedTasksRoot.h"
#include "TRIAnyPersistedTask.h"
#include "TRIPersistedTaskAttribution.h"
#include "TRIPersistedTaskCapabilityModifier.h"
#include "TRIActivateTreatmentPersistedTask.h"
#include "TRIDeactivateTreatmentPersistedTask.h"
#include "TRIFetchTreatmentPersistedTask.h"
#include "TRIFetchExperimentPersistedTask.h"
#include "TRIFetchExperimentNotificationsPersistedTask.h"
#include "TRITargetingPersistedTask.h"
#include "TRIMaintenancePersistedTask.h"
#include "TRIRotateSubjectIdPersistedTask.h"
#include "TRIMakeDefaultPersistedTask.h"
#include "TRIRetargetAllPersistedTask.h"
#include "TRIConfigurationPersistedTask.h"
#include "TRIPostUpgradeCleanupPersistedTask.h"
#include "TRISequencePersistedTask.h"
#include "TRIScheduleFetchExperimentNotificationsPersistedTask.h"
#include "TRIRecurrentScheduleFetchRollbacksPersistedTask.h"
#include "TRIFetchOnDemandFactorsPersistedTask.h"
#include "TRIFetchOnDemandFactorsPersistedTask_TreatmentAssetIndexes.h"
#include "TRIFetchOnDemandFactorsPersistedTask_AssetIdFactorName.h"
#include "TRIFetchOnDemandFactorsPersistedTask_FactorPackAssetIds.h"
#include "TRIFetchSingleRolloutNotificationPersistedTask.h"
#include "TRIFetchFactorPackSetPersistedTask.h"
#include "TRIActivateTargetedRolloutDeploymentPersistedTask.h"
#include "TRIRolloutTargetingPersistedTask.h"
#include "TRIFetchRolloutNotificationListPersistedTask.h"
#include "TRISetupAssistantFetchPersistedTask.h"
#include "TRISelectRolloutNotificationListPersistedTask.h"
#include "TRIDisenrollRolloutPersistedTask.h"
#include "TRISubscribeChannelPersistedTask.h"
#include "TRIUnsubscribeChannelPersistedTask.h"
#include "TRIContentTracker.h"
#include "TRIRetargetAllTask.h"
#include "TRIUnitTestStorageManagement.h"
#include "TRITempDirScopeGuard.h"
#include "TRIDServer.h"
#include "TRISetupAssistantFetchTelemetryGenerator.h"
#include "TRIFetchExperimentTask.h"
#include "TRIStorageManagement.h"
#include "TRIRolloutTargeter.h"
#include "TRIRotateSubjectIdTask.h"
#include "TRIPushServiceConnectionMultiplexer.h"
#include "TRIPushServiceConnectionCreator.h"
#include "TRISetupAssistantFetchTask.h"
#include "TRINamespaceDescriptorProvider.h"
#include "TRIRunningXPCActivityDescriptor.h"
#include "TRIXPCActivitySupport.h"
#include "TRICacheDeleteUtils.h"
#include "TRIDownloadLatencyTaskResultTelemetryBuilder.h"
#include "TRIConfigurationTask.h"
#include "TRIPurgeableFactorPacksEnumerator.h"
#include "TRIAssetMetadataReservedKeys.h"
#include "TRIClientTreatmentStorage.h"
#include "TRICKOperationGroupFactory.h"
#include "TRILimitedCarryProfileManager.h"
#include "TRILatencyMetricTelemetryValidator.h"
#include "TRIRolloutTargetingTask.h"
#include "TRIClientFactorPackUtils.h"
#include "TRIAssetStoreDatabase.h"
#include "TRIAllocationStatusEntitlementSet.h"
#include "TRIXPCStatusRequestHandler.h"
#include "TRIXPCStatusServiceListener.h"
#include "TRIActivateTreatmentBaseTask.h"
#include "TRIUnsubscribeChannelTask.h"
#include "TRIDatabase.h"
#include "TRIMemoryEfficientFileDigest.h"
#include "TRITritaskOptionsRoot.h"
#include "TRITaskOptions.h"
#include "TRIPeekEnumerator.h"
#include "TRIExperimentHistoryDatabase.h"
#include "TRIRemoteAssetStoreOperator.h"
