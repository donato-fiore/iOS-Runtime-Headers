// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCTOUCHINPUT_H
#define MCTOUCHINPUT_H



#import "MCKeyboardInput.h"

@interface MCTouchInput : MCKeyboardInput

@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) CGPoint touchPoint; // ivar: _touchPoint


-(BOOL)canComposeNew:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTouchPoint:(struct CGPoint )arg0 radius:(CGFloat)arg1 timestamp:(CGFloat)arg2 ;
-(id)shortDescriptionWithLeadingString:(id)arg0 ;


@end


#endif