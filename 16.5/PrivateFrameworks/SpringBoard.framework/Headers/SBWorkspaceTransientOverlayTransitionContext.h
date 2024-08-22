// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWORKSPACETRANSIENTOVERLAYTRANSITIONCONTEXT_H
#define SBWORKSPACETRANSIENTOVERLAYTRANSITIONCONTEXT_H

@class BSProcessHandle;
@protocol SBTransientOverlayPresenting;


#import "SBWorkspaceTransitionContext.h"
#import "SBTransientOverlayPresentationManager.h"
#import "SBWorkspaceTransientOverlay.h"
#import "SBWindowScene.h"

@interface SBWorkspaceTransientOverlayTransitionContext : SBWorkspaceTransitionContext

@property (nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (retain, nonatomic) BSProcessHandle *originatingProcess; // ivar: _originatingProcess
@property (retain, nonatomic) SBTransientOverlayPresentationManager *presentationManager; // ivar: _presentationManager
@property (retain, nonatomic) NSObject<SBTransientOverlayPresenting> *scenePresenter; // ivar: _scenePresenter
@property (nonatomic) BOOL shouldDismissSiriUponPresentation; // ivar: _shouldDismissSiriUponPresentation
@property (nonatomic) BOOL shouldPreserveAppSwitcher; // ivar: _shouldPreserveAppSwitcher
@property (retain, nonatomic) SBWorkspaceTransientOverlay *transientOverlay; // ivar: _transientOverlay
@property (nonatomic) NSInteger transitionType; // ivar: _transitionType
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(id)compactDescriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)init;


@end


#endif