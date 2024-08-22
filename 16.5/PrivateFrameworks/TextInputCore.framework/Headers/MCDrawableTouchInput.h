// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCDRAWABLETOUCHINPUT_H
#define MCDRAWABLETOUCHINPUT_H

@class NSArray;


#import "MCTouchInput.h"

@interface MCDrawableTouchInput : MCTouchInput

@property (readonly, nonatomic) BOOL isInflectionPoint; // ivar: _isInflectionPoint
@property (readonly, nonatomic) NSArray *nearbyKeys; // ivar: _nearbyKeys
@property (readonly, nonatomic) RefPtr<TI::Favonius::CMTouchHistory> touchHistory; // ivar: _touchHistory


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTouchPoint:(struct CGPoint )arg0 radius:(CGFloat)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithTouchPoint:(struct CGPoint )arg0 radius:(CGFloat)arg1 timestamp:(CGFloat)arg2 inflectionPoint:(BOOL)arg3 touchHistory:(*void)arg4 ;


@end


#endif