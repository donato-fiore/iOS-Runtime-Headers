// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKEYBOARDKOREAN_H
#define TYPISTKEYBOARDKOREAN_H

@class NSArray, NSDictionary, NSMutableDictionary;


#import "TypistKeyboard.h"

@interface TypistKeyboardKorean : TypistKeyboard

@property (nonatomic) BOOL automaticallyInsertsArrowKey; // ivar: _automaticallyInsertsArrowKey
@property (retain, nonatomic) NSArray *doubleConsonantJong; // ivar: _doubleConsonantJong
@property (retain, nonatomic) NSArray *doubleConsonantSplitJong; // ivar: _doubleConsonantSplitJong
@property (retain, nonatomic) NSArray *doubleVowel; // ivar: _doubleVowel
@property (retain, nonatomic) NSArray *doubleVowelSplit; // ivar: _doubleVowelSplit
@property (retain, nonatomic) NSDictionary *flickTable; // ivar: _flickTable
@property (retain, nonatomic) NSArray *hangul; // ivar: _hangul
@property (retain, nonatomic) NSDictionary *multiTapCompleteKey; // ivar: _multiTapCompleteKey
@property (retain, nonatomic) NSMutableDictionary *multiTapOrbit; // ivar: _multiTapOrbit
@property (retain, nonatomic) NSDictionary *radicalBreakdownFlick; // ivar: _radicalBreakdownFlick
@property (retain, nonatomic) NSDictionary *radicalBreakdownMultiTap; // ivar: _radicalBreakdownMultiTap


-(BOOL)isAutoshiftedToCapitalPlane:(id)arg0 ;
-(BOOL)isSwitchedToCapitalPlane:(id)arg0 previous:(id)arg1 currentPlane:(id)arg2 context:(id)arg3 ;
-(BOOL)isTenKey;
-(BOOL)usesMecabraCandidateBar;
-(id)_convertRadicalIfNeeded:(id)arg0 ;
-(id)_convertToMultiTapIfNecessary:(id)arg0 ;
-(id)_flickGestureDirection:(NSUInteger)arg0 ;
-(id)addKeyboardPopupKeys:(id)arg0 inPlane:(id)arg1 addTo:(id)arg2 keyplaneKeycaps:(id)arg3 ;
-(id)changeKeyNameToGenericCharacter:(id)arg0 ;
-(id)decomposeKoreanStrings:(id)arg0 ;
-(id)generateKeyplaneSwitchTable:(id)arg0 ;
-(id)generateKeystrokeStream:(id)arg0 ;
-(id)generateSwipeStream:(id)arg0 ;
-(id)getExpectedPlaneNameForKey:(id)arg0 currentPlane:(id)arg1 ;
-(id)init:(id)arg0 options:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)setupKeyboardInfo:(id)arg0 options:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setupTenKey:(id)arg0 forKey:(id)arg1 keyName:(id)arg2 planeName:(id)arg3 ;


@end


#endif