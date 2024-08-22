// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WGWIDGETPINNINGTEACHINGANIMATIONVIEW_H
#define WGWIDGETPINNINGTEACHINGANIMATIONVIEW_H

@class BSUICAPackageView, UILabel, CALayer, NSTimer;



@interface WGWidgetPinningTeachingAnimationView : BSUICAPackageView

@property (retain, nonatomic) UILabel *debugLabel; // ivar: _debugLabel
@property (retain, nonatomic) CALayer *materialsLayer; // ivar: _materialsLayer
@property (retain, nonatomic) CALayer *page1Layer; // ivar: _page1Layer
@property (retain, nonatomic) CALayer *pagesLayer; // ivar: _pagesLayer
@property (nonatomic, setter=_setState:) NSUInteger state; // ivar: _state
@property (retain, nonatomic, setter=_setTimerToNextState:) NSTimer *timerToNextState; // ivar: _timerToNextState


-(CGFloat)_durationForState:(NSUInteger)arg0 ;
-(NSUInteger)_stateFollowingState:(NSUInteger)arg0 ;
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateMaterials;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif