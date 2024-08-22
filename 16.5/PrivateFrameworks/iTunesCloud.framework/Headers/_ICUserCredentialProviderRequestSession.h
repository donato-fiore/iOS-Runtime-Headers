// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICUSERCREDENTIALPROVIDERREQUESTSESSION_H
#define _ICUSERCREDENTIALPROVIDERREQUESTSESSION_H

@class NSArray, NSMapTable, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "ICUserIdentityProperties.h"
#import "ICUserIdentityStore.h"

@interface _ICUserCredentialProviderRequestSession : NSObject

@property (copy, nonatomic) ICUserIdentityProperties *activeICloudAccountProperties; // ivar: _activeICloudAccountProperties
@property (readonly, copy, nonatomic) NSArray *credentialRequests; // ivar: _credentialRequests
@property (retain, nonatomic) NSMapTable *delegationCredentialRequestToIdentityProperties; // ivar: _delegationCredentialRequestToIdentityProperties
@property (retain, nonatomic) NSMapTable *delegationCredentialRequestToSpecificUserIdentity; // ivar: _delegationCredentialRequestToSpecificUserIdentity
@property (retain, nonatomic) NSMutableDictionary *delegationUserIdentityToUUIDs; // ivar: _delegationUserIdentityToUUIDs
@property (readonly, nonatomic) BOOL hasPendingResponses;
@property (readonly, nonatomic) ICUserIdentityStore *identityStore;
@property (readonly, nonatomic) NSInteger maximumQualityOfService; // ivar: _maximumQualityOfService
@property (retain, nonatomic) NSMutableArray *pendingPropertyLoadCredentialRequests; // ivar: _pendingPropertyLoadCredentialRequests
@property (retain, nonatomic) NSMutableArray *pendingResponseCredentialRequests; // ivar: _pendingResponseCredentialRequests
@property (readonly, copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)initWithCredentialRequests:(id)arg0 responseHandler:(id)arg1 ;


@end


#endif