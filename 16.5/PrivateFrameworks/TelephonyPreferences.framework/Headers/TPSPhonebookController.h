// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSPHONEBOOKCONTROLLER_H
#define TPSPHONEBOOKCONTROLLER_H

@class NSString, CTXPCServiceSubscriptionContext;
@protocol TPSPhonebookTelephonyControllerDelegate, TPSPhonebookControllerDelegate;

#import <Foundation/Foundation.h>

#import "TPSPhonebookTelephonyController.h"

@interface TPSPhonebookController : NSObject <TPSPhonebookTelephonyControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TPSPhonebookControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedSubscriptionTelephoneNumber;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (readonly, nonatomic, getter=isSubscriptionEditable) BOOL subscriptionEditable;
@property (readonly, copy, nonatomic) NSString *subscriptionISOCountryCode; // ivar: _subscriptionISOCountryCode
@property (readonly) Class superclass;
@property (readonly, nonatomic) TPSPhonebookTelephonyController *telephonyClient; // ivar: _telephonyClient


-(id)init;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(void)phonebookController:(id)arg0 didChangePhoneNumberInfo:(id)arg1 ;
-(void)updateSubscriptionTelephoneNumber:(id)arg0 completion:(id)arg1 ;


@end


#endif