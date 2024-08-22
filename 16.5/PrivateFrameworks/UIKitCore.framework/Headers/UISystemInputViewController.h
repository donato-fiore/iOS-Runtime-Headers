// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISYSTEMINPUTVIEWCONTROLLER_H
#define UISYSTEMINPUTVIEWCONTROLLER_H

@class NSMutableDictionary, UIResponder<UITraitEnvironment>, NSUUID, NSString, NSArray, UIResponder<UITextInput>;
@protocol UIRecentsInputViewControllerDelegate, UISystemInputViewControllerDelegate;


#import "UIViewController.h"
#import "UILabel.h"
#import "UILexicon.h"
#import "UIView.h"
#import "UIButton.h"
#import "UIKBSystemLayoutViewController.h"
#import "UIKeyboard.h"
#import "UICompatibilityInputViewController.h"
#import "UIRecentsInputViewController.h"
#import "UITextInputTraits.h"

@interface UISystemInputViewController : UIViewController <UIRecentsInputViewControllerDelegate>

 {
    NSMutableDictionary *_accessoryViewControllers;
    NSMutableDictionary *_accessoryConstraints;
    BOOL _needsSetupAgain;
    BOOL _isVisible;
    BOOL _requiresLinearStyleForActiveInputModes;
    UIResponder<UITraitEnvironment> *_containingResponder;
    NSUUID *_remoteInputSessionIdentifier;
}


@property (retain, nonatomic) UILabel *_promptLabel; // ivar: _promptLabel
@property (nonatomic) NSInteger blurEffectStyle; // ivar: _blurEffectStyle
@property (retain, nonatomic) UILexicon *cachedRecents; // ivar: _cachedRecents
@property (retain, nonatomic) UIView *containingView; // ivar: _containingView
@property (retain, nonatomic) UIView *contentLayoutView; // ivar: _contentLayoutView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDisplayRecents; // ivar: _didDisplayRecents
@property (retain, nonatomic) UIButton *doneButton; // ivar: _doneButton
@property (retain, nonatomic) NSArray *editorConstraints; // ivar: _editorConstraints
@property (retain, nonatomic) UIKBSystemLayoutViewController *editorVC; // ivar: _editorVC
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *horizontalAlignments; // ivar: _horizontalAlignments
@property (retain, nonatomic) UIViewController *inputVC; // ivar: _inputVC
@property (nonatomic) BOOL isAutomaticResponderTransition; // ivar: _isAutomaticResponderTransition
@property (retain, nonatomic) UIKeyboard *keyboard; // ivar: _keyboard
@property (nonatomic) BOOL keyboardCanBecomeFocusedWithZeroAlpha;
@property (retain, nonatomic) NSArray *keyboardConstraints; // ivar: _keyboardConstraints
@property (retain, nonatomic) UICompatibilityInputViewController *keyboardVC; // ivar: _keyboardVC
@property (retain, nonatomic) UIResponder<UITextInput> *nextInputDelegate; // ivar: _nextInputDelegate
@property (nonatomic) BOOL notifyKeyboardOnScreenOnFocusOnly; // ivar: _notifyKeyboardOnScreenOnFocusOnly
@property (retain, nonatomic) UIResponder<UITextInput> *persistentDelegate; // ivar: _persistentDelegate
@property (retain, nonatomic) UIRecentsInputViewController *recentsVC; // ivar: _recentsVC
@property (nonatomic) NSUInteger requestedInteractionModel; // ivar: _requestedInteractionModel
@property (nonatomic) NSInteger resolvedKeyboardStyle; // ivar: _resolvedKeyboardStyle
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsRecentInputsIntegration; // ivar: _supportsRecentInputsIntegration
@property (nonatomic) BOOL supportsTouchInput; // ivar: _supportsTouchInput
@property (nonatomic) NSObject<UISystemInputViewControllerDelegate> *systemInputViewControllerDelegate; // ivar: _systemInputViewControllerDelegate
@property (retain, nonatomic) UITextInputTraits *textInputTraits; // ivar: _textInputTraits
@property (nonatomic) UIEdgeInsets unfocusedFocusGuideOutsets;
@property (retain, nonatomic) NSArray *verticalAlignments; // ivar: _verticalAlignments
@property (nonatomic) BOOL willPresentFullscreen; // ivar: _willPresentFullscreen
@property (nonatomic) BOOL willUpdateBackgroundEffectOnInputModeChange; // ivar: _willUpdateBackgroundEffectOnInputModeChange


+(BOOL)canUseSystemInputViewControllerForResponder:(id)arg0 ;
+(id)_canonicalTraitsForResponder:(id)arg0 ;
+(id)_carPlay_systemInputViewControllerForResponder:(id)arg0 editorView:(id)arg1 containingResponder:(id)arg2 traitCollection:(id)arg3 ;
+(id)_iOS_systemInputViewControllerForResponder:(id)arg0 editorView:(id)arg1 containingResponder:(id)arg2 traitCollection:(id)arg3 ;
+(id)_tvOS_systemInputViewControllerForResponder:(id)arg0 editorView:(id)arg1 containingResponder:(id)arg2 traitCollection:(id)arg3 ;
+(id)systemInputViewControllerForResponder:(id)arg0 editorView:(id)arg1 ;
+(id)systemInputViewControllerForResponder:(id)arg0 editorView:(id)arg1 containingResponder:(id)arg2 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(BOOL)willShowRecentsList;
-(NSUInteger)_horizontalLayoutTypeForEdge:(NSInteger)arg0 ;
-(NSUInteger)_verticalLayoutTypeForEdge:(NSInteger)arg0 ;
-(id)_accessoryViewControllerForEdge:(NSInteger)arg0 ;
-(id)_remoteInputSessionIdentifier;
-(id)_traitCollectionForUserInterfaceStyle;
-(id)accessoryViewControllerForEdge:(NSInteger)arg0 ;
-(id)alignmentConstraintArrayForAxis:(NSInteger)arg0 ;
-(id)alignmentConstraintForAxis:(NSInteger)arg0 ;
-(id)constraintFromView:(id)arg0 attribute:(NSInteger)arg1 toView:(id)arg2 attribute:(NSInteger)arg3 ;
-(id)constraintsForEdge:(NSInteger)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(id)traitCollection;
-(void)_addAccessoryViewController:(id)arg0 ;
-(void)_addChildInputViewController;
-(void)_clearCursorLocationIfNotFirstResponder;
-(void)_createKeyboardIfNecessary;
-(void)_didSuspend:(id)arg0 ;
-(void)_dismissSystemInputViewController;
-(void)_removeAccessoryViewController:(id)arg0 ;
-(void)_resetDelegate;
-(void)_restoreKeyboardIfNecessary;
-(void)_returnButtonPressed;
-(void)_setNonInputViewVisibility:(BOOL)arg0 ;
-(void)_updateRemoteTextEditingSession;
-(void)_willResume:(id)arg0 ;
-(void)_windowDidBecomeApplicationKey:(id)arg0 ;
-(void)_windowWillBecomeApplicationKey:(id)arg0 ;
-(void)configureRecentsVCIfNecessary;
-(void)dealloc;
-(void)didSelectRecentInput;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)findNextInputDelegate;
-(void)inputModeDidChange:(id)arg0 ;
-(void)notifyDelegateWithAccessoryVisibility:(BOOL)arg0 ;
-(void)populateCoreHierarchy;
-(void)prepareForRelease;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reloadInputViewsForPersistentDelegate;
-(void)resetContainingResponder;
-(void)setAccessoryViewController:(id)arg0 forEdge:(NSInteger)arg1 ;
-(void)setAlignmentConstraint:(id)arg0 forAxis:(NSInteger)arg1 ;
-(void)setAlignmentConstraintArray:(id)arg0 forAxis:(NSInteger)arg1 ;
-(void)setConstraints:(id)arg0 forEdge:(NSInteger)arg1 ;
-(void)setupKeyboard;
-(void)switchToKeyboard;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAlignmentConstraints;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif