// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTAPANDTOUCHGESTURERECOGNIZER_H
#define TSWPTAPANDTOUCHGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSString;
@protocol TSDTapGesture, TSDGestureTarget, TSDGestureDelegate;


#import "TSDRep.h"

@interface TSWPTapAndTouchGestureRecognizer : UIGestureRecognizer <TSDTapGesture>



@property (retain, nonatomic) NSObject<TSDGestureTarget> *cachedGestureTarget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<TSDGestureDelegate> *gestureDelegate;
@property (retain, nonatomic) NSString *gestureKind;
@property (readonly, nonatomic) int gestureState;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfTapsRequired; // ivar: _numberOfTapsRequired
@property (readonly) Class superclass;
@property (retain, nonatomic) TSDRep *targetRep;


-(void)p_failBecauseFingerStayedUpTooLongAfterTap;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif