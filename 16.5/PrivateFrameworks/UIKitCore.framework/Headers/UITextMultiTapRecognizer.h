// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTMULTITAPRECOGNIZER_H
#define UITEXTMULTITAPRECOGNIZER_H

@class NSString, NSArray;
@protocol UITapRecognizerDelegate;


#import "UIGestureRecognizer.h"
#import "UITapRecognizer.h"

@interface UITextMultiTapRecognizer : UIGestureRecognizer <UITapRecognizerDelegate>

 {
    id *_target;
    SEL _tapAction;
    UITapRecognizer *_tapRecognizer;
    NSUInteger _tapCount;
    NSUInteger _touchDownCount;
    BOOL _sendTapAction;
}


@property CGFloat allowableMovement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGPoint location;
@property CGFloat maximumIntervalBetweenTaps;
@property CGFloat maximumTouchDownDuration;
@property NSUInteger minimumNumberOfTapsRequired;
@property NSUInteger numberOfTouchesRequired;
@property BOOL recognizesOnSubsequentTouchDowns; // ivar: _recognizesOnSubsequentTouchDowns
@property NSInteger requiredButtonMask; // ivar: _requiredButtonMask
@property (readonly) Class superclass;
@property (readonly) NSUInteger tapCount;
@property (readonly) NSArray *touchesForTap;


-(BOOL)_allowsEventWithRequiredButtonMask:(id)arg0 ;
-(BOOL)_shouldReceiveTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg0 ;
-(CGFloat)_touchSloppinessFactor;
-(id)initWithTarget:(id)arg0 tapAction:(SEL)arg1 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)onStateUpdate:(id)arg0 ;
-(void)reset;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg0 ;
-(void)tapRecognizerRecognizedTap:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif