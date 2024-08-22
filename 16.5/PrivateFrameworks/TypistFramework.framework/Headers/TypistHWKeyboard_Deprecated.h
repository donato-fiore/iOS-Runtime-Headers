// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTHWKEYBOARD_DEPRECATED_H
#define TYPISTHWKEYBOARD_DEPRECATED_H

@class NSMutableDictionary, NSString, NSNumber;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface TypistHWKeyboard_Deprecated : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *TypistHWKeyboardQueue; // ivar: _TypistHWKeyboardQueue
@property (retain, nonatomic) NSMutableDictionary *characterToKeycodeMap; // ivar: _characterToKeycodeMap
@property (nonatomic) *__IOHIDUserDevice emulatedKeyboard; // ivar: _emulatedKeyboard
@property (retain, nonatomic) NSString *emulatedModel; // ivar: _emulatedModel
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (nonatomic) *__GSKeyboard hardwareKeyboard; // ivar: _hardwareKeyboard
@property (nonatomic) unsigned int hidKeyboardType; // ivar: _hidKeyboardType
@property (retain, nonatomic) NSNumber *keyboardCountryCode; // ivar: _keyboardCountryCode
@property (nonatomic) CGFloat typeInterval; // ivar: _typeInterval


+(id)_determineAppropriatePropertyDictionaryForHWModelStr:(id)arg0 ;
+(id)_getModifierMaskMap;
+(id)modifierCharMap;
+(unsigned char)_convertCountryCodeToHIDKeyboardType:(unsigned char)arg0 ;
+(unsigned char)_convertGSKeyboardTypeToIOHIDKeyboardType:(unsigned char)arg0 ;
+(unsigned char)_convertHIDKeyboardTypeToGSKeyboardType:(unsigned int)arg0 ;
+(unsigned int)GSEventMaskToKeyboardMask:(unsigned int)arg0 ;
-(id)generateKeystrokeStream:(id)arg0 ;
-(id)generateKeystrokeStream:(id)arg0 position:(*int)arg1 ;
-(id)initWithCountryCode:(id)arg0 ;
-(id)initWithCountryCode:(id)arg0 andPropertyDictionaryAtPath:(id)arg1 ;
-(void)_insertKey:(unsigned short)arg0 gsKeyInfo:(struct ? *)arg1 ;
-(void)_setupCharacterToKeycodeMap;
-(void)detach:(id)arg0 ;
-(void)pressAndHoldKey:(id)arg0 completion:(id)arg1 ;
-(void)releaseKeyPressWithCompletion:(id)arg0 ;
-(void)typeKeyStrokeStream:(id)arg0 ;
-(void)typeString:(id)arg0 completion:(id)arg1 ;


@end


#endif