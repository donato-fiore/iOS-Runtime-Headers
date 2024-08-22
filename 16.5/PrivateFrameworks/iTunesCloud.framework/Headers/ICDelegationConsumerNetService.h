// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDELEGATIONCONSUMERNETSERVICE_H
#define ICDELEGATIONCONSUMERNETSERVICE_H

@class NSNetService, NSString, NSDictionary;
@protocol NSNetServiceDelegate, OS_dispatch_queue, ICDelegationConsumerNetServiceDelegate;

#import <Foundation/Foundation.h>

#import "ICDelegationServiceSecuritySettings.h"

@interface ICDelegationConsumerNetService : NSObject <NSNetServiceDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _didPublish;
    BOOL _isPublished;
    NSNetService *_netService;
    NSObject<OS_dispatch_queue> *_netServiceQueue;
    ICDelegationServiceSecuritySettings *_securitySettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICDelegationConsumerNetServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ICDelegationServiceSecuritySettings *securitySettings;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *userIdentityDelegationAccountUUIDs; // ivar: _userIdentityDelegationAccountUUIDs


-(id)initWithUserIdentityDelegationAccountUUIDs:(id)arg0 ;
-(void)_updateNetServiceStatus;
-(void)dealloc;
-(void)netService:(id)arg0 didAcceptConnectionWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)netService:(id)arg0 didNotPublish:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg0 ;
-(void)publish;
-(void)stop;


@end


#endif