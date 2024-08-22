// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDELEGATIONPROVIDERNETSERVICE_H
#define ICDELEGATIONPROVIDERNETSERVICE_H

@class NSMutableArray, NSString, NSArray, NSNetService;
@protocol NSNetServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICDelegationNetServiceTXTRecord.h"

@interface ICDelegationProviderNetService : NSObject <NSNetServiceDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_netServiceStreamResolutionQueue;
    NSMutableArray *_resolutionCompletionHandlers;
    NSInteger _state;
    ICDelegationNetServiceTXTRecord *_txtRecord;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *delegationAccountUUIDs;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNetService *netService; // ivar: _netService
@property (readonly, nonatomic) NSInteger securityMode;
@property (readonly) Class superclass;


-(id)initWithNetService:(id)arg0 ;
-(void)_resolveWithCompletionHandler:(id)arg0 ;
-(void)_setState:(NSInteger)arg0 ;
-(void)_updateTXTRecordProperties;
-(void)dealloc;
-(void)getResolvedStreamsWithCompletionHandler:(id)arg0 ;
-(void)netService:(id)arg0 didNotResolve:(id)arg1 ;
-(void)netService:(id)arg0 didUpdateTXTRecordData:(id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg0 ;


@end


#endif