// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBPENDINGMESAUNLOCKBEHAVIORUNLOCKREQUEST_H
#define _SBPENDINGMESAUNLOCKBEHAVIORUNLOCKREQUEST_H

@protocol SBBiometricUnlockBehavior;

#import <Foundation/Foundation.h>

#import "SBAuthenticationFeedback.h"

@interface _SBPendingMesaUnlockBehaviorUnlockRequest : NSObject

@property (readonly, nonatomic) NSObject<SBBiometricUnlockBehavior> *behavior; // ivar: _behavior
@property (readonly, nonatomic) SBAuthenticationFeedback *feedback; // ivar: _feedback
@property (readonly, nonatomic) id *request; // ivar: _request


-(id)initWithBehavior:(id)arg0 request:(id)arg1 feedback:(id)arg2 ;


@end


#endif