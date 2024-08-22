// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTMAGNIFIERRANGED_H
#define UITEXTMAGNIFIERRANGED_H



#import "UITextMagnifier.h"

@interface UITextMagnifierRanged : UITextMagnifier {
    CGFloat _touchOffsetFromMagnificationPoint;
    CGFloat _magnifierOffsetFromTouch;
    BOOL _isAnimating;
    NSInteger _delayedAnimationType;
    CGPoint _delayedAnimationPoint;
}


@property (nonatomic) BOOL isHorizontal; // ivar: _isHorizontal


+(Class)renderClass;
+(id)activeRangedMagnifier;
+(id)sharedRangedMagnifier;
-(BOOL)terminalPointPlacedCarefully;
-(BOOL)wasPlacedCarefullyAtTime:(CGFloat)arg0 ;
-(CGFloat)offsetFromMagnificationPoint;
-(id)initWithFrame;
-(int)horizontalMovement;
-(int)horizontalMovementAtTime:(CGFloat)arg0 ;
-(struct CGPoint )adjustMagnificationPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )clipPoint:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 ;
-(struct CGRect )caretRectClosestToPoint:(struct CGPoint )arg0 ;
-(void)beginMagnifyingTarget:(id)arg0 text:(id)arg1 magnificationPoint:(struct CGPoint )arg2 offset:(struct CGPoint )arg3 animated:(BOOL)arg4 ;
-(void)setMagnificationPoint:(struct CGPoint )arg0 ;
-(void)stopMagnifying:(BOOL)arg0 ;
-(void)updateFrameAndOffset;
-(void)zoomDownAnimation;
-(void)zoomUpAnimation;


@end


#endif