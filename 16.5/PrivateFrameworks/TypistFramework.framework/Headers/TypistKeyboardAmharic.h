// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKEYBOARDAMHARIC_H
#define TYPISTKEYBOARDAMHARIC_H

@class NSCharacterSet;


#import "TypistKeyboard.h"

@interface TypistKeyboardAmharic : TypistKeyboard

@property (retain, nonatomic) NSCharacterSet *keycapAndPopoverConstants; // ivar: _keycapAndPopoverConstants
@property (retain, nonatomic) NSCharacterSet *keycapAndPopoverVowels; // ivar: _keycapAndPopoverVowels


-(BOOL)isConsonant:(unsigned short)arg0 ;
-(BOOL)isJoinedConsonantAndVowelCharacter:(unsigned short)arg0 ;
-(BOOL)isPopoverCombo:(id)arg0 withIndex:(NSInteger)arg1 ;
-(BOOL)isTapKey:(id)arg0 ;
-(id)decomposeAmharicChar:(unsigned short)arg0 ;
-(id)decomposeAmharicStrings:(id)arg0 ;
-(id)generateKeystrokeStream:(id)arg0 ;
-(id)init:(id)arg0 options:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)setupKeyboardInfo:(id)arg0 options:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif