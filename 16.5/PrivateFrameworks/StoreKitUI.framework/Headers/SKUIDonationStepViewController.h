// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIDONATIONSTEPVIEWCONTROLLER_H
#define SKUIDONATIONSTEPVIEWCONTROLLER_H

@class UIViewController, NSOperationQueue;


#import "SKUIGiftCharity.h"
#import "SKUIDonationConfiguration.h"
#import "SKUIDonationViewController.h"

@interface SKUIDonationStepViewController : UIViewController

@property (readonly, nonatomic) SKUIGiftCharity *charity; // ivar: _charity
@property (readonly, nonatomic) SKUIDonationConfiguration *donationConfiguration; // ivar: _configuration
@property (readonly, nonatomic) SKUIDonationViewController *donationViewController;
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue


-(id)initWithCharity:(id)arg0 configuration:(id)arg1 ;


@end


#endif