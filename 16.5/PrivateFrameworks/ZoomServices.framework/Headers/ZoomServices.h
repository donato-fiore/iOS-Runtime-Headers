// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ZOOMSERVICES_H
#define ZOOMSERVICES_H

@class NSMutableDictionary, NSString, AXUIClient;
@protocol AXUIClientDelegate;

#import <Foundation/Foundation.h>


@interface ZoomServices : NSObject <AXUIClientDelegate>

 {
    NSMutableDictionary *_zoomListeners;
    NSMutableDictionary *_zoomAttributeListeners;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL registeredForZoomAttributeListeners; // ivar: _registeredForZoomAttributeListeners
@property (nonatomic) BOOL registeredForZoomListener; // ivar: _registeredForZoomListener
@property (nonatomic) BOOL shouldRegisterForZoomListeners; // ivar: _shouldRegisterForZoomListeners
@property (readonly, nonatomic, getter=isShowingZoomLens) BOOL showingZoomLens;
@property (nonatomic, getter=isShowingZoomLens) BOOL showingZoomLens; // ivar: _showingZoomLens
@property (nonatomic) BOOL springBoardReady; // ivar: _springBoardReady
@property (readonly) Class superclass;
@property (nonatomic) BOOL triedToShowLensBeofreSBReady; // ivar: _triedToShowLensBeofreSBReady
@property (nonatomic) CGFloat zoomLevel;
@property (retain, nonatomic) AXUIClient *zoomWindowClient; // ivar: _zoomWindowClient


+(id)sharedInstance;
-(BOOL)_isAllowedMagnifierClient;
-(BOOL)_isPrimaryZoomWindowClient;
-(BOOL)inStandbyMode;
-(BOOL)inStandbyModeOnDisplay:(unsigned int)arg0 ;
-(BOOL)notifyZoomAppActivationAnimationDidFinish;
-(BOOL)notifyZoomAppActivationAnimationWillBegin;
-(BOOL)notifyZoomAppDeactivationAnimationWillBegin;
-(BOOL)notifyZoomAppDidBecomeActive:(id)arg0 keyboardFrameIfVisible:(struct CGRect )arg1 ;
-(BOOL)notifyZoomAppDidEnterBackground:(id)arg0 ;
-(BOOL)notifyZoomAppSwitcherRevealAnimationWillBegin;
-(BOOL)notifyZoomCarouselLockBegan;
-(BOOL)notifyZoomCarouselLockEnded;
-(BOOL)notifyZoomDeviceWasUnlocked;
-(BOOL)notifyZoomDeviceWillWake;
-(BOOL)notifyZoomDockPositionWasChangedInSettingsTo:(id)arg0 ;
-(BOOL)notifyZoomDragWillEnd;
-(BOOL)notifyZoomDragWillStart;
-(BOOL)notifyZoomFluidSwitcherGestureDidFinish;
-(BOOL)notifyZoomFluidSwitcherGestureDidFinishWithDock;
-(BOOL)notifyZoomFluidSwitcherGestureWillBegin;
-(BOOL)notifyZoomFocusDidChangeWithType:(NSInteger)arg0 rect:(struct CGRect )arg1 contextId:(unsigned int)arg2 displayId:(unsigned int)arg3 ;
-(BOOL)notifyZoomFocusDidChangeWithType:(NSInteger)arg0 rect:(struct CGRect )arg1 contextId:(unsigned int)arg2 keyboardFrame:(struct CGRect )arg3 displayId:(unsigned int)arg4 ;
-(BOOL)notifyZoomHomeButtonWasPressed;
-(BOOL)notifyZoomIdleSlugOpacityChangedTo:(CGFloat)arg0 ;
-(BOOL)notifyZoomKeyboardDidHideInAppWithBundleID:(id)arg0 displayID:(unsigned int)arg1 ;
-(BOOL)notifyZoomKeyboardWillBecomeVisibleWithFrame:(struct CGRect )arg0 inAppWithBundleID:(id)arg1 displayID:(unsigned int)arg2 ;
-(BOOL)notifyZoomKeyboardWillHideInAppWithBundleID:(id)arg0 displayID:(unsigned int)arg1 ;
-(BOOL)notifyZoomLensModeWasChangedInSettingsTo:(id)arg0 ;
-(BOOL)notifyZoomLockButtonWasPressed;
-(BOOL)notifyZoomReturnedToClockFaceAtIdle;
-(BOOL)notifyZoomWillHideBrailleInputUI;
-(BOOL)notifyZoomWillShowBrailleInputUI;
-(BOOL)shouldSuppressKeyCommandHUD;
-(CGFloat)appActivationAnimationStartDelay;
-(CGFloat)appDeactivationAnimationStartDelay;
-(CGFloat)appSwitcherRevealAnimationStartDelay;
-(CGFloat)reachabilityScaleFactor;
-(CGFloat)zoomLevelOnDisplay:(unsigned int)arg0 ;
-(id)activeZoomMode;
-(id)activeZoomModeOnDisplay:(unsigned int)arg0 ;
-(id)init;
-(id)registerForCoalescedZoomAttributesWithChangedHandler:(id)arg0 ;
// -(id)registerForCoalescedZoomAttributesWithChangedHandler:(id)arg0 onDisplay:(unk)arg1  ;
-(id)registerForZoomAttributes:(id)arg0 onDisplay:(unsigned int)arg1 updatesImmediatelyWithChangedHandler:(id)arg2 ;
-(id)registerForZoomAttributes:(id)arg0 updatesImmediatelyWithChangedHandler:(id)arg1 ;
-(id)userInterfaceClient:(id)arg0 accessQueueForProcessingMessageWithIdentifier:(NSUInteger)arg1 ;
-(id)userInterfaceClient:(id)arg0 processMessageFromServer:(id)arg1 withIdentifier:(NSUInteger)arg2 error:(*id)arg3 ;
-(struct CGRect )zoomFrame;
-(struct CGRect )zoomFrameOnDisplay:(unsigned int)arg0 ;
-(void)_applicationDidResume:(id)arg0 ;
-(void)_applicationWillSuspend:(id)arg0 ;
-(void)_checkSpringBoardStarted;
-(void)_handleChangedAttributes:(id)arg0 ;
-(void)_panWithDirection:(id)arg0 onDisplay:(unsigned int)arg1 ;
-(void)_zoomChanged:(id)arg0 ;
-(void)autoPanZoomUsingLocation:(struct CGPoint )arg0 withPanningStyle:(NSUInteger)arg1 ;
-(void)autoPanZoomUsingLocation:(struct CGPoint )arg0 withPanningStyle:(NSUInteger)arg1 onDisplay:(unsigned int)arg2 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg0 ;
-(void)dealloc;
-(void)hideZoomLens;
-(void)isMagnifierVisibleWithCompletion:(id)arg0 ;
-(void)notifyZoomSOSMedicalIDShown;
-(void)panDown;
-(void)panDownOnDisplay:(unsigned int)arg0 ;
-(void)panLeft;
-(void)panLeftOnDisplay:(unsigned int)arg0 ;
-(void)panRight;
-(void)panRightOnDisplay:(unsigned int)arg0 ;
-(void)panUp;
-(void)panUpOnDisplay:(unsigned int)arg0 ;
-(void)registerInterestInZoomAttributes;
-(void)removeCoalescedZoomAttributesChangedHandler:(id)arg0 ;
-(void)removeZoomAttributesChangedHandler:(id)arg0 ;
-(void)showMagnifier;
-(void)showZoomLens;
-(void)startMagnifier;
-(void)startMagnifierChangeTripleClickMenu:(BOOL)arg0 ;


@end


#endif