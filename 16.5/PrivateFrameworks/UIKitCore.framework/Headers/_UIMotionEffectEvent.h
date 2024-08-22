// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIMOTIONEFFECTEVENT_H
#define _UIMOTIONEFFECTEVENT_H


#import <Foundation/Foundation.h>


@interface _UIMotionEffectEvent : NSObject

@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(CGFloat)velocityRelativeToPreviousEvent:(id)arg0 ;
-(id)copyWithTimestamp:(CGFloat)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 ;


@end


#endif