// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITOUCHESOBSERVINGGESTURERECOGNIZER_H
#define _UITOUCHESOBSERVINGGESTURERECOGNIZER_H

@class NSSet;


#import "UIGestureRecognizer.h"

@interface _UITouchesObservingGestureRecognizer : UIGestureRecognizer

@property (copy, nonatomic) NSSet *touches; // ivar: _touches


+(BOOL)_shouldDefaultToTouches;
-(BOOL)_affectedByGesture:(id)arg0 ;
-(BOOL)_allTouchesAreEndedOrCancelled:(id)arg0 ;
-(BOOL)_wantsPartialTouchSequences;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_updateTouchesFromEvent:(id)arg0 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif