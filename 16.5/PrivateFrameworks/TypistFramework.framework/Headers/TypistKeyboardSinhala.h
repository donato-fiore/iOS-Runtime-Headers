// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKEYBOARDSINHALA_H
#define TYPISTKEYBOARDSINHALA_H

@class NSDictionary;


#import "TypistKeyboard.h"

@interface TypistKeyboardSinhala : TypistKeyboard

@property (retain, nonatomic) NSDictionary *joinedVowelForms; // ivar: _joinedVowelForms


-(id)init:(id)arg0 options:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)setupKeyboardInfo:(id)arg0 options:(id)arg1 ;
-(id)tryAlternateVariationsOfKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif