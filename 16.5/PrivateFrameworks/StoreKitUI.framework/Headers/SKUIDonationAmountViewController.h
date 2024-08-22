// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIDONATIONAMOUNTVIEWCONTROLLER_H
#define SKUIDONATIONAMOUNTVIEWCONTROLLER_H

@class NSString;
@protocol SKUIDonationConfigurationObserver;


#import "SKUIDonationStepViewController.h"
#import "SKUIDonationAmountView.h"
#import "SKUIGiftValidationResponse.h"
#import "SKUIGiftPurchaseRequest.h"
#import "SKUIGiftValidator.h"

@interface SKUIDonationAmountViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver>

 {
    SKUIDonationAmountView *_amountView;
    SKUIGiftValidationResponse *_lastValidationResponse;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    BOOL _tappedNextWhileValidating;
    SKUIGiftValidator *_validator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCharity:(id)arg0 configuration:(id)arg1 ;
-(void)_amountChangedNotification:(id)arg0 ;
-(void)_cancelButtonAction:(id)arg0 ;
-(void)_donateButtonAction:(id)arg0 ;
-(void)_finishPurchaseWithResult:(BOOL)arg0 errorMessage:(id)arg1 ;
-(void)_finishValidationWithResponse:(id)arg0 error:(id)arg1 ;
-(void)_performActionAfterValidation;
-(void)_reenableAfterFailure;
-(void)_setDonationButtonEnabled:(BOOL)arg0 ;
-(void)_validateDonation:(id)arg0 ;
-(void)dealloc;
-(void)donationConfigurationController:(id)arg0 didLoadLogoForCharity:(id)arg1 ;
-(void)loadView;


@end


#endif