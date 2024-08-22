// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWINDOWSCENESTATUSBARASSERTIONMANAGER_H
#define SBWINDOWSCENESTATUSBARASSERTIONMANAGER_H

@class NSHashTable, NSString;
@protocol BSDescriptionProviding, UIStatusBarManager, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBStatusBarSettings.h"
#import "SBWindowScene.h"

@interface SBWindowSceneStatusBarAssertionManager : NSObject <BSDescriptionProviding, UIStatusBarManager>

 {
    NSHashTable *_disableAlphaChangeAssertions;
    NSHashTable *_disableUserInteractionChangeAssertions;
    NSHashTable *_hideStatusBarAssertions;
    NSPointerArray" _statusBarSettingsAssertionsByLevel;
    SBStatusBarSettings *_currentStatusBarSettings;
    id<BSInvalidatable> *_stateCaptureAssertion;
    NSHashTable *_observers;
    BOOL _changingStatusBarStyle;
    BOOL _changingStatusBarAlpha;
    NSUInteger _statusBarAlphaAnimationCount;
    SBWindowScene *_windowScene;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isFrontmostStatusBarHidden;
-(BOOL)isFrontmostStatusBarPartHidden:(NSInteger)arg0 ;
-(BOOL)statusBar:(id)arg0 shouldRequestStyle:(NSInteger)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3 ;
-(BOOL)statusBar:(id)arg0 shouldRequestStyleAttributes:(id)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3 ;
-(BOOL)statusBar:(id)arg0 shouldSetAlpha:(CGFloat)arg1 ;
-(NSInteger)effectiveStatusBarStyleForRequestedStyle:(NSInteger)arg0 styleOverridesToSuppress:(NSUInteger)arg1 ;
-(NSUInteger)statusBar:(id)arg0 effectiveStyleOverridesForRequestedStyle:(NSInteger)arg1 overrides:(NSUInteger)arg2 ;
-(id)_descriptionForPropertyWithAssertions:(id)arg0 ;
-(id)_styleRequestForSettings:(id)arg0 ;
-(id)acquireDisableAlphaChangesAssertionWithReason:(id)arg0 ;
-(id)acquireDisableUserInteractionChangesAssertionWithReason:(id)arg0 ;
-(id)acquireHideFrontmostStatusBarAssertionForReason:(id)arg0 ;
-(id)currentEffectiveStatusBarStyleRequest;
-(id)currentStatusBarSettings;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)effectiveStatusBarStyleRequestForLevel:(NSUInteger)arg0 ;
-(id)effectiveStatusBarStyleRequestWithSettings:(id)arg0 ;
-(id)initWithWindowScene:(id)arg0 ;
-(id)newSettingsAssertionWithSettings:(id)arg0 atLevel:(NSUInteger)arg1 reason:(id)arg2 ;
-(id)newSettingsAssertionWithStatusBarHidden:(BOOL)arg0 atLevel:(NSUInteger)arg1 reason:(id)arg2 ;
-(id)statusBarSettingsForLevel:(NSUInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_addDisableWindowSceneStatusBarAlphaChangesAssertion:(id)arg0 ;
-(void)_addDisableWindowSceneStatusBarUserInteractionChangesAssertion:(id)arg0 ;
-(void)_addStatusBarSettingsAssertion:(id)arg0 ;
-(void)_addStatusBarSettingsAssertion:(id)arg0 withAnimationParameters:(id)arg1 ;
-(void)_cleanUpAllStatusBarSettingsAssertions;
-(void)_enumerateAssertionsToLevel:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)_evaluateSettingsWithStyleAnimations:(id)arg0 ;
-(void)_modifiedStatusBarSettingsAssertion:(id)arg0 ;
-(void)_modifiedStatusBarSettingsAssertion:(id)arg0 withAnimationParameters:(id)arg1 ;
-(void)_removeDisableWindowSceneStatusBarAlphaChangesAssertion:(id)arg0 ;
-(void)_removeDisableWindowSceneStatusBarUserInteractionChangesAssertion:(id)arg0 ;
-(void)_removeStatusBarSettingsAssertion:(id)arg0 ;
-(void)_removeStatusBarSettingsAssertion:(id)arg0 withAnimationParameters:(id)arg1 ;
-(void)_resolveEffectiveStatusBarStyleForSettings:(id)arg0 ;
-(void)_setStatusBarValueForPropertyWithAssertions:(id)arg0 setter:(id)arg1 ;
-(void)_statusBarUpdatedFromSettings:(id)arg0 toSettings:(id)arg1 withAnimations:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif