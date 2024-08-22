// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTASSETMANAGER_H
#define VTASSETMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VTPolicy.h"

@interface VTAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    VTPolicy *_enablePolicy;
}




+(id)sharedInstance;
-(BOOL)_isReadyToUse;
-(id)_assetQueryForLanguage:(id)arg0 supportPremium:(BOOL)arg1 ;
-(id)_defaultDownloadOptions;
-(id)_filteredAssetsForAssets:(id)arg0 language:(id)arg1 supportPremium:(BOOL)arg2 ;
-(id)_findLatestInstalledAsset:(id)arg0 ;
-(id)_installedAssetForLanguage:(id)arg0 supportPremium:(BOOL)arg1 ;
-(id)_installedAssetWithoutMetaDataForLanguage:(id)arg0 supportPremium:(BOOL)arg1 ;
-(id)assetForLanguage:(id)arg0 ;
-(id)init;
-(id)installedAssetForLanguage:(id)arg0 ;
-(void)_addKeyValuePairForQuery:(*id)arg0 ;
-(void)_downloadAsset:(id)arg0 withComplete:(id)arg1 ;
-(void)_fetchRemoteAssetForLanguage:(id)arg0 supportPremium:(BOOL)arg1 ;
-(void)_fetchRemoteMetaData;
-(void)_runAssetQuery:(id)arg0 completion:(id)arg1 ;
// -(void)_startDownloadingVoiceTriggerAsset:(id)arg0 progress:(id)arg1 completion:(unk)arg2  ;
-(void)_updateFromRemoteToLocalAssets:(id)arg0 ;


@end


#endif