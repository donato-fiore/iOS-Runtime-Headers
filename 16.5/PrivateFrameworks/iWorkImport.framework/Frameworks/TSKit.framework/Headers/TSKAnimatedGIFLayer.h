// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKANIMATEDGIFLAYER_H
#define TSKANIMATEDGIFLAYER_H

@class CALayer;


#import "TSKAnimatedGIFController.h"

@interface TSKAnimatedGIFLayer : CALayer {
    TSKAnimatedGIFController *mController;
}


@property (weak, nonatomic) TSKAnimatedGIFController *controller;


+(id)defaultActionForKey:(id)arg0 ;
-(void)dealloc;
-(void)display;
-(void)teardown;


@end


#endif