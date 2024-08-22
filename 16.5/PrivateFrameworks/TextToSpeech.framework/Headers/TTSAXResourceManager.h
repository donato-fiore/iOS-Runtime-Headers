// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSAXRESOURCEMANAGER_H
#define TTSAXRESOURCEMANAGER_H

@class NSMutableDictionary, NSHashTable, NSSet, AXAssetController, AXAssetsService, NSString, AXAsset;
@protocol AXAssetControllerObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TTSAXResourceManager : NSObject <AXAssetControllerObserver>

 {
    os_unfair_lock_s _resourcesLock;
    NSMutableDictionary *_resourcesById;
    NSMutableDictionary *_resources;
    os_unfair_lock_s _observersLock;
    NSHashTable *_observers;
}


@property (retain, nonatomic) NSSet *allAvailableLanguages; // ivar: _allAvailableLanguages
@property (retain, nonatomic) AXAssetController *assetController; // ivar: _assetController
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetLoadingQueue; // ivar: _assetLoadingQueue
@property (retain, nonatomic) AXAssetsService *assetsService; // ivar: _assetsService
@property (retain, nonatomic) NSString *catalogBuildVersion; // ivar: _catalogBuildVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL downloadingSamples; // ivar: _downloadingSamples
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AXAssetController *legacyCombinedVocalizerAssetController; // ivar: _legacyCombinedVocalizerAssetController
@property (retain, nonatomic) AXAssetController *legacyMacinTalkAssetController; // ivar: _legacyMacinTalkAssetController
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *preferenceWriteQueue; // ivar: _preferenceWriteQueue
@property (retain, nonatomic) AXAsset *samplesAsset; // ivar: _samplesAsset
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_isValidResourceTypeKey:(id)arg0 ;
-(BOOL)readDidMigrateUninformedSiriVoicesFromPreferences;
-(NSInteger)readResourceCacheVersionFromPreferences;
-(NSUInteger)_managerTypeForResourceType:(NSUInteger)arg0 ;
-(id)_axAssetsForTTSAXResourceModel:(BOOL)arg0 ;
-(id)_debugCountSummaryForResources:(id)arg0 ;
-(id)_dictionaryForResources:(id)arg0 ;
-(id)_findAndSwapLegacyMacinTalkAssetsForMacinTalkResources:(id)arg0 ;
-(id)_findLocalResourcesForPath:(id)arg0 ;
-(id)_findResourcesForLegacyAssets;
-(id)_getSynthesisProviderResources;
-(id)_readCatalogBuildNumberFromPreferences;
-(id)_readResourcesFromPreferences;
-(id)_refreshAssetForResource:(id)arg0 withAssetController:(id)arg1 installedOnly:(BOOL)arg2 ;
-(id)_refreshResourcesForManagerType:(NSUInteger)arg0 ;
-(id)_refreshSamples:(BOOL)arg0 ;
-(id)_refreshSiriResources:(BOOL)arg0 ;
-(id)_resourceWithVoiceId:(id)arg0 assetId:(id)arg1 ;
-(id)_resourcesForAssets:(id)arg0 ;
-(id)_resourcesWithType:(NSUInteger)arg0 subType:(NSUInteger)arg1 languageCode:(id)arg2 ;
-(id)allLanguagesForVoices:(BOOL)arg0 ;
-(id)allVoices:(BOOL)arg0 ;
-(id)defaultVoiceForLanguage:(id)arg0 ;
-(id)init;
-(id)languageCodeForResourceName:(id)arg0 withType:(NSUInteger)arg1 ;
-(id)refreshAssetForResource:(id)arg0 installedOnly:(BOOL)arg1 ;
-(id)refreshResourcesCacheForManagerType:(NSUInteger)arg0 ;
-(id)refreshedResourcesForResources:(id)arg0 ;
-(id)resourceWithAssetId:(id)arg0 ;
-(id)resourceWithVoiceId:(id)arg0 ;
-(id)resources;
-(id)resourcesWithLanguage:(id)arg0 type:(NSUInteger)arg1 ;
-(id)resourcesWithType:(NSUInteger)arg0 subType:(NSUInteger)arg1 ;
-(id)sampleURLForVoiceId:(id)arg0 ;
-(id)speechVoiceWithVoiceId:(id)arg0 ;
-(id)superCompactVoiceIdForCompactVoiceId:(id)arg0 ;
-(void)_deleteResource:(id)arg0 ;
-(void)_deleteSiriVoiceAssetWithResource:(id)arg0 ;
-(void)_downloadLegacyResourceForTesting:(id)arg0 ;
-(void)_downloadResource:(id)arg0 userInitiated:(BOOL)arg1 ;
-(void)_downloadSiriVoiceAssetWithResource:(id)arg0 ;
-(void)_mergeInExpensiveInstalledAssets:(BOOL)arg0 notifyObservers:(BOOL)arg1 ;
-(void)_notifyObserversOfCacheUpdate;
-(void)_performBlockOnObservers:(id)arg0 ;
-(void)_stopDownloadResource:(id)arg0 ;
-(void)_stopDownloadSiriVoiceAssetWithResource:(id)arg0 ;
-(void)_updateCachedResources:(id)arg0 ;
-(void)_writeResourceCacheVersionToPreferences;
-(void)_writeResourcesToPreferences:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)assetController:(id)arg0 asset:(id)arg1 downloadProgressTotalWritten:(NSInteger)arg2 totalExpected:(NSInteger)arg3 isStalled:(BOOL)arg4 expectedTimeRemaining:(CGFloat)arg5 ;
-(void)assetController:(id)arg0 didFinishDownloadingAsset:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 hasRemainingDownloads:(BOOL)arg4 ;
-(void)dealloc;
-(void)deleteResourceWithAssetId:(id)arg0 ;
-(void)deleteResourceWithVoiceId:(id)arg0 ;
-(void)downloadResourceWithAssetId:(id)arg0 ;
-(void)downloadResourceWithVoiceId:(id)arg0 ;
-(void)downloadResourceWithVoiceId:(id)arg0 userInitiated:(BOOL)arg1 ;
-(void)downloadSamplesIfNecessary;
-(void)purgeLegacyResourceCache;
-(void)rebuildSystemCacheForActionType:(NSUInteger)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)resetInMemoryAssetCatalogs;
-(void)resetResourcesCache;
-(void)stopDownloadResourceWithVoiceId:(id)arg0 ;
-(void)updateCatalogBuildVersion:(id)arg0 ;
-(void)updateCatalogIfNeeded;
-(void)updateDidMigrateUninformedSiriVoices:(BOOL)arg0 ;


@end


#endif