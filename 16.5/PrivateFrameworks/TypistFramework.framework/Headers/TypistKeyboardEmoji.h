// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKEYBOARDEMOJI_H
#define TYPISTKEYBOARDEMOJI_H



#import "TypistKeyboard.h"

@interface TypistKeyboardEmoji : TypistKeyboard



+(BOOL)scrollEmojiKeyboard;
+(id)findEmojiScrollView;
+(void)resetSelectedCategory;
-(id)generateKeystrokeStream:(id)arg0 ;
-(id)init:(id)arg0 options:(id)arg1 ;
-(void)preprocessing;


@end


#endif