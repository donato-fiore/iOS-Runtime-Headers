// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTINPUTSESSIONDYNAMICACCUMULATOR_H
#define _UITEXTINPUTSESSIONDYNAMICACCUMULATOR_H

@class UITextInputSessionAccumulator, NSDictionary;



@interface _UITextInputSessionDynamicAccumulator : UITextInputSessionAccumulator

@property (readonly, nonatomic) NSDictionary *lastResult; // ivar: _lastResult


+(id)accumulatorWithName:(id)arg0 type:(NSInteger)arg1 depthRange:(struct _NSRange )arg2 block:(id)arg3 ;
-(void)enumerateAnalytics:(id)arg0 ;
-(void)increaseWithActions:(id)arg0 ;


@end


#endif