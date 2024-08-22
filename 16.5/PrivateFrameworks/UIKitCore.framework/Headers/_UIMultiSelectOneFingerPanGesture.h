// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIMULTISELECTONEFINGERPANGESTURE_H
#define _UIMULTISELECTONEFINGERPANGESTURE_H

@protocol _UIMultiSelectOneFingerPanGestureDelegate;


#import "UIPanGestureRecognizer.h"
#import "UIEvent.h"
#import "UITouch.h"

@interface _UIMultiSelectOneFingerPanGesture : UIPanGestureRecognizer

@property (readonly, nonatomic) UIEvent *activeEvent; // ivar: _activeEvent
@property (readonly, nonatomic) UITouch *activeTouch; // ivar: _activeTouch
@property (weak, nonatomic) NSObject<_UIMultiSelectOneFingerPanGestureDelegate> *oneFingerPanDelegate; // ivar: _oneFingerPanDelegate


-(BOOL)_affectedByGesture:(id)arg0 ;
-(BOOL)_preventsDragInteractionGestures;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg0 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif