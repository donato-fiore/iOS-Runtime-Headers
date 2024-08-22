// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONPROGRESSVIEW_H
#define SBICONPROGRESSVIEW_H

@class UIView, CADisplayLink;
@protocol SBIconProgressViewDelegate;


#import "_SBIconProgressFractionTransition.h"
#import "_SBIconProgressPausedTransition.h"
#import "_SBIconProgressStateTransition.h"

@interface SBIconProgressView : UIView {
    NSInteger _modelState;
    BOOL _modelPaused;
    CGFloat _modelFraction;
    CADisplayLink *_displayLink;
    CGFloat _lastUpdate;
}


@property (retain, nonatomic) _SBIconProgressFractionTransition *activeFractionTransition; // ivar: _activeFractionTransition
@property (retain, nonatomic) _SBIconProgressPausedTransition *activePausedTransition; // ivar: _activePausedTransition
@property (retain, nonatomic) _SBIconProgressStateTransition *activeStateTransition; // ivar: _activeStateTransition
@property (nonatomic) CGFloat backgroundAlpha; // ivar: _backgroundAlpha
@property (nonatomic) BOOL canAnimate; // ivar: _canAnimate
@property (readonly, nonatomic) CGRect circleBoundingRect;
@property (nonatomic) CGFloat circleRadiusFraction; // ivar: _circleRadiusFraction
@property (weak, nonatomic) NSObject<SBIconProgressViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat displayedFraction; // ivar: _displayedFraction
@property (nonatomic) NSInteger displayedState; // ivar: _displayedState
@property (nonatomic) BOOL displayingPaused; // ivar: _displayingPaused
@property (nonatomic) CGFloat foregroundAlpha; // ivar: _foregroundAlpha
@property (nonatomic) BOOL hasOpaqueIconImage; // ivar: _hasOpaqueIconImage
@property (nonatomic) SBIconImageInfo iconImageInfo; // ivar: _iconImageInfo
@property (nonatomic) CGFloat pauseRadiusFraction; // ivar: _pauseRadiusFraction


+(id)_pieImageAtFraction:(CGFloat)arg0 ;
+(id)_pieImagesMemoryPool;
-(BOOL)_hasActiveTransitions;
-(CGFloat)_circleScaleFactor;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_clearDisplayLink;
-(void)_drawIncomingCircleWithCenter:(struct CGPoint )arg0 ;
-(void)_drawOutgoingCircleWithCenter:(struct CGPoint )arg0 ;
-(void)_drawPauseUIWithCenter:(struct CGPoint )arg0 ;
-(void)_drawPieWithCenter:(struct CGPoint )arg0 ;
-(void)_ensureDisplayLink;
-(void)_onDisplayLink:(id)arg0 ;
-(void)_updateFractionTransitionAnimated:(BOOL)arg0 ;
-(void)_updatePausedTransitionAnimated:(BOOL)arg0 ;
-(void)_updateStateTransitionAnimated:(BOOL)arg0 ;
-(void)_updateTransitionsAnimated:(BOOL)arg0 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setState:(NSInteger)arg0 paused:(BOOL)arg1 fractionLoaded:(CGFloat)arg2 animated:(BOOL)arg3 ;


@end


#endif