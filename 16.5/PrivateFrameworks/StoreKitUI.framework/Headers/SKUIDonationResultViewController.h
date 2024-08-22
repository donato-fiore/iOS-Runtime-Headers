// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIDONATIONRESULTVIEWCONTROLLER_H
#define SKUIDONATIONRESULTVIEWCONTROLLER_H

@class NSString;
@protocol SKUIDonationConfigurationObserver;


#import "SKUIDonationStepViewController.h"
#import "SKUIDonationResultView.h"
#import "SKUIGiftAmount.h"

@interface SKUIDonationResultViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver>

 {
    SKUIDonationResultView *_resultView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) SKUIGiftAmount *donationAmount; // ivar: _donationAmount
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCharity:(id)arg0 configuration:(id)arg1 ;
-(void)_doneButtonAction:(id)arg0 ;
-(void)donationConfigurationController:(id)arg0 didLoadLogoForCharity:(id)arg1 ;
-(void)loadView;


@end


#endif