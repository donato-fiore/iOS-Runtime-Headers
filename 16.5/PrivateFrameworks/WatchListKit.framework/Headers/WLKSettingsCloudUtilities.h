// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKSETTINGSCLOUDUTILITIES_H
#define WLKSETTINGSCLOUDUTILITIES_H


#import <Foundation/Foundation.h>


@interface WLKSettingsCloudUtilities : NSObject



+(BOOL)cloudSyncEnabled;
+(BOOL)synchronizeSettingsFromCloudIfNeeded:(*id)arg0 ;
+(id)_connection;
+(id)_queue;
+(id)_syncDictionaryForAppSettings:(id)arg0 ;
+(id)_syncDictionaryForLocalStore;
+(void)_fetchSyncDictionary:(id)arg0 ;
+(void)_postChangeDictionaryToCloud:(id)arg0 completion:(id)arg1 ;
+(void)deleteAllHistoryWithCompletion:(id)arg0 ;
+(void)forceUpdateWithCompletion:(id)arg0 ;
+(void)resetAccountWithCompletion:(id)arg0 ;
+(void)synchronizeSettingsFromCloudIfNeededWithCompletion:(id)arg0 ;
+(void)updateCloudStoreAccountLevelSetting:(id)arg0 value:(id)arg1 completion:(id)arg2 ;
+(void)updateCloudStoreAppSettings:(id)arg0 deleteHistory:(BOOL)arg1 completion:(id)arg2 ;
+(void)updateCloudStoreAppSettings:(id)arg0 deleteHistory:(BOOL)arg1 removeEntry:(BOOL)arg2 completion:(id)arg3 ;
+(void)updateCloudStoreWithCompletion:(id)arg0 ;
+(void)updateLocalStoreWithCompletion:(id)arg0 ;


@end


#endif