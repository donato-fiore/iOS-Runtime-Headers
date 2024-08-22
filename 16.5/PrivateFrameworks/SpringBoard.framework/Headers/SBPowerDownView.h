// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPOWERDOWNVIEW_H
#define SBPOWERDOWNVIEW_H

@class SBUIPowerDownView;
@protocol SBPowerDownViewDelegate;



@interface SBPowerDownView : SBUIPowerDownView

@property (weak, nonatomic) NSObject<SBPowerDownViewDelegate> *powerDownDelegate;


-(void)_cancelButtonTapped;
-(void)_didTapFindMy;
-(void)_idleTimerFired;
-(void)_powerDownSliderDidBeginSlide;
-(void)_powerDownSliderDidCancelSlide;
-(void)_powerDownSliderDidCompleteSlide;
-(void)_powerDownSliderDidUpdateSlideWithValue:(CGFloat)arg0 ;


@end


#endif