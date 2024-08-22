// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTSPEECHTRANSLATIONASSETINFO_H
#define _LTSPEECHTRANSLATIONASSETINFO_H

@class NSDictionary, MAAsset, NSArray;

#import <Foundation/Foundation.h>

#import "_LTOfflineAssetManager.h"
#import "_LTLocalePair.h"

@interface _LTSpeechTranslationAssetInfo : NSObject {
    _LTOfflineAssetManager *_assetManager;
    _LTLocalePair *_localePair;
    NSDictionary *_pairDictionary;
    MAAsset *_sourceASRModel;
    MAAsset *_targetASRModel;
    NSArray *_allAssets;
    NSArray *_mtAssets;
    NSArray *_missingAssets;
    NSArray *_missingMTAssets;
    BOOL _needsUpdate;
    NSArray *_modelURLs;
}




+(void)initialize;
-(BOOL)_validateSymlinksForAssets:(id)arg0 ;
-(BOOL)isCompleteBidirectionalModel;
-(BOOL)isCompletePassthroughModel;
-(BOOL)updateAvailableInAssets:(id)arg0 ;
-(NSUInteger)_mtModelOfflineState;
-(id)_getTranslationConfig;
-(id)_languagePairDirectory;
-(id)availabilityInfo;
-(id)description;
-(id)initWithInstalledAssets:(id)arg0 catalogAssets:(id)arg1 localePair:(id)arg2 configInfo:(id)arg3 assetManager:(id)arg4 ;
-(id)speechModelURLForLocale:(id)arg0 ;
-(id)speechModelVersionForLocale:(id)arg0 ;
-(id)translationModelURLs;
-(void)_createSymlinkDirectoryForAssets:(id)arg0 ;
-(void)createSymlinkDirectoryForMTAssets;
-(void)downloadAssetsUserInitiated:(BOOL)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)purgeAssetUserInitiated:(BOOL)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)referenceAssets:(id)arg0 catalogAssets:(id)arg1 ;


@end


#endif