// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKEYBOARDUYGHUR_H
#define TYPISTKEYBOARDUYGHUR_H

@class NSDictionary;


#import "TypistKeyboard.h"

@interface TypistKeyboardUyghur : TypistKeyboard

@property (retain, nonatomic) NSDictionary *capitalLettersInitialVowelMap; // ivar: _capitalLettersInitialVowelMap
@property (retain, nonatomic) NSDictionary *smallLettersInitialVowelMap; // ivar: _smallLettersInitialVowelMap


-(id)addKeyboardPopupKeys:(id)arg0 inPlane:(id)arg1 addTo:(id)arg2 keyplaneKeycaps:(id)arg3 ;
-(id)init:(id)arg0 options:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_addDoubleVowelKeys:(id)arg0 withMapping:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)preprocessing;


@end


#endif