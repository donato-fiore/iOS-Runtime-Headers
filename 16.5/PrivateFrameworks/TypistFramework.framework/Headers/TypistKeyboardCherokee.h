// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKEYBOARDCHEROKEE_H
#define TYPISTKEYBOARDCHEROKEE_H

@class NSDictionary;


#import "TypistKeyboard.h"

@interface TypistKeyboardCherokee : TypistKeyboard

@property (retain, nonatomic) NSDictionary *vowelKeyMap; // ivar: _vowelKeyMap


-(id)addAccentKeyAction:(id)arg0 ;
-(id)generateKeyplaneSwitchTable:(id)arg0 ;
-(id)getPostfixKey:(id)arg0 ;
-(id)init:(id)arg0 options:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)setupKeyboardInfo:(id)arg0 options:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif