// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDATEPICKERCALENDARTIMELABEL_H
#define _UIDATEPICKERCALENDARTIMELABEL_H

@class NSIndexSet, NSAttributedString, NSString, UIFont, NSNumberFormatter;
@protocol UIIndirectScribbleInteractionDelegate, UITextInputTraits_Private, UIKeyInput, _UIDatePickerCalendarTimeLabelDelegate;


#import "UIView.h"
#import "UIIndirectScribbleInteraction.h"
#import "UITextField.h"
#import "UIInputContextHistory.h"
#import "_UIDatePickerCalendarTimeValueStore.h"
#import "UIColor.h"
#import "UITextInputPasswordRules.h"
#import "UIImage.h"
#import "_UIDatePickerCalendarTimeLabelStateMachineContext.h"
#import "_UISupplementalLexicon.h"
#import "UITextRange.h"
#import "_UIDatePickerCalendarTimeFormat.h"

@interface _UIDatePickerCalendarTimeLabel : UIView <UIIndirectScribbleInteractionDelegate, UITextInputTraits_Private, UIKeyInput>

 {
    UIIndirectScribbleInteraction *_scribbleInteraction;
    UITextField *_hiddenField;
    UIView *_inputView;
    CGSize _lastSize;
}


@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsInitialEmojiKeyboard;
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) BOOL allowsTextInput; // ivar: _allowsTextInput
@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) NSInteger autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) NSInteger autocorrectionType;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger decrementBehaviour;
@property (nonatomic) BOOL deferBecomingResponder;
@property (weak, nonatomic) NSObject<_UIDatePickerCalendarTimeLabelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) BOOL disableHandwritingKeyboard;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic) UIEdgeInsets floatingKeyboardEdgeInsets;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) NSInteger forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL forceFloatingKeyboard;
@property (nonatomic) BOOL forceSpellingDictation;
@property (nonatomic) BOOL hasDefaultContents;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidePrediction;
@property (readonly, nonatomic) CGRect hourRect;
@property (copy, nonatomic) NSString *hourText;
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property (retain, nonatomic) NSNumberFormatter *inputFormatter; // ivar: _inputFormatter
@property (readonly, nonatomic) NSInteger inputScope; // ivar: _inputScope
@property (readonly, nonatomic) _UIDatePickerCalendarTimeValueStore *inputValue; // ivar: _inputValue
@property (nonatomic) NSUInteger insertedDigitCount; // ivar: _insertedDigitCount
@property (retain, nonatomic) UIColor *insertionPointColor;
@property (nonatomic) NSUInteger insertionPointWidth;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (nonatomic) NSInteger minuteInterval;
@property (readonly, nonatomic) CGRect minuteRect;
@property (copy, nonatomic) NSString *minuteText;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) BOOL preferOnlineDictation;
@property (nonatomic) NSInteger preferredKeyboardStyle;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic) BOOL roundsToMinuteInterval; // ivar: _roundsToMinuteInterval
@property (readonly, nonatomic) BOOL scribbleInteractionIsActive;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (retain, nonatomic) UIColor *selectionBarColor;
@property (retain, nonatomic) UIColor *selectionBorderColor;
@property (nonatomic) CGFloat selectionBorderWidth;
@property (nonatomic) CGFloat selectionCornerRadius;
@property (retain, nonatomic) UIImage *selectionDragDotImage;
@property (nonatomic) UIEdgeInsets selectionEdgeInsets;
@property (retain, nonatomic) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) BOOL showDictationButton;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly, nonatomic) _UIDatePickerCalendarTimeLabelStateMachineContext *stateContext; // ivar: _stateContext
@property (readonly) Class superclass;
@property (retain, nonatomic) _UISupplementalLexicon *supplementalLexicon;
@property (retain, nonatomic) UIImage *supplementalLexiconAmbiguousItemIcon;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (readonly, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textContentType;
@property (nonatomic) int textLoupeVisibility;
@property (readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property (nonatomic) NSInteger textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id *textSuggestionDelegate;
@property (nonatomic) *__CFCharacterSet textTrimmingSet;
@property (retain, nonatomic) _UIDatePickerCalendarTimeFormat *timeFormat; // ivar: _timeFormat
@property (readonly, nonatomic) CGRect timeOfDayRect; // ivar: _timeOfDayRect
@property (readonly, nonatomic) NSString *timeOfDayText;
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) _NSRange validTextRange;


+(BOOL)supportsScribbleInteraction;
-(BOOL)_canChangeFirstResponder:(id)arg0 toResponder:(id)arg1 ;
-(BOOL)_digits:(*NSUInteger)arg0 fromText:(id)arg1 count:(*NSInteger)arg2 ;
-(BOOL)_pointIsInsideHourSide:(struct CGPoint )arg0 ;
-(BOOL)_suppressSoftwareKeyboard;
-(BOOL)_treatMinutesAsHoursForState:(NSUInteger)arg0 ;
-(BOOL)_wantsPriorityOverFocusUpdates;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)displaysTimeOfDayLabel;
-(BOOL)indirectScribbleInteraction:(id)arg0 isElementFocused:(id)arg1 ;
-(BOOL)indirectScribbleInteraction:(id)arg0 shouldDelayFocusForElement:(id)arg1 ;
-(BOOL)processTapOutside;
-(BOOL)resignFirstResponder;
-(NSInteger)editingInteractionConfiguration;
-(id)attributedTextWithRanges:(struct ? *)arg0 ;
-(id)focusGroupIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTimeFormat:(id)arg0 minuteInterval:(NSInteger)arg1 ;
-(id)inputView;
-(id)keyCommands;
-(struct CGRect )indirectScribbleInteraction:(id)arg0 frameForElement:(id)arg1 ;
-(void)_roundInputToClosestIntervalIfNeeded;
-(void)_stateMachineSendEvent:(NSUInteger)arg0 ;
-(void)_uiTest_becomeFirstResponder;
-(void)_uiTest_resignFirstResponder;
-(void)applyTextAttributesForState:(NSUInteger)arg0 inputScope:(NSInteger)arg1 updater:(id)arg2 ;
-(void)beginEditingWheels;
-(void)deleteBackward;
-(void)didReceiveDownArrowKey:(id)arg0 ;
-(void)didReceiveLeftArrowKey:(id)arg0 ;
-(void)didReceiveRightArrowKey:(id)arg0 ;
-(void)didReceiveUpArrowKey:(id)arg0 ;
-(void)didTapInputLabel:(id)arg0 ;
-(void)endEditingWheels;
-(void)indirectScribbleInteraction:(id)arg0 didFinishWritingInElement:(id)arg1 ;
-(void)indirectScribbleInteraction:(id)arg0 focusElementIfNeeded:(id)arg1 referencePoint:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)indirectScribbleInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 completion:(id)arg2 ;
-(void)indirectScribbleInteraction:(id)arg0 willBeginWritingInElement:(id)arg1 ;
-(void)insertText:(id)arg0 ;
-(void)layoutSubviews;
-(void)pushCurrentStateIntoUI;
-(void)pushCurrentStateIntoUIAndNotify;
-(void)stateMachineUpdateFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;
-(void)takeTraitsFrom:(id)arg0 ;
-(void)tintColorDidChange;
-(void)wheelChanged;
-(void)willBeginWritingInScribbleInteraction;


@end


#endif