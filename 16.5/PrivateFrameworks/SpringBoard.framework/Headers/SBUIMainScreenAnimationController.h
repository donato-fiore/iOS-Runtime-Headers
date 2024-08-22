// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIMAINSCREENANIMATIONCONTROLLER_H
#define SBUIMAINSCREENANIMATIONCONTROLLER_H

@class NSSet;
@protocol BSInvalidatable;


#import "SBUIWorkspaceAnimationController.h"
#import "SBDeviceApplicationSceneEntity.h"
#import "SBWorkspaceTransitionRequest.h"

@interface SBUIMainScreenAnimationController : SBUIWorkspaceAnimationController

@property (retain, nonatomic) NSObject<BSInvalidatable> *bannerSuppressionAssertion; // ivar: _bannerSuppressionAssertion
@property (readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities;
@property (readonly, nonatomic) SBDeviceApplicationSceneEntity *fromApplicationSceneEntity;
@property (readonly, copy, nonatomic) NSSet *toApplicationSceneEntities;
@property (readonly, nonatomic) SBDeviceApplicationSceneEntity *toApplicationSceneEntity;
@property (readonly, nonatomic) SBWorkspaceTransitionRequest *transitionRequest;
@property (retain, nonatomic) NSObject<BSInvalidatable> *wallpaperRequiredAssertion; // ivar: _wallpaperRequiredAssertion


-(BOOL)__wantsInitialProgressStateChange;
-(BOOL)_shouldDismissBanner;
-(id)_getTransitionWindow;
-(id)_primaryAppOrAnyAppFromSet:(id)arg0 ;
-(id)initWithTransitionContextProvider:(id)arg0 ;
-(id)initWithWorkspaceTransitionRequest:(id)arg0 ;
-(void)__startAnimation;
-(void)_begin;
-(void)_cleanupAnimation;
-(void)_dismissBannerAnimated:(BOOL)arg0 ;


@end


#endif