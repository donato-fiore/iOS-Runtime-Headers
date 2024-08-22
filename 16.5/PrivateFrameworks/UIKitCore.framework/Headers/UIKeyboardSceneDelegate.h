// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDSCENEDELEGATE_H
#define UIKEYBOARDSCENEDELEGATE_H

@class NSMutableDictionary, NSMutableArray, NSHashTable, NSMutableSet, NSDate, NSUUID, NSString;
@protocol _UISceneComponentProviding, UITextInputSessionActionAnalyticsDelegateSource, _UIWindowLevelObserver, UIKeyboardVisualModeManagerDelegate;

#import <Foundation/Foundation.h>

#import "UITextEffectsWindow.h"
#import "UIResponder.h"
#import "UIInputViewSet.h"
#import "UIInputViewPostPinningReloadState.h"
#import "UITextFormattingCoordinator.h"
#import "UISystemInputAssistantViewController.h"
#import "UITextInputSessionActionAnalytics.h"
#import "UIRemoteInputViewHost.h"
#import "UIScene.h"
#import "UIInputWindowController.h"
#import "UIView.h"
#import "UIWindow.h"
#import "UIKBRenderConfig.h"
#import "UIWindowScene.h"
#import "UIKeyboardVisualModeManager.h"

@interface UIKeyboardSceneDelegate : NSObject <_UISceneComponentProviding, UITextInputSessionActionAnalyticsDelegateSource, _UIWindowLevelObserver, UIKeyboardVisualModeManagerDelegate>

 {
    NSUInteger _hostedUseCount;
    UITextEffectsWindow *_containerWindow;
    UITextEffectsWindow *_containerWindowForViewService;
    UIResponder *_responderWithoutAutomaticAppearanceEnabled;
    UIResponder *_selfHostingTrigger;
    UIInputViewSet *_inputViewSet;
    UIInputViewSet *_transientInputViewSet;
    NSMutableDictionary *_preservedViewSets;
    NSMutableArray *_animationStyleStack;
    NSHashTable *_visibilityObservers;
    UIInputViewPostPinningReloadState *_postPinningReloadState;
    NSMutableSet *_pinningResponders;
    NSMutableDictionary *_persistentInputAccessoryResponders;
    NSMutableArray *_persistentInputAccessoryResponderOrder;
    NSMutableSet *_keysBeingRestored;
    NSDate *_transitionStartTime;
    UITextFormattingCoordinator *_textFormattingCoordinator;
    UISystemInputAssistantViewController *_systemInputAssistantViewController;
    UITextInputSessionActionAnalytics *_sessionAnalytics;
    int _ignoringReloadInputViews;
    int _ignoredReloads;
    int _disableAnimationsCount;
    BOOL _interfaceAutorotationDisabled;
    BOOL _automaticAppearanceEnabledInternal;
    BOOL _dontNeedAssistantBar;
    BOOL _allowNilResponderReload;
    BOOL _reloadInputViewsForcedIsAllowed;
    BOOL _blockedReloadInputViewsForDictation;
    BOOL _hasCustomAnimationProperties;
    CGFloat _nextAutomaticOrderInDuration;
    int _nextAutomaticOrderInDirection;
    UIRemoteInputViewHost *_remoteInputViewHost;
    BOOL _hasCustomInputViewController;
    BOOL _waitingForInputUI;
    BOOL _forceReloadingInputViews;
    NSUUID *_sessionID;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, nonatomic) NSDate *_transitionStartTime;
@property (nonatomic) BOOL automaticAppearanceEnabled; // ivar: _automaticAppearanceEnabled
@property (nonatomic) BOOL automaticAppearanceInternalEnabled;
@property (readonly, nonatomic) BOOL automaticAppearanceReallyEnabled;
@property (readonly, nonatomic) UIInputWindowController *containerRootController;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UITextEffectsWindow *containerWindow;
@property (readonly, nonatomic) NSInteger currentState; // ivar: _currentState
@property (readonly, nonatomic) BOOL deactivated;
@property (nonatomic) NSUInteger deactivationCount; // ivar: _deactivationCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIInputWindowController *existingContainerRootController;
@property (readonly, nonatomic) UITextEffectsWindow *existingContainerWindow;
@property (readonly, nonatomic) BOOL hasActiveKeyboardResponder;
@property (nonatomic) BOOL hasCustomInputViewController;
@property (readonly, nonatomic) BOOL hasNullInputView;
@property (readonly, nonatomic) BOOL hasVisibleAssistantBar;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideSystemInputAssistantView; // ivar: _hideSystemInputAssistantView
@property (nonatomic) BOOL ignoresPinning; // ivar: _ignoresPinning
@property (readonly, nonatomic, getter=_isIgnoringReloadInputViews) BOOL ignoringReloadInputViews;
@property (readonly, nonatomic) UIInputViewSet *inputViews;
@property (nonatomic) BOOL isKeyboardOnEmbeddedScreen; // ivar: _isKeyboardOnEmbeddedScreen
@property (readonly, nonatomic) BOOL isOnScreen;
@property (weak, nonatomic) UIWindow *keyWindowCandidate; // ivar: _keyWindowCandidate
@property (nonatomic) BOOL preservingInputViews; // ivar: _preservingInputViews
@property (readonly, nonatomic) UIResponder *responder; // ivar: _responder
@property (retain, nonatomic) UIKBRenderConfig *restorableRenderConfig; // ivar: _restorableRenderConfig
@property (nonatomic) BOOL restoringInputViews; // ivar: _restoringInputViews
@property (readonly, nonatomic) BOOL restoringInputViewsAndWaitingForInputUI; // ivar: _restoringInputViewsAndWaitingForInputUI
@property (readonly, nonatomic) UIWindowScene *scene;
@property (nonatomic) BOOL shouldSuppressInputAssistantUpdates; // ivar: _shouldSuppressInputAssistantUpdates
@property (nonatomic) BOOL showingKeyboard; // ivar: _showingKeyboard
@property (readonly) Class superclass;
@property (readonly, nonatomic) UISystemInputAssistantViewController *systemInputAssistantViewController;
@property (nonatomic) BOOL takingSnapshot; // ivar: _takingSnapshot
@property (readonly, nonatomic) UITextFormattingCoordinator *textFormattingCoordinator;
@property (readonly, nonatomic) UIInputViewSet *transientInputViews;
@property (nonatomic) BOOL useHostedInstance;
@property (readonly, nonatomic) UIKeyboardVisualModeManager *visualModeManager; // ivar: _visualModeManager


+(NSInteger)interfaceOrientation;
+(id)activeKeyboardSceneDelegate;
+(id)applicationConnectedWindowScenes;
+(id)automaticKeyboardArbiterClient;
+(void)_pinInputViewsForKeyboardSceneDelegate:(id)arg0 onBehalfOfResponder:(id)arg1 duringBlock:(id)arg2 ;
+(void)initialize;
+(void)logInterfaceOrientation:(NSInteger)arg0 withDescription:(id)arg1 ;
+(void)performOnControllers:(id)arg0 ;
+(void)setInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_hasPostPinningReloadState;
-(BOOL)_isPinningInputViewsOnBehalfOfResponder:(id)arg0 ;
-(BOOL)_isPreservedRestorableResponder:(id)arg0 ;
-(BOOL)_isTrackingResponder:(id)arg0 ;
-(BOOL)_keepInputSession;
-(BOOL)_preserveMultiDocumentTokenIfNecessary:(id)arg0 withId:(id)arg1 reset:(BOOL)arg2 ;
-(BOOL)_restoreInputViewsWithId:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)_restoreMultiDocumentTokenIfNecessary:(id)arg0 withId:(id)arg1 ;
-(BOOL)_showKeyboardWindowForInputViewSet:(id)arg0 placement:(id)arg1 windowScene:(id)arg2 ;
-(BOOL)animationsEnabled;
-(BOOL)enhancedWindowingModeIsEnabled;
-(BOOL)expectedInputModeIsSpecialized;
-(BOOL)expectedInputViewSetIsCustom;
-(BOOL)hasDictationKeyboard;
-(BOOL)isUndocked;
-(BOOL)maximize;
-(BOOL)maximizeWithAnimation:(BOOL)arg0 ;
-(BOOL)maximizeWithAnimationStyle:(id)arg0 ;
-(BOOL)maximizeWithAnimationStyle:(id)arg0 force:(BOOL)arg1 ;
-(BOOL)minimize;
-(BOOL)minimizeWithAnimationStyle:(id)arg0 ;
-(BOOL)minimizeWithAnimationStyle:(id)arg0 force:(BOOL)arg1 ;
-(BOOL)pinningPreventsInputViews:(id)arg0 ;
-(BOOL)showingAccessoryViewOnly;
-(BOOL)textEntryFocusOnExternalDisplay;
-(CGFloat)verticalOverlapForView:(id)arg0 usingKeyboardInfo:(id)arg1 ;
-(NSInteger)_preferredAppearanceForResponder:(id)arg0 ;
-(id)_delegateAsResponder;
-(id)_inputViewsForResponder:(id)arg0 ;
-(id)_inputViewsForResponder:(id)arg0 withAutomaticKeyboard:(BOOL)arg1 ;
-(id)_placementForDeactivatedKeyboard:(BOOL)arg0 currentPlacement:(id)arg1 forSuppressionAssertion:(BOOL)arg2 ;
-(id)_renderConfigForResponder:(id)arg0 ;
-(id)_sessionIdentifier;
-(id)_textInputSessionAnalytics;
-(id)_windowScene;
-(id)containerWindowForViewService:(BOOL)arg0 ;
-(id)forceCreateKeyboardWindow;
-(id)initWithScene:(id)arg0 ;
-(id)keyboardArbiterClient;
-(id)keyboardScreen;
-(id)keyboardWindow;
-(id)nextAnimationStyle;
-(id)nextAnimationStyle:(BOOL)arg0 ;
-(id)passthroughViews;
-(id)remoteInputViewHost;
-(id)requestAnimationAssertionWithDirection:(int)arg0 ;
-(id)requestAnimationAssertionWithDirection:(int)arg0 animated:(BOOL)arg1 ;
-(id)systemInputAssistantViewControllerForResponder:(id)arg0 ;
-(int)_endIgnoringReloadInputViews;
-(struct CGRect )frameForLayoutGuideInView:(id)arg0 ;
-(struct CGRect )visibleFrameInView:(id)arg0 ;
-(struct CGRect )visibleInputViewFrameInView:(id)arg0 ;
-(void)_beginDisablingAnimations;
-(void)_beginIgnoringReloadInputViews;
-(void)_beginPersistingInputAccessoryViewForResponder:(id)arg0 withId:(id)arg1 ;
-(void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg0 ;
-(void)_clearMultiDocumentTokenIfNecessary:(id)arg0 withId:(id)arg1 ;
-(void)_clearPersistingInputAccessoryView;
-(void)_clearPinningResponders;
-(void)_clearPreservedInputViewsWithId:(id)arg0 clearKeyboard:(BOOL)arg1 ;
-(void)_clearPreservedInputViewsWithRestorableResponder:(id)arg0 ;
-(void)_endDisablingAnimations;
-(void)_endPersistingInputAccessoryViewWithId:(id)arg0 ;
-(void)_preserveInputViewsWithId:(id)arg0 ;
-(void)_preserveInputViewsWithId:(id)arg0 animated:(BOOL)arg1 ;
-(void)_preserveInputViewsWithId:(id)arg0 animated:(BOOL)arg1 reset:(BOOL)arg2 ;
-(void)_reloadInputViewsForKeyWindowSceneResponder:(id)arg0 force:(BOOL)arg1 fromBecomeFirstResponder:(BOOL)arg2 ;
-(void)_reloadInputViewsForResponder:(id)arg0 ;
-(void)_reloadInputViewsForResponder:(id)arg0 force:(BOOL)arg1 ;
-(void)_reloadInputViewsForResponder:(id)arg0 force:(BOOL)arg1 fromBecomeFirstResponder:(BOOL)arg2 ;
-(void)_reloadInputViewsForResponder:(id)arg0 fromBecomeFirstResponder:(BOOL)arg1 ;
-(void)_reloadInputViewsForWindowSceneResponder:(id)arg0 force:(BOOL)arg1 ;
-(void)_removePreservedInputViewSetForInputView:(id)arg0 ;
-(void)_restoreInputAccessoryViewOverrideWithId:(id)arg0 ;
-(void)_scene:(id)arg0 willTransitionToActivationState:(NSInteger)arg1 withReasonsMask:(NSUInteger)arg2 ;
-(void)_setReloadInputViewsForcedIsAllowed:(BOOL)arg0 ;
-(void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg0 ;
-(void)_updateContainerWindowLevel;
-(void)_updateTextInputSession;
-(void)_updateVisibilityObserversWithVisibility:(BOOL)arg0 reset:(BOOL)arg1 ;
-(void)_windowHostingScene:(id)arg0 didMoveFromScreen:(id)arg1 toScreen:(id)arg2 ;
-(void)addVisibilityObserver:(id)arg0 ;
-(void)cleanDeactivation;
-(void)clearAnimationStyleForUserDrivenPresentation;
-(void)clearAnimationStyleStack;
-(void)completeMoveKeyboardForWindow:(id)arg0 ;
-(void)createAutomaticKeyboardIfNeeded;
-(void)dealloc;
-(void)destroyKeyboardWindowIfNecessary;
-(void)disableInterfaceAutorotation:(BOOL)arg0 ;
-(void)forceOrderInAutomaticAnimated:(BOOL)arg0 ;
-(void)forceOrderInAutomaticFromDirection:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)forceOrderOutAutomaticAnimated:(BOOL)arg0 ;
-(void)forceOrderOutAutomaticExceptAccessoryView;
-(void)forceOrderOutAutomaticToDirection:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)forceReloadInputViews;
-(void)inputModeChangedForRenderConfig:(id)arg0 ;
-(void)keyboardSceneDelegateWillResume:(id)arg0 ;
-(void)keyboardUIDidChange;
-(void)orderInWithAnimationStyle:(id)arg0 ;
-(void)orderOutWithAnimationStyle:(id)arg0 ;
// -(void)performMultipleOperations:(id)arg0 withAnimationStyle:(unk)arg1  ;
-(void)performWithAllowingNilResponderReload:(id)arg0 ;
-(void)popAnimationStyle;
-(void)popOrRemoveAnimationStyle:(id)arg0 ;
-(void)prepareForAlongsideTransitionWithContext:(id)arg0 ;
-(void)prepareToMoveKeyboardForInputViewSet:(id)arg0 animationStyle:(id)arg1 ;
-(void)pushAnimationStyle:(id)arg0 ;
-(void)refreshKeyboardLayoutGuide;
-(void)refreshWithLocalMinimumKeyboardHeight:(CGFloat)arg0 ;
-(void)reloadPlacement;
-(void)removeVisibilityObserver:(id)arg0 ;
-(void)setKeyWindowSceneInputViews:(id)arg0 animationStyle:(id)arg1 ;
-(void)setNextAutomaticOrderInDirection:(int)arg0 duration:(CGFloat)arg1 ;
-(void)setTextEffectsWindowLevelForInputView:(id)arg0 responder:(id)arg1 ;
-(void)setWindowLevel:(CGFloat)arg0 sceneLevel:(CGFloat)arg1 forResponder:(id)arg2 ;
-(void)setWindowSceneInputViews:(id)arg0 animationStyle:(id)arg1 ;
-(void)traitCollectionDidChange;
-(void)updateArbiterClientWithKeyboardFrame:(struct CGRect )arg0 keyboarFrameWithIAV:(struct CGRect )arg1 isIAVRelevant:(BOOL)arg2 showing:(BOOL)arg3 notifyRemote:(BOOL)arg4 forScene:(id)arg5 ;
-(void)updateArbiterClientWithKeyboardVisible:(BOOL)arg0 ;
-(void)updateRenderConfigForCurrentResponder;
-(void)updateRenderConfigForResponder:(id)arg0 ;
-(void)visualModeManager:(id)arg0 didChangeToMode:(int)arg1 ;
-(void)visualModeManager:(id)arg0 observedEnhancedWindowingModeEnabledDidChange:(BOOL)arg1 ;
-(void)window:(id)arg0 changedFromLevel:(CGFloat)arg1 toLevel:(CGFloat)arg2 ;
-(void)windowDidRotate:(id)arg0 ;


@end


#endif