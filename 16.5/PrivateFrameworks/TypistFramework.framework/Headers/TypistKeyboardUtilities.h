// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKEYBOARDUTILITIES_H
#define TYPISTKEYBOARDUTILITIES_H


#import <Foundation/Foundation.h>


@interface TypistKeyboardUtilities : NSObject



+(BOOL)allOneTimeActionsAlreadyTriggered;
+(BOOL)getAutoCapitalizationPrefSetting;
+(BOOL)getAutoCorrectionPrefSetting;
+(BOOL)getCapsLockPrefSetting;
+(BOOL)getCheckSpellingPrefSetting;
+(BOOL)getDictationEnabled;
+(BOOL)getFuzzyPinyinPrefSetting;
+(BOOL)getGestureKeyPrefSetting;
+(BOOL)getHWKeyboardCapsLockRomanSwitchPrefSetting;
+(BOOL)getKeyPaddlePrefSetting;
+(BOOL)getPeriodShortcutPrefSetting;
+(BOOL)getPredictivePrefSetting;
+(BOOL)getSmallDisplayPrefSetting;
+(BOOL)getSmartDashesPrefSetting;
+(BOOL)getSmartFullWidthSetting;
+(BOOL)getSmartQuotesPrefSetting;
+(BOOL)getTypologyEnabled;
+(BOOL)hasFaceID;
+(BOOL)hasHomeButton;
+(BOOL)hasMarkedText;
+(BOOL)inhibitGlobalAlerts:(BOOL)arg0 ;
+(BOOL)isDictationSupported:(id)arg0 ;
+(BOOL)isFloating;
+(BOOL)setKeyboardDictation:(BOOL)arg0 ;
+(BOOL)setPrefSettings:(id)arg0 ;
+(BOOL)shouldShowDictationKey;
+(BOOL)shouldShowGlobeKey;
+(BOOL)supportsPencil;
+(BOOL)triggerAllTIOneTimeActions;
+(BOOL)waitForKeyboardPlane:(id)arg0 ;
+(NSInteger)getUIDeviceOrientationFromString:(id)arg0 ;
+(NSInteger)getUIInterfaceOrientation;
+(NSInteger)toUIDeviceOrientation:(NSInteger)arg0 ;
+(NSInteger)toUIInterfaceOrientation:(NSInteger)arg0 ;
+(id)appendKeyboardForKeyboardSetting:(id)arg0 ;
+(id)canonicalConversion:(id)arg0 ;
+(id)captureCurrentKeyboardImage;
+(id)convertRecapCommands:(id)arg0 ;
+(id)convertRecapCommandsFromListOfActions:(id)arg0 ;
+(id)deviceInfo;
+(id)formattedKeyplaneName;
+(id)generateKeyboardList;
+(id)getAggregatedTIPreferences;
+(id)getHwRevision;
+(id)getKeyboardsForKeyboardSetting;
+(id)getMobileGestalt:(id)arg0 ;
+(id)getNandCapacity;
+(id)getOneHandedKeyboardHandBias;
+(id)getRootViewControllerViaScene;
+(id)getSameScreenSizeModel;
+(id)getScreenSize;
+(id)getTrainBuildVersion:(id)arg0 ;
+(id)getUIDeviceOrientationAsString;
+(id)markedText;
+(id)removeKeyboardForKeyboardSetting:(id)arg0 ;
+(id)replaceWaitForKeyboardPlane:(id)arg0 withWait:(CGFloat)arg1 ;
+(id)searchForViewInKeyboardWindow:(id)arg0 ;
+(id)searchForWindow:(id)arg0 ;
+(id)setKeyboardForKeyboardSetting:(id)arg0 ;
+(id)setOneHandedKeyboardHandBias:(id)arg0 ;
+(id)sharedFBSOrientationObserver;
+(id)sharedRecapInlinePlayer;
+(id)timeInStringFromTimeInterval:(CGFloat)arg0 ;
+(id)validateProbability:(id)arg0 ;
+(int)getShuangpinPrefSetting;
+(int)getWubiPrefSetting;
+(int)touchScanRate;
+(struct CGPoint )floatingKeyboardDraggablePoint;
+(struct CGPoint )generateGaussianPoint:(struct CGPoint )arg0 withSeed:(NSInteger)arg1 andSigma:(CGFloat)arg2 ;
+(struct CGPoint )generateGaussianPointWithMean:(struct CGPoint )arg0 andSigma:(CGFloat)arg1 ;
+(struct CGPoint )generateUniformPointWithMean:(struct CGPoint )arg0 andBounds:(struct CGVector )arg1 ;
+(struct CGPoint )generateUniformPointWithMean:(struct CGPoint )arg0 andRange:(unsigned int)arg1 ;
+(struct CGRect )findKeyBoundsInKeyboard:(id)arg0 ;
+(void)correctForRotation:(struct CGVector *)arg0 orientation:(NSInteger)arg1 ;
+(void)killKbd;
+(void)launchRecap:(id)arg0 ;
+(void)launchRecap:(id)arg0 completion:(id)arg1 ;
+(void)logToFile:(BOOL)arg0 ;
+(void)logToSTDERR:(BOOL)arg0 ;
+(void)runCommandLineProcess:(*char *)arg0 ;
+(void)runOnMainThread:(id)arg0 ;
+(void)setAirplaneMode:(BOOL)arg0 ;
+(void)setDoNotDisturb:(BOOL)arg0 ;
+(void)setFloatingKeyboard:(BOOL)arg0 ;
+(void)setRecapFastMode:(BOOL)arg0 ;
+(void)tearDownRecapInlinePlayer;
+(void)waitFor:(CGFloat)arg0 ;


@end


#endif