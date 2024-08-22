// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSAPPLICATIONCONTROLLERRESPONSE_H
#define VSAPPLICATIONCONTROLLERRESPONSE_H

@class NSSet, NSString, NSNumber, NSArray;

#import <Foundation/Foundation.h>

#import "VSAccountAuthentication.h"

@interface VSApplicationControllerResponse : NSObject

@property (retain, nonatomic) VSAccountAuthentication *accountAuthentication; // ivar: _accountAuthentication
@property (copy, nonatomic) NSSet *accountChannelIDs; // ivar: _accountChannelIDs
@property (copy, nonatomic) NSString *authenticationScheme; // ivar: _authenticationScheme
@property (copy, nonatomic) NSNumber *expectedAction; // ivar: _expectedAction
@property (copy, nonatomic) NSString *responseStatusCode; // ivar: _responseStatusCode
@property (copy, nonatomic) NSString *responseString; // ivar: _responseString
@property (copy, nonatomic) NSArray *subscriptionsToAdd; // ivar: _subscriptionsToAdd
@property (copy, nonatomic) NSArray *subscriptionsToRemoveByBundleID; // ivar: _subscriptionsToRemoveByBundleID
@property (copy, nonatomic) NSArray *userAccounts; // ivar: _userAccounts


-(id)description;


@end


#endif