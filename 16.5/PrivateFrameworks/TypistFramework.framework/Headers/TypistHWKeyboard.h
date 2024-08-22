// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTHWKEYBOARD_H
#define TYPISTHWKEYBOARD_H

@class NSMutableDictionary, NSNumber, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface TypistHWKeyboard : NSObject

@property (retain, nonatomic) NSMutableDictionary *characterToKeycodeMap; // ivar: _characterToKeycodeMap
@property (nonatomic) *__GSKeyboard hardwareKeyboard; // ivar: _hardwareKeyboard
@property (nonatomic) unsigned int hidKeyboardType; // ivar: _hidKeyboardType
@property (retain, nonatomic) NSNumber *keyboardCountryCode; // ivar: _keyboardCountryCode
@property (retain, nonatomic) NSNumber *keyboardLanguage; // ivar: _keyboardLanguage
@property (retain, nonatomic) NSDictionary *modifierCharMap; // ivar: _modifierCharMap
@property (nonatomic) CGFloat pressDuration; // ivar: _pressDuration
@property (retain, nonatomic) NSString *propertyDictionaryString; // ivar: _propertyDictionaryString
@property (nonatomic) CGFloat typeInterval; // ivar: _typeInterval
@property (nonatomic) unsigned char usagePage; // ivar: _usagePage


+(id)_convertKeyboardLanguageToHIDCountryCode:(NSInteger)arg0 ;
+(id)convertHIDCountryCodeToLanguage:(NSInteger)arg0 ;
+(id)keyboardLayoutValueMap;
+(unsigned char)_convertHIDKeyboardTypeToGSKeyboardType:(unsigned int)arg0 ;
+(unsigned int)_convertKeyboardLanguageToHIDKeyboardType:(id)arg0 ;
-(id)_generateKeystrokeStream:(id)arg0 appendTypeInterval:(BOOL)arg1 ;
-(id)_getModifierMaskMap;
-(id)_subsequentKeyPressPairForCharacter:(id)arg0 ;
-(id)generateKeystrokeStream:(id)arg0 ;
-(id)getPropertyDictionaryString;
-(id)initWithLanguage:(id)arg0 ;
-(id)usagePairsForText:(id)arg0 ;
-(unsigned int)getHIDKeyboardType;
-(void)_insertCharacterForKeyCode:(unsigned short)arg0 logOutput:(id)arg1 ;
-(void)_insertKey:(unsigned short)arg0 logOutput:(id)arg1 ;
-(void)_insertStaticKeys;
-(void)_setupCharacterToKeycodeMap;
-(void)dealloc;
-(void)detach;
// -(void)pressAndHoldKeys:(id)arg0 forDuration:(CGFloat)arg1 withValidation:(id)arg2 after:(unk)arg3  ;
-(void)pressKeycode:(unsigned short)arg0 ;
-(void)typeString:(id)arg0 ;


@end


#endif