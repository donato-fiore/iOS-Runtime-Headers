// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTMAGNIFIER_H
#define UITEXTMAGNIFIER_H

@class UIResponder<UITextInput>;


#import "UIView.h"
#import "UITextMagnifierTimeWeightedPoint.h"

@interface UITextMagnifier : UIView {
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    UIView *_magnifierRenderer;
    UIView *_autoscrollRenderer;
    int _autoscrollDirections;
    BOOL _isAnimating;
    NSInteger _delayedAnimationType;
}


@property (nonatomic) CGPoint animationPoint; // ivar: _animationPoint
@property (readonly, nonatomic) BOOL isHorizontal;
@property (nonatomic) CGPoint magnificationPoint; // ivar: _magnificationPoint
@property (readonly, nonatomic) CGFloat offsetFromMagnificationPoint;
@property (retain, nonatomic) UIView *target; // ivar: _target
@property (readonly, nonatomic) CGPoint terminalPoint; // ivar: _terminalPoint
@property (readonly, nonatomic) BOOL terminalPointPlacedCarefully; // ivar: _terminalPointPlacedCarefully
@property (retain, nonatomic) UIResponder<UITextInput> *text; // ivar: _text


+(Class)renderClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )adjustMagnificationPoint:(struct CGPoint )arg0 ;
-(void)animateToAutoscrollRenderer;
-(void)animateToMagnifierRenderer;
-(void)autoscrollWillNotStart;
-(void)beginMagnifyingTarget:(id)arg0 text:(id)arg1 magnificationPoint:(struct CGPoint )arg2 offset:(struct CGPoint )arg3 animated:(BOOL)arg4 ;
// -(void)beginZoomDownAnimation:(id)arg0 withDuration:(unk)arg1 postponeHandler:(CGFloat)arg2  ;
// -(void)beginZoomUpAnimation:(id)arg0 withDuration:(unk)arg1  ;
-(void)detectLostTouches:(id)arg0 ;
-(void)postAutoscrollPoint:(struct CGPoint )arg0 ;
-(void)remove;
-(void)setAutoscrollDirections:(int)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsDisplay;
-(void)setToMagnifierRenderer;
-(void)stopMagnifying:(BOOL)arg0 ;
-(void)updateFrameAndOffset;
-(void)windowWillRotate:(id)arg0 ;
-(void)zoomDownAnimation;
-(void)zoomUpAnimation;


@end


#endif