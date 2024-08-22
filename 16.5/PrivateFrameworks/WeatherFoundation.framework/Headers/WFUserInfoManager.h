// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFUSERINFOMANAGER_H
#define WFUSERINFOMANAGER_H

@class NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue, WFUserInfoManagerDelegate;

#import <Foundation/Foundation.h>


@interface WFUserInfoManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) NSObject<WFUserInfoManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *encryptedStore; // ivar: _encryptedStore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ubiquitousKVSCommunicationsQueue; // ivar: _ubiquitousKVSCommunicationsQueue


-(id)init;
-(void)dealloc;
-(void)encryptedStoreChanged:(id)arg0 ;
-(void)readUserIdentifierAndNotify;
-(void)synchronize;


@end


#endif