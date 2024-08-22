// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDELEGATEACCOUNTSTOREXPCWRITER_H
#define ICDELEGATEACCOUNTSTOREXPCWRITER_H

@class NSXPCConnection, NSString;
@protocol ICDelegateAccountStoreServiceClient, ICDelegateAccountStoreWriter, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICDelegateAccountStoreOptions.h"

@interface ICDelegateAccountStoreXPCWriter : NSObject <ICDelegateAccountStoreServiceClient, ICDelegateAccountStoreWriter>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICDelegateAccountStoreOptions *_accountStoreOptions;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCConnection *_connection;
    BOOL _hasReceivedConnectionInvalidation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *externalChangeHandler; // ivar: _externalChangeHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_onceWithCompletionHandler:(id)arg0 ;
-(id)initWithAccountStoreOptions:(id)arg0 ;
-(void)_getXPCConnectionWithCompletion:(id)arg0 ;
-(void)addDelegationUUIDs:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)delegateAccountStoreDidChange;
-(void)invalidate;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)recreateWithCompletionHandler:(id)arg0 ;
-(void)removeAllTokensWithCompletionHandler:(id)arg0 ;
-(void)removeDelegationUUIDs:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeIdentityPropertiesForUserIdentity:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeTokenForUserIdentity:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeTokensExpiringBeforeDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)setIdentityProperties:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)setToken:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif