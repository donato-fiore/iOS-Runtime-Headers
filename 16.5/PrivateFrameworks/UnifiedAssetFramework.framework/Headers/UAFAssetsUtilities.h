// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UAFASSETSUTILITIES_H
#define UAFASSETSUTILITIES_H

@class TRIClient, AFSettingsConnection, AFPreferences;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface UAFAssetsUtilities : NSObject {
    TRIClient *_client;
    AFSettingsConnection *_connection;
    AFPreferences *_preferences;
    NSObject<OS_os_log> *_logCategory;
}




+(id)stringFromUAFAssetsState:(NSUInteger)arg0 ;
-(BOOL)_assetsAreAvailable;
-(BOOL)_downloadAssetsWithState:(*NSUInteger)arg0 context:(*id)arg1 ;
-(BOOL)_hasInexpensiveNetwork;
-(BOOL)_languageDiffersFromCurrent:(id)arg0 ;
-(BOOL)_languageSupportsUODWithASR:(id)arg0 ;
-(BOOL)_supportsLocale:(id)arg0 ;
-(NSUInteger)_cacheDeleteAvailableWithStats:(struct statfs *)arg0 ;
-(NSUInteger)_getMockAssetStateWithContext:(*id)arg0 ;
-(id)_assetSpaceRequired;
-(id)_beginDownloadNamespaces:(id)arg0 ;
-(id)_currentLanguage;
-(id)_lowPoweredNamespaces;
-(id)_regionCodeFromLocale:(id)arg0 ;
-(id)_requiredNamespaces;
-(id)init;
-(id)initWithTrialClient:(id)arg0 settingsConn:(id)arg1 prefsInstance:(id)arg2 ;
-(unsigned int)_veryLowDiskThresholdWithStats:(struct statfs *)arg0 ;
-(void)_beginDownloadFactor:(id)arg0 inNamespace:(id)arg1 ;
// -(void)_downloadAssetsWithStatusHandler:(id)arg0 availableAttempts:(unk)arg1 language:(NSUInteger)arg2  ;
-(void)_emitDownloadTriggerEventWithLanguage:(id)arg0 hasExistingAssets:(BOOL)arg1 retryCount:(NSUInteger)arg2 ;
-(void)_statMountPoint:(struct statfs *)arg0 ;
-(void)_subscribeOnDemandAssetsForLanguage:(id)arg0 ;
-(void)checkAssetsForLanguage:(id)arg0 userInitiated:(BOOL)arg1 withStatusHandler:(id)arg2 ;
-(void)dealloc;


@end


#endif