// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKEYBOARD_H
#define TYPISTKEYBOARD_H

@class NSRegularExpression, NSString, NSMutableDictionary, NSDictionary, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TypistCandidateBar.h"
#import "TypistHWKeyboard.h"

@interface TypistKeyboard : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSRegularExpression *autoshiftRegex; // ivar: _autoshiftRegex
@property (retain, nonatomic) TypistCandidateBar *candidatebar; // ivar: _candidatebar
@property (copy, nonatomic) NSString *defaultPlaneName; // ivar: _defaultPlaneName
@property (nonatomic, getter=dictationSupported) BOOL dictationSupported; // ivar: _dictationSupported
@property (nonatomic) BOOL fastTyping; // ivar: _fastTyping
@property (nonatomic) BOOL flickTyping; // ivar: _flickTyping
@property (retain, nonatomic) TypistHWKeyboard *hardwareKeyboard; // ivar: _hardwareKeyboard
@property (nonatomic) BOOL hasCandidatesToCommit; // ivar: _hasCandidatesToCommit
@property (nonatomic) BOOL isCapsLockedState; // ivar: _isCapsLockedState
@property (nonatomic, getter=isHandwriting) BOOL isHandwriting; // ivar: _isHandwriting
@property (nonatomic, getter=isKanaKeyboard) BOOL isKana; // ivar: _isKana
@property (nonatomic, getter=isTenKey) BOOL isTenKey; // ivar: _isTenKey
@property (retain, nonatomic) NSMutableDictionary *keyPlanes; // ivar: _keyPlanes
@property (copy, nonatomic) NSString *keyboardID; // ivar: _keyboardID
@property (copy, nonatomic) NSString *keyboardSW; // ivar: _keyboardSW
@property (copy, nonatomic) NSString *keyboardType; // ivar: _keyboardType
@property (copy, nonatomic) NSString *languageID; // ivar: _languageID
@property (copy, nonatomic) NSString *layoutName; // ivar: _layoutName
@property (copy, nonatomic) NSDictionary *planeSwitchTable; // ivar: _planeSwitchTable
@property (copy, nonatomic) NSNumber *pressDuration; // ivar: _pressDuration
@property (copy, nonatomic) NSString *regionCode; // ivar: _regionCode
@property (retain, nonatomic) NSString *sentenceDelimitingCharacters; // ivar: _sentenceDelimitingCharacters
@property (retain, nonatomic) NSString *sentencePrefixingCharacters; // ivar: _sentencePrefixingCharacters
@property (retain, nonatomic) NSString *sentenceTrailingCharacters; // ivar: _sentenceTrailingCharacters
@property (nonatomic, getter=shouldShowDictationKey) BOOL shouldShowDictationKey; // ivar: _shouldShowDictationKey
@property (nonatomic, getter=shouldShowGlobeKey) BOOL shouldShowGlobeKey; // ivar: _shouldShowGlobeKey
@property (retain, nonatomic) NSNumber *swipeAlpha; // ivar: _swipeAlpha
@property (retain, nonatomic) NSNumber *swipeConvexProbability; // ivar: _swipeConvexProbability
@property (retain, nonatomic) NSNumber *swipeConvexSigma; // ivar: _swipeConvexSigma
@property (retain, nonatomic) NSNumber *swipeErrantProbability; // ivar: _swipeErrantProbability
@property (retain, nonatomic) NSNumber *swipeErrantSigma; // ivar: _swipeErrantSigma
@property (nonatomic) BOOL swipeForceSpace; // ivar: _swipeForceSpace
@property (retain, nonatomic) NSNumber *swipePivotProbability; // ivar: _swipePivotProbability
@property (retain, nonatomic) NSNumber *swipeSigma; // ivar: _swipeSigma
@property (retain, nonatomic) NSNumber *tapBounds; // ivar: _tapBounds
@property (retain, nonatomic) NSNumber *tapSigma; // ivar: _tapSigma
@property (nonatomic) int tapStyle; // ivar: _tapStyle
@property (copy, nonatomic) NSNumber *typeInterval; // ivar: _typeInterval
@property (nonatomic) BOOL usePopupKeys; // ivar: _usePopupKeys
@property (nonatomic) BOOL usePredictionBar; // ivar: _usePredictionBar


+(BOOL)supportsSecureCoding;
+(id)keyboardLanguageValueMap;
+(void)typeStringOnHardwareKeyboard:(id)arg0 withLanguage:(id)arg1 ;
-(BOOL)_isPlaneControlKey:(id)arg0 ;
-(BOOL)hasCandidate:(id)arg0 ;
-(BOOL)hasCandidate:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(BOOL)hasCandidates:(id)arg0 ;
-(BOOL)hasCandidates:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(BOOL)isAutoshiftedToCapitalPlane:(id)arg0 ;
-(BOOL)isAvailableFlickOnCurrentPlane:(id)arg0 withDirection:(id)arg1 ;
-(BOOL)isAvailableGestureOnCurrentPlane:(id)arg0 withDirection:(id)arg1 ;
-(BOOL)isAvailableKeyOnCurrentPlane:(id)arg0 ;
-(BOOL)isAvailablePopoverOnCurrentPlane:(id)arg0 ;
-(BOOL)isFloating;
-(BOOL)isSwitchedToCapitalPlane:(id)arg0 previous:(id)arg1 currentPlane:(id)arg2 context:(id)arg3 ;
-(BOOL)usesMecabraCandidateBar;
-(CGFloat)_getScaleInFrame:(struct CGRect )arg0 isPencil:(BOOL)arg1 dimensions:(id)arg2 ;
-(NSInteger)commitCandidate:(id)arg0 ;
-(NSInteger)commitCandidateAtIndex:(NSInteger)arg0 ;
-(id)_character_set_pattern_from_string:(id)arg0 ;
-(id)_constructSwitchPath:(id)arg0 toPlane:(id)arg1 fromPlane:(id)arg2 ;
-(id)_generateArgumentList:(id)arg0 ;
-(id)_generateHandwritingStream:(id)arg0 inFrame:(struct CGRect )arg1 isPencil:(BOOL)arg2 dimensions:(id)arg3 ;
-(id)_sanitizedStringForAutoShiftCheck:(id)arg0 ;
-(id)_setupAutoShiftRegex;
-(id)addAccentKeyAction:(id)arg0 ;
-(id)addKeyboardPopupKeys:(id)arg0 inPlane:(id)arg1 addTo:(id)arg2 keyplaneKeycaps:(id)arg3 ;
-(id)attemptToFindKeystrokeAsGesture:(id)arg0 ;
-(id)changeKeyNameToGenericCharacter:(id)arg0 ;
-(id)convertRepresentedStringsIfNecessary:(id)arg0 ;
-(id)createAutoshiftRegularExpressionWithDelimitingCharacters:(id)arg0 sentenceTrailingCharacters:(id)arg1 sentencePrefixingCharacters:(id)arg2 ;
-(id)findKey:(id)arg0 inPlane:(id)arg1 ;
-(id)findKeyInOtherPlanes:(id)arg0 currentPlane:(id)arg1 ;
-(id)findKeyOnAnyPlane:(id)arg0 ;
-(id)findKeyOnCurrentPlane:(id)arg0 ;
-(id)generateHandwritingStream:(id)arg0 inFrame:(struct CGRect )arg1 isPencil:(BOOL)arg2 ;
-(id)generateHandwritingStream:(id)arg0 inFrame:(struct CGRect )arg1 isPencil:(BOOL)arg2 rotationBias:(CGFloat)arg3 ;
-(id)generateHandwritingStream:(id)arg0 inFrame:(struct CGRect )arg1 isPencil:(BOOL)arg2 rotationBias:(CGFloat)arg3 isCursive:(BOOL)arg4 ;
-(id)generateKeyplaneSwitchTable:(id)arg0 ;
-(id)generateKeyplaneSwitchTableFor10Key:(id)arg0 ;
-(id)generateKeystrokeStream:(id)arg0 ;
-(id)generatePencilGestureStream:(int)arg0 gestureStyle:(int)arg1 inFrame:(struct CGRect )arg2 ;
-(id)generateSwipeStream:(id)arg0 ;
-(id)getAllCandidates;
-(id)getAlternatePlanesForDefaultPlane;
-(id)getAlternativeKeyPlaneName:(id)arg0 ;
-(id)getExpectedPlaneNameForKey:(id)arg0 currentPlane:(id)arg1 ;
-(id)getPostfixKey:(id)arg0 ;
-(id)getShiftPlaneForAlternatePlane;
-(id)getShiftPlaneForDefaultPlane;
-(id)getShiftedKeyPlaneName:(id)arg0 ;
-(id)getVisibleCandidates;
-(id)init:(id)arg0 ;
-(id)init:(id)arg0 options:(id)arg1 ;
-(id)init:(id)arg0 options:(id)arg1 locale:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHardwareKeyboard:(id)arg0 ;
-(id)keysDataForInputMode:(id)arg0 andFileName:(id)arg1 ;
-(id)setupKeyboardInfo:(id)arg0 options:(id)arg1 ;
-(id)splitKeystrokeStreamByWord:(id)arg0 originalText:(id)arg1 ;
-(id)switchToPlane:(id)arg0 fromPlane:(id)arg1 ;
-(id)tryAlternateVariationsOfKey:(id)arg0 ;
-(struct CGAffineTransform )_determineTransformationinFrame:(struct CGRect )arg0 cumulativeWidth:(CGFloat)arg1 scale:(CGFloat)arg2 characterHeight:(CGFloat)arg3 rotationBias:(CGFloat)arg4 ;
-(struct CGPoint )_determinePointBetween:(struct CGPoint )arg0 nextPoint:(struct CGPoint )arg1 ;
-(struct CGPoint )_guardAgainstOffScreenPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )calculateCoordinatesForFlickGesture:(struct CGPoint )arg0 direction:(id)arg1 offset:(float)arg2 ;
-(struct CGPoint )centerOfKey:(struct CGPoint )arg0 withOffset:(struct CGPoint )arg1 ;
-(struct CGRect )_determineHandwritingBound;
-(void)_bailWithError:(id)arg0 completion:(id)arg1 ;
-(void)_setKeyboardUserPreferences:(id)arg0 ;
-(void)activate:(BOOL)arg0 ;
-(void)attachHardwareKeyboard:(id)arg0 ;
-(void)attachHardwareKeyboardWithCountryCode:(id)arg0 ;
-(void)dealloc;
-(void)detachHardwareKeyboard;
-(void)dragFromKey:(id)arg0 toKey:(id)arg1 completion:(id)arg2 ;
-(void)dragPopoverKey:(id)arg0 completion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flickKey:(id)arg0 withDirection:(id)arg1 completion:(id)arg2 ;
-(void)moveFloatingKeyboardToPosition:(struct CGPoint )arg0 ;
-(void)preprocessing;
// -(void)pressAndHoldHardwareKeys:(id)arg0 forDuration:(CGFloat)arg1 withValidation:(id)arg2 validateAfter:(unk)arg3  ;
-(void)pressKeycode:(unsigned short)arg0 ;
-(void)setFloatingKeyboard:(BOOL)arg0 ;
-(void)setOneHandedPosition:(id)arg0 ;
-(void)setup50OnFlick:(id)arg0 forKey:(id)arg1 keyName:(id)arg2 planeName:(id)arg3 ;
-(void)setupSentenceBoundryStrings;
-(void)setupTenKey:(id)arg0 forKey:(id)arg1 keyName:(id)arg2 planeName:(id)arg3 ;
-(void)swipeGestureKey:(id)arg0 withDirection:(id)arg1 completion:(id)arg2 ;
-(void)swipeGestureOrFlickKey:(id)arg0 withDirection:(id)arg1 completion:(id)arg2 ;
-(void)swipeString:(id)arg0 ;
-(void)switchKeyPlaneOnActiveKeyboard:(id)arg0 ;
-(void)tapGlobeKey;
-(void)tapKey:(id)arg0 tapCount:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)tapKey:(id)arg0 tapCount:(NSUInteger)arg1 overriddenTypeInterval:(id)arg2 completion:(id)arg3 ;
-(void)tapMoreKey;
-(void)toggleCapsLock;
-(void)typeKeystrokeStream:(id)arg0 ;
-(void)typeKeystrokeStream:(id)arg0 completion:(id)arg1 ;
-(void)typeKeystrokeStreamWithPredictive:(id)arg0 originalText:(id)arg1 completion:(id)arg2 ;
-(void)typeString:(id)arg0 ;
-(void)typeString:(id)arg0 completion:(id)arg1 ;
-(void)typeString:(id)arg0 withCommit:(id)arg1 ;
-(void)typeStringWithHardwareKeyboard:(id)arg0 ;
-(void)typeWordKeystrokeWithPredictive:(id)arg0 atIndex:(NSInteger)arg1 completion:(id)arg2 ;
-(void)typeWordKeystrokes:(id)arg0 expectedWord:(id)arg1 atIndex:(NSInteger)arg2 completion:(id)arg3 ;
-(void)writePencilGesture:(int)arg0 inStyle:(int)arg1 gestureRange:(struct _NSRange )arg2 inFrame:(struct CGRect )arg3 ;
-(void)writePencilGesture:(int)arg0 inStyle:(int)arg1 inFrame:(struct CGRect )arg2 ;
-(void)writeString:(id)arg0 inFrame:(struct CGRect )arg1 ;
-(void)writeString:(id)arg0 inFrame:(struct CGRect )arg1 isCursive:(BOOL)arg2 ;
-(void)writeString:(id)arg0 inFrame:(struct CGRect )arg1 rotationBias:(CGFloat)arg2 ;
-(void)writeString:(id)arg0 inFrame:(struct CGRect )arg1 rotationBias:(CGFloat)arg2 isCursive:(BOOL)arg3 ;


@end


#endif