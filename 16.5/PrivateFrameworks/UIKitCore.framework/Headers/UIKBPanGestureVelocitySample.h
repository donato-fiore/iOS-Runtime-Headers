// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBPANGESTUREVELOCITYSAMPLE_H
#define UIKBPANGESTUREVELOCITYSAMPLE_H


#import <Foundation/Foundation.h>


@interface UIKBPanGestureVelocitySample : NSObject

@property CGFloat dt; // ivar: dt
@property CGPoint end; // ivar: end
@property CGFloat force; // ivar: force
@property CGFloat majorRadius; // ivar: majorRadius
@property CGPoint start; // ivar: start


-(void)pullValuesFrom:(id)arg0 ;
-(void)resetValues;


@end


#endif