// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIREDEEMRESULTSVIEWCONTROLLER_H
#define SKUIREDEEMRESULTSVIEWCONTROLLER_H



#import "SKUIRedeemStepViewController.h"
#import "SKUIRedeem.h"

@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController

@property (retain, nonatomic) SKUIRedeem *redeem; // ivar: _redeem
@property (nonatomic) NSInteger redeemCategory; // ivar: _redeemCategory


+(BOOL)canShowResultsForRedeem:(id)arg0 ;
+(id)redeemResultsControllerForRedeem:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRedeem:(id)arg0 ;
-(void)_doneAction:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif