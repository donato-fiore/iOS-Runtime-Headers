// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIEVENTSESSIONDYNAMICALLEVENTACCUMULATOR_H
#define _UIEVENTSESSIONDYNAMICALLEVENTACCUMULATOR_H

@class UIEventSessionAccumulator;
@protocol _UIEventSessionDynamicAccumulatorDelegate;



@interface _UIEventSessionDynamicAllEventAccumulator : UIEventSessionAccumulator

@property (weak, nonatomic) NSObject<_UIEventSessionDynamicAccumulatorDelegate> *delegate; // ivar: _delegate


// +(id)accumulatorWithName:(id)arg0 depth:(NSUInteger)arg1 block:(id)arg2 delegate:(unk)arg3 allowedActionSourceTypes:(id)arg4  ;
-(void)enumerateAnalytics:(id)arg0 ;
-(void)performIncreaseWithActions:(id)arg0 ;


@end


#endif