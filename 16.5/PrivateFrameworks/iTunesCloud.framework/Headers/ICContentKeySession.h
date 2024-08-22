// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCONTENTKEYSESSION_H
#define ICCONTENTKEYSESSION_H

@class AVContentKeySession, NSMutableSet, NSMutableArray, NSSet, NSURL, NSMutableDictionary, NSNumber, NSString;
@protocol AVContentKeySessionDelegate, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source, ICContentKeySessionDelegateProtocol, ICContentKeyStoreProtocol;

#import <Foundation/Foundation.h>

#import "ICFileContentKeyStore.h"
#import "ICStoreRequestContext.h"

@interface ICContentKeySession : NSObject <AVContentKeySessionDelegate>

 {
    AVContentKeySession *_contentKeySession;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_pendingKeyIdentifiers;
    NSMutableSet *_pendingRenewalKeyIdentifiers;
    NSMutableArray *_renewalCompletionBlocks;
    NSObject<OS_dispatch_semaphore> *_waitForKeysSemaphore;
    NSSet *_prefetchKeyIdentifiers;
    NSURL *_prefetchKeyServerURL;
    NSURL *_prefetchKeyCertificateURL;
    ICFileContentKeyStore *_prefetchedContentKeyStore;
    NSMutableDictionary *_keyRenewalDates;
    NSMutableDictionary *_completedKeyRequests;
    NSMutableDictionary *_keyResponses;
    NSObject<OS_dispatch_source> *_keyRenewalTimer;
    BOOL _automaticKeyRenewalPaused;
    BOOL _active;
    id<ICContentKeySessionDelegateProtocol> *_delegate;
}


@property (copy, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (nonatomic) BOOL allowFallbackToStreamingKeys; // ivar: _allowFallbackToStreamingKeys
@property (nonatomic) BOOL bypassCache; // ivar: _bypassCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *keyCertificateURL; // ivar: _keyCertificateURL
@property (nonatomic) NSInteger keyServerProtocolType; // ivar: _keyServerProtocolType
@property (copy, nonatomic) NSURL *keyServerURL; // ivar: _keyServerURL
@property (readonly, nonatomic) NSObject<ICContentKeyStoreProtocol> *keyStore; // ivar: _keyStore
@property (copy, nonatomic) NSURL *offlineLeaseStartURL; // ivar: _offlineLeaseStartURL
@property (copy, nonatomic) NSURL *offlineLeaseStopNonceURL; // ivar: _offlineLeaseStopNonceURL
@property (copy, nonatomic) NSURL *offlineLeaseStopURL; // ivar: _offlineLeaseStopURL
@property (copy, nonatomic) NSString *playbackToken; // ivar: _playbackToken
@property (readonly, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (nonatomic) BOOL requestOfflineKeys; // ivar: _requestOfflineKeys
@property (copy, nonatomic) NSURL *streamingleaseStopURL; // ivar: _streamingleaseStopURL
@property (readonly) Class superclass;


+(id)copyKeysToPendingInvalidationStoreFromPath:(id)arg0 ;
+(id)enhancedAudioSharedContentKeyPath;
+(id)pendingInvalidationKeyStorePath;
-(id)init;
-(id)initWithRequestContext:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 keyStore:(id)arg1 ;
-(id)initWithRequestContext:(id)arg0 keyStore:(id)arg1 delegate:(id)arg2 ;
-(void)_finishProcessingKeyWithIdentifier:(id)arg0 ;
-(void)_invalidateKeyWithIdentifier:(id)arg0 forAdamID:(id)arg1 offline:(BOOL)arg2 usingAccountDSID:(id)arg3 keyData:(id)arg4 withCompletion:(id)arg5 ;
-(void)_performKeyDeliveryRequestForContentKeyRequest:(id)arg0 persistResponse:(BOOL)arg1 isRenewal:(BOOL)arg2 ;
-(void)_processKeyWithIdentifier:(id)arg0 ;
-(void)_renewExpiredKeys;
-(void)_scheduleKeyRefreshTimer;
-(void)addAsset:(id)arg0 ;
-(void)addAsset:(id)arg0 shouldPreloadKeys:(BOOL)arg1 waitForKeyIdentifiers:(BOOL)arg2 ;
-(void)contentKeySession:(id)arg0 contentKeyRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)contentKeySession:(id)arg0 contentKeyRequestDidSucceed:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvideContentKeyRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvidePersistableContentKeyRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvideRenewingContentKeyRequest:(id)arg1 ;
-(void)dealloc;
-(void)invalidateKeyWithIdentifier:(id)arg0 withCompletion:(id)arg1 ;
-(void)pauseAutomaticKeyRenewal;
-(void)processKeyWithIdentifier:(id)arg0 ;
-(void)removeAsset:(id)arg0 ;
-(void)resumeAutomaticKeyRenewal;
-(void)stopSessionInvalidatingKeys:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)waitForAllKeysToProcess;
-(void)waitForAllKeysToProcessWithTimeout:(CGFloat)arg0 ;
-(void)waitForKeyRenewalsWithCompletionHandler:(id)arg0 ;


@end


#endif