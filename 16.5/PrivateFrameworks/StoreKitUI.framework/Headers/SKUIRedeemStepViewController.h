// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIREDEEMSTEPVIEWCONTROLLER_H
#define SKUIREDEEMSTEPVIEWCONTROLLER_H

@class UIViewController, NSOperationQueue;
@protocol SKUIRedeemStepDelegate;


#import "SKUIClientContext.h"
#import "SKUIRedeemConfiguration.h"

@interface SKUIRedeemStepViewController : UIViewController

@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (retain, nonatomic) SKUIRedeemConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (weak, nonatomic) NSObject<SKUIRedeemStepDelegate> *redeemStepDelegate; // ivar: _redeemStepDelegate
@property (readonly, nonatomic) BOOL shouldShowPassbookLearnMore;




@end


#endif