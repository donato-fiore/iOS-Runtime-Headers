// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISTACKEDPUSHTRANSITION_H
#define SKUISTACKEDPUSHTRANSITION_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>

#import "SKUIStackedBar.h"

@interface SKUIStackedPushTransition : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SKUIStackedBar *fromBar; // ivar: _fromBar
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat split; // ivar: _split
@property (readonly) Class superclass;
@property (retain, nonatomic) SKUIStackedBar *toBar; // ivar: _toBar


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif