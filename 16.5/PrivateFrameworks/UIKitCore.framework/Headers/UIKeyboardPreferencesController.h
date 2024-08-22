// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDPREFERENCESCONTROLLER_H
#define UIKEYBOARDPREFERENCESCONTROLLER_H

@class UIKeyboardPreferencesController<TIPreferencesControllerActions>;

#import <Foundation/Foundation.h>


@interface UIKeyboardPreferencesController : NSObject

@property NSInteger compactAssistantBarPersistentLocation;
@property BOOL enableProKeyboard;
@property NSInteger handBias;
@property (readonly, nonatomic) UIKeyboardPreferencesController<TIPreferencesControllerActions> *preferencesActions;
@property NSInteger visceral;


+(id)sharedPreferencesController;
-(BOOL)allEnabledInputModesAreValid;
-(BOOL)boolForKey:(int)arg0 ;
-(BOOL)boolForPreferenceKey:(id)arg0 ;
-(BOOL)crescendoEnabled;
-(BOOL)currentInputModeSupportsCrescendo;
-(BOOL)defaultGlobeAsEmojiKeySetting;
-(BOOL)inputModeSupportsCrescendo:(id)arg0 ;
-(BOOL)isFirstReachableKeyboardInteraction;
-(BOOL)isPasswordAutoFillAllowed;
-(BOOL)isPreferenceKeyLockedDown:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)spaceConfirmationEnabled;
-(BOOL)useHardwareGlobeKeyAsEmojiKey;
-(CGFloat)rivenSizeFactor:(CGFloat)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)valueForKey:(int)arg0 ;
-(id)valueForPreferenceKey:(id)arg0 ;
-(void)_configurePreferences;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)performedFirstReachableKeyboardInteraction;
-(void)preferencesControllerChanged:(id)arg0 ;
-(void)saveInputModes:(id)arg0 ;
-(void)setDictationAutoPunctuation:(BOOL)arg0 ;
-(void)setEnabledDictationLanguages:(id)arg0 ;
-(void)setLanguageAwareInputModeLastUsed:(id)arg0 ;
-(void)setLastUsedDictationLanguages:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(int)arg1 ;
-(void)setValue:(id)arg0 forPreferenceKey:(id)arg1 ;
-(void)synchronizePreferences;
-(void)touchSynchronizePreferencesTimer;


@end


#endif