// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKEYBOARDCHINESE_H
#define TYPISTKEYBOARDCHINESE_H

@class NSDictionary, NSRegularExpression;


#import "TypistKeyboard.h"

@interface TypistKeyboardChinese : TypistKeyboard

@property (retain, nonatomic) NSDictionary *flickTable; // ivar: _flickTable
@property (retain, nonatomic) NSDictionary *pinyinMap; // ivar: _pinyinMap
@property (retain, nonatomic) NSRegularExpression *whiteSpaceRegex; // ivar: _whiteSpaceRegex


-(BOOL)_isPinyin;
-(BOOL)_isWubihua;
-(BOOL)isAutoshiftedToCapitalPlane:(id)arg0 ;
-(BOOL)isHandwriting;
-(BOOL)isPinyinCharacter:(unsigned short)arg0 ;
-(BOOL)isSwitchedToCapitalPlane:(id)arg0 previous:(id)arg1 currentPlane:(id)arg2 context:(id)arg3 ;
-(BOOL)isSwitchedToDefaultPlane:(id)arg0 ;
-(BOOL)isTenKey;
-(BOOL)keyWillCommitCandidate:(id)arg0 ;
-(BOOL)usesMecabraCandidateBar;
-(id)_flickGestureDirection;
-(id)changeKeyNameToGenericCharacter:(id)arg0 ;
-(id)generateKeyplaneSwitchTable:(id)arg0 ;
-(id)generateKeystrokeStream:(id)arg0 ;
-(id)getExpectedPlaneNameForKey:(id)arg0 currentPlane:(id)arg1 ;
-(id)getPostfixKey:(id)arg0 ;
-(id)init:(id)arg0 options:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)setupKeyboardInfo:(id)arg0 options:(id)arg1 ;
-(id)willDirectlyCommitNumbersAndPunctuationSet;
-(id)willSwitchToDefaultPlaneCharacterSet;
-(struct CGRect )_determineHandwritingBound;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setupSentenceBoundryStrings;
-(void)setupTenKey:(id)arg0 forKey:(id)arg1 keyName:(id)arg2 planeName:(id)arg3 ;


@end


#endif