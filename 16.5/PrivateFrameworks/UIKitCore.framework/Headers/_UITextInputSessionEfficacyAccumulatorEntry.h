// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTINPUTSESSIONEFFICACYACCUMULATORENTRY_H
#define _UITEXTINPUTSESSIONEFFICACYACCUMULATORENTRY_H


#import <Foundation/Foundation.h>


@interface _UITextInputSessionEfficacyAccumulatorEntry : NSObject

@property NSInteger inputActions; // ivar: _inputActions
@property NSInteger netCharacters; // ivar: _netCharacters
@property NSInteger netEmojiCharacters; // ivar: _netEmojiCharacters
@property NSInteger userRemovedCharacters; // ivar: _userRemovedCharacters
@property NSInteger userRemovedEmojiCharacters; // ivar: _userRemovedEmojiCharacters


+(id)generateAccumulatorEntryFromAction:(id)arg0 ;
-(BOOL)isAllZeroes;
-(void)increaseWithEntry:(id)arg0 ;


@end


#endif