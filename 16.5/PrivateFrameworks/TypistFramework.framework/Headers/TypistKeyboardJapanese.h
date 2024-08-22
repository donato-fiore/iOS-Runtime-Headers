// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKEYBOARDJAPANESE_H
#define TYPISTKEYBOARDJAPANESE_H

@class NSDictionary, NSCharacterSet, NSMutableDictionary;


#import "TypistKeyboard.h"

@interface TypistKeyboardJapanese : TypistKeyboard

@property (retain, nonatomic) NSDictionary *accentKey; // ivar: _accentKey
@property (retain, nonatomic) NSDictionary *baseCharacters; // ivar: _baseCharacters
@property (retain, nonatomic) NSCharacterSet *doubleAccentCharacterSet; // ivar: _doubleAccentCharacterSet
@property (retain, nonatomic) NSDictionary *flickTable; // ivar: _flickTable
@property (retain, nonatomic) NSDictionary *multiTapCompleteKey; // ivar: _multiTapCompleteKey
@property (retain, nonatomic) NSMutableDictionary *multiTapOrbit; // ivar: _multiTapOrbit
@property (retain, nonatomic) NSDictionary *updownKey; // ivar: _updownKey


-(BOOL)_canMultiTap;
-(BOOL)isAutoshiftedToCapitalPlane:(id)arg0 ;
-(BOOL)isKanaKeyboard;
-(BOOL)isSwitchedToCapitalPlane:(id)arg0 previous:(id)arg1 currentPlane:(id)arg2 context:(id)arg3 ;
-(BOOL)isTenKey;
-(BOOL)usesMecabraCandidateBar;
-(NSInteger)commitCandidate:(id)arg0 ;
-(NSInteger)commitCandidateAtIndex:(NSInteger)arg0 ;
-(id)_convertKanaStringstoMultiTapNecessary:(id)arg0 ;
-(id)_convertKanaStringstoRomajiIfNecessary:(id)arg0 ;
-(id)_flickGestureDirection;
-(id)addAccentKeyAction:(id)arg0 ;
-(id)addKeyboardPopupKeys:(id)arg0 inPlane:(id)arg1 addTo:(id)arg2 keyplaneKeycaps:(id)arg3 ;
-(id)changeKeyNameToGenericCharacter:(id)arg0 ;
-(id)generateKeyplaneSwitchTable:(id)arg0 ;
-(id)generateKeystrokeStream:(id)arg0 ;
-(id)getExpectedPlaneNameForKey:(id)arg0 currentPlane:(id)arg1 ;
-(id)getPostfixKey:(id)arg0 ;
-(id)init:(id)arg0 options:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)setupKeyboardInfo:(id)arg0 options:(id)arg1 ;
-(id)whiteSpaceCharSet;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setup50OnFlick:(id)arg0 forKey:(id)arg1 keyName:(id)arg2 planeName:(id)arg3 ;
-(void)setupTenKey:(id)arg0 forKey:(id)arg1 keyName:(id)arg2 planeName:(id)arg3 ;


@end


#endif