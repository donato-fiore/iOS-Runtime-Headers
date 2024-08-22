// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARD_H
#define UIKEYBOARD_H

@class NSMutableDictionary, NSArray, NSString;
@protocol UIKBFocusGuideDelegate, UIKeyboardImplGeometryDelegate;


#import "UIView.h"
#import "UITextInputTraits.h"
#import "_UIKeyboardPasscodeObscuringInteraction.h"
#import "UITapGestureRecognizer.h"
#import "UITextCursorAssertionController.h"

@interface UIKeyboard : UIView <UIKBFocusGuideDelegate, UIKeyboardImplGeometryDelegate>

 {
    UIView *m_snapshot;
    UITextInputTraits *m_defaultTraits;
    UITextInputTraits *m_overrideTraits;
    BOOL m_typingDisabled;
    BOOL m_minimized;
    BOOL m_respondingToImplGeometryChange;
    NSInteger m_orientation;
    BOOL m_hasExplicitOrientation;
    BOOL m_disableTouchInput;
    BOOL m_useLinearLayout;
    BOOL m_useRecentsAlert;
    NSMutableDictionary *m_focusGuides;
    UIEdgeInsets m_unfocusedFocusGuideOutsets;
    _UIKeyboardPasscodeObscuringInteraction *_passcodeObscuringInteraction;
    CGRect _forcedFrame;
    UITapGestureRecognizer *_variantsMenuGesture;
    NSArray *_implConstraints;
}


@property (readonly, nonatomic) UITextCursorAssertionController *_activeAssertionController;
@property (nonatomic) BOOL caretBlinks;
@property (nonatomic) BOOL caretVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasImpendingCursorLocation; // ivar: _hasImpendingCursorLocation
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger impendingCursorLocation; // ivar: _impendingCursorLocation
@property (nonatomic) NSInteger keyboardIdiom; // ivar: m_idiom
@property (nonatomic, getter=isMinimized) BOOL minimized;
@property (nonatomic) NSUInteger requestedInteractionModel; // ivar: _requestedInteractionModel
@property (nonatomic) BOOL shouldUpdateLayoutAutomatically; // ivar: _shouldUpdateLayoutAutomatically
@property (nonatomic) BOOL showsCandidatesInline;
@property (readonly) Class superclass;
@property (nonatomic) BOOL typingEnabled;


+(BOOL)candidateDisplayIsExtended;
+(BOOL)hasInputOrAssistantViewsOnScreen;
+(BOOL)inputUIOOP;
+(BOOL)isInHardwareKeyboardMode;
+(BOOL)isInputSystemUI;
+(BOOL)isKeyboardProcess;
+(BOOL)isMajelEnabled;
+(BOOL)isMajelSupported;
+(BOOL)isModelessActive;
+(BOOL)isOnScreen;
+(BOOL)isShowingEmojiSearch;
+(BOOL)isSpotlight;
+(BOOL)platformSupportsKeyboardServiceRole:(NSUInteger)arg0 ;
+(BOOL)predictionViewPrewarmsPredictiveCandidates;
+(BOOL)respondsToProxGesture;
+(BOOL)shouldExtendKeyboardInputUI;
+(BOOL)shouldMinimizeForHardwareKeyboard;
+(BOOL)shouldSuppressSoftwareKeyboardForResponder:(id)arg0 ;
+(BOOL)splitKeyboardEnabled;
+(BOOL)usesInputSystemUI;
+(BOOL)usesLocalKeyboard;
+(CGFloat)predictionViewHeightForCurrentInputMode;
+(NSUInteger)serviceRole;
+(id)activeKeyboard;
+(id)activeKeyboardForScreen:(id)arg0 ;
+(id)currentDocumentState;
+(id)homeGestureExclusionZones;
+(id)keyboardApplicationIdentifier;
+(id)keyboardBundleIdentifier;
+(id)snapshotViewForOptions:(NSUInteger)arg0 ;
+(id)snapshotViewForPredictionViewTransition;
+(id)suppressionPolicyDelegate;
+(struct CGRect )defaultFrameForInterfaceOrientation:(NSInteger)arg0 ;
+(struct CGSize )defaultSize;
+(struct CGSize )defaultSizeForInterfaceOrientation:(NSInteger)arg0 ;
+(struct CGSize )keyboardSizeForInterfaceOrientation:(NSInteger)arg0 ;
+(struct CGSize )sizeForInterfaceOrientation:(NSInteger)arg0 ;
+(struct CGSize )sizeForInterfaceOrientation:(NSInteger)arg0 ignoreInputView:(BOOL)arg1 ;
+(struct CGSize )sizeForInterfaceOrientation:(NSInteger)arg0 includingAssistantBar:(BOOL)arg1 ignoreInputView:(BOOL)arg2 ;
+(struct UIEdgeInsets )_keyboardFocusGuideMargins;
+(struct UIEdgeInsets )keyplanePadding;
+(void)_clearActiveKeyboard;
+(void)clearActiveForScreen:(id)arg0 ;
+(void)initImplementationNow;
+(void)makeKeyboardActive:(id)arg0 forScreen:(id)arg1 ;
+(void)removeAllDynamicDictionaries;
+(void)resetServiceRole;
+(void)setKeyboardAlpha:(CGFloat)arg0 ;
+(void)setPredictionViewPrewarmsPredictiveCandidates:(BOOL)arg0 ;
+(void)setServiceRole:(NSUInteger)arg0 ;
+(void)setSuppressionPolicyDelegate:(id)arg0 ;
-(BOOL)_disableTouchInput;
-(BOOL)_hasCandidates;
-(BOOL)_isAutomaticKeyboard;
-(BOOL)_mayRemainFocused;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(BOOL)_useLinearLayout;
-(BOOL)_useRecentsAlert;
-(BOOL)allowExternalChangeForFocusHeading:(NSUInteger)arg0 cursorLocation:(NSUInteger)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)canDismiss;
-(BOOL)canHandleEvent:(id)arg0 ;
-(BOOL)disableInteraction;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hasAutocorrectPrompt;
-(BOOL)isActive;
-(BOOL)isActivePerScreen;
-(BOOL)isAutomatic;
-(BOOL)pointInside:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)returnKeyEnabled;
-(BOOL)shouldSaveMinimizationState;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(BOOL)showPredictionBar;
-(NSInteger)_focusTouchSensitivityStyle;
-(NSInteger)_focusedSound;
-(NSInteger)_positionInCandidateList:(id)arg0 ;
-(NSInteger)interfaceOrientation;
-(NSUInteger)cursorLocation;
-(id)_baseKeyForRepresentedString:(id)arg0 ;
-(id)_getAutocorrection;
-(id)_getCurrentKeyboardName;
-(id)_getCurrentKeyplaneName;
-(id)_getLocalizedInputMode;
-(id)_initWithFrame:(struct CGRect )arg0 lazily:(BOOL)arg1 ;
-(id)_keyplaneForKey:(id)arg0 ;
-(id)_keyplaneNamed:(id)arg0 ;
-(id)_overrideTextInputTraits;
-(id)_systemDefaultFocusGroupIdentifier;
-(id)_touchPoint:(struct CGPoint )arg0 ;
-(id)_typeCharacter:(id)arg0 withError:(struct CGPoint )arg1 shouldTypeVariants:(BOOL)arg2 baseKeyForVariants:(BOOL)arg3 ;
-(id)createPathEffectViewIfNecessary;
-(id)defaultTextInputTraits;
-(id)delegate;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initLazily;
-(id)initWithDefaultSize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithRequestedInteractionModel:(NSUInteger)arg0 ;
-(id)targetWindow;
-(int)textEffectsVisibilityLevel;
-(struct CGRect )_floatingKeyboardDraggableRect;
-(struct CGRect )_focusCastingFrameForHeading:(NSUInteger)arg0 inCoordinateSpace:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )unfocusedFocusGuideOutsets;
-(struct UIPeripheralAnimationGeometry )geometryForImplHeightDelta:(CGFloat)arg0 ;
-(struct UIPeripheralAnimationGeometry )geometryForMinimize:(BOOL)arg0 ;
-(void)_acceptCurrentCandidate;
-(void)_changeToKeyplane:(id)arg0 ;
-(void)_deactivateForBackgrounding;
-(void)_didChangeCandidateList;
-(void)_didChangeCursorLocation;
-(void)_didChangeKeyplaneWithContext:(id)arg0 ;
-(void)_setAutocorrects:(BOOL)arg0 ;
-(void)_setDisableTouchInput:(BOOL)arg0 ;
-(void)_setDisableUpdateMaskForSecureTextEntry:(BOOL)arg0 ;
-(void)_setInputMode:(id)arg0 ;
-(void)_setPasscodeOutlineAlpha:(CGFloat)arg0 ;
-(void)_setPreferredHeight:(CGFloat)arg0 ;
-(void)_setRenderConfig:(id)arg0 ;
-(void)_setSplit:(BOOL)arg0 ;
-(void)_setUndocked:(BOOL)arg0 ;
-(void)_setUseLinearLayout:(BOOL)arg0 ;
-(void)_setUseRecentsAlert:(BOOL)arg0 ;
-(void)_showAutofillExtras;
-(void)_toggleVariantsMenuGesture:(BOOL)arg0 ;
-(void)_wheelChangedWithEvent:(id)arg0 ;
-(void)acceptAutocorrection;
-(void)acceptAutocorrectionWithCompletionHandler:(id)arg0 ;
-(void)activate;
-(void)activateIfNeeded;
-(void)autoAdjustOrientation;
-(void)clearActivePerScreenIfNeeded;
-(void)clearSnapshot;
-(void)deactivate;
-(void)dealloc;
-(void)didFocusGuideWithHeading:(NSUInteger)arg0 ;
-(void)didMoveToWindow;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)displayLayer:(id)arg0 ;
-(void)geometryChangeDone:(BOOL)arg0 ;
-(void)implBoundsHeightChangeDone:(CGFloat)arg0 suppressNotification:(BOOL)arg1 ;
-(void)keyboardMinMaximized:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)manualKeyboardWasOrderedIn;
-(void)manualKeyboardWasOrderedOut;
-(void)manualKeyboardWillBeOrderedIn;
-(void)manualKeyboardWillBeOrderedOut;
-(void)maximize;
-(void)minimize;
-(void)prepareForGeometryChange;
-(void)prepareForImplBoundsHeightChange:(CGFloat)arg0 suppressNotification:(BOOL)arg1 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)remoteControlReceivedWithEvent:(id)arg0 ;
-(void)removeAutocorrectPrompt;
-(void)responseContextDidChange;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCorrectionLearningAllowed:(BOOL)arg0 ;
-(void)setCursorLocation:(NSUInteger)arg0 ;
-(void)setDefaultTextInputTraits:(id)arg0 ;
-(void)setDisableInteraction:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsDisplay;
-(void)setOrientation:(NSInteger)arg0 ;
-(void)setReturnKeyEnabled:(BOOL)arg0 ;
-(void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets )arg0 ;
-(void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets )arg0 fromView:(id)arg1 ;
-(void)set_overrideTextInputTraits:(id)arg0 ;
-(void)setupKeyFocusGuides;
-(void)syncMinimizedStateToHardwareKeyboardAttachedState;
-(void)takeSnapshot;
-(void)textInputTraitsDidChange;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateFocusMarginsUpToView:(id)arg0 ;
-(void)updateKeyFocusGuides;
-(void)updateLayout;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif