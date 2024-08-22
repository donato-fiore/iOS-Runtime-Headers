// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIOFFLINEKEYRENEWALMANAGER_H
#define VUIOFFLINEKEYRENEWALMANAGER_H

@class NSMutableDictionary, NSString, NSMutableArray, NSTimer, TVPStateMachine;
@protocol VUIStoreFPSKeyLoaderDelegate, TVPDownloadDelegate;

#import <Foundation/Foundation.h>


@interface VUIOfflineKeyRenewalManager : NSObject <VUIStoreFPSKeyLoaderDelegate, TVPDownloadDelegate>



@property (nonatomic) NSUInteger backgroundTaskIdentifier; // ivar: _backgroundTaskIdentifier
@property (retain, nonatomic) NSMutableDictionary *contentKeySessions; // ivar: _contentKeySessions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *downloadsForRepairingKeys; // ivar: _downloadsForRepairingKeys
@property (retain, nonatomic) NSTimer *expirationTimer; // ivar: _expirationTimer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *keyLoaders; // ivar: _keyLoaders
@property (retain, nonatomic) NSTimer *keyRenewalTimer; // ivar: _keyRenewalTimer
@property (nonatomic) BOOL networkErrorOccurredDuringInvalidation; // ivar: _networkErrorOccurredDuringInvalidation
@property (retain, nonatomic) TVPStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


+(id)_keyInfosForVideo:(id)arg0 outKeyIdentifiers:(id)arg1 ;
+(id)sharedInstance;
-(id)init;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_expirationTimerDidFire:(id)arg0 ;
-(void)_fetchNewKeysForVideosWithBrokenKeys:(id)arg0 ;
-(void)_isPlaybackUIBeingShownDidChange:(id)arg0 ;
-(void)_networkReachbilityDidChange:(id)arg0 ;
-(void)_registerStateMachineHandlers;
-(void)_renewKeysForVideos:(id)arg0 outCompletedKeyRequests:(id)arg1 completion:(id)arg2 ;
-(void)_renewKeysForVideosGroupedByCertURL:(id)arg0 outCompletedKeyRequests:(id)arg1 completion:(id)arg2 ;
-(void)_renewalTimerDidFire:(id)arg0 ;
-(void)download:(id)arg0 didChangeStateTo:(NSInteger)arg1 ;
-(void)storeFPSKeyLoader:(id)arg0 didLoadOfflineKeyData:(id)arg1 forKeyRequest:(id)arg2 ;
-(void)updateKeyRenewalAndExpiration;


@end


#endif