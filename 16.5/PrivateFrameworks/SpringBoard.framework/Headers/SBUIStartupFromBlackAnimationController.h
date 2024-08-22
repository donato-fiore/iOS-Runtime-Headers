// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUISTARTUPFROMBLACKANIMATIONCONTROLLER_H
#define SBUISTARTUPFROMBLACKANIMATIONCONTROLLER_H

@class UIView, SBOrientationTransformWrapperView, BSAnimationSettings, NSString;
@protocol SBSceneViewPresentationConfiguring;


#import "SBUIMainScreenAnimationController.h"
#import "SBDeviceApplicationSceneView.h"

@interface SBUIStartupFromBlackAnimationController : SBUIMainScreenAnimationController <SBSceneViewPresentationConfiguring>

 {
    UIView *_internalContainerView;
    UIView *_blackView;
    SBOrientationTransformWrapperView *_orientationWrapperView;
    SBDeviceApplicationSceneView *_sceneView;
}


@property (retain, nonatomic) BSAnimationSettings *animationSettings; // ivar: _animationSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL waitsForAppActivation; // ivar: _waitsForAppActivation


-(BOOL)_shouldDismissBanner;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
-(NSInteger)sceneViewPresentationPriority:(id)arg0 ;
-(id)_getTransitionWindow;
-(id)initWithTransitionContextProvider:(id)arg0 ;
-(id)sceneViewPresentationIdentifier:(id)arg0 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_setHidden:(BOOL)arg0 ;
-(void)_showBlackView;
-(void)_startAnimation;


@end


#endif