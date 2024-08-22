// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERFORCEPRESSSYSTEMGESTURERECOGNIZER_H
#define SBSWITCHERFORCEPRESSSYSTEMGESTURERECOGNIZER_H

@class UIPreviewForceInteractionProgress, NSString;
@protocol PTSettingsKeyObserver, UIInteractionProgressObserver, SBGestureRecognizerTouchHistoryProviding;


#import "SBScreenEdgePanGestureRecognizer.h"
#import "SBAppSwitcherSettings.h"
#import "SBTouchHistory.h"

@interface SBSwitcherForcePressSystemGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver, UIInteractionProgressObserver, SBGestureRecognizerTouchHistoryProviding>

 {
    UIPreviewForceInteractionProgress *_forceObserver;
    SBAppSwitcherSettings *_settings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat forcePercent; // ivar: _forcePercent
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SBTouchHistory *touchHistory; // ivar: _touchHistory


-(CGFloat)averageTouchPathAngleOverTimeDuration:(CGFloat)arg0 ;
-(CGFloat)peakSpeed;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )averageTouchVelocityOverTimeDuration:(CGFloat)arg0 ;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(void)dealloc;
-(void)interactionProgressDidUpdate:(id)arg0 ;
-(void)reset;
-(void)setState:(NSInteger)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif