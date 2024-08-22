// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDEMOJIGRAPHICS_H
#define UIKEYBOARDEMOJIGRAPHICS_H


#import <Foundation/Foundation.h>


@interface UIKeyboardEmojiGraphics : NSObject



+(BOOL)boldText;
+(BOOL)isWildcatKeyboard;
+(CGFloat)emojiPageControlYOffset:(BOOL)arg0 ;
+(CGFloat)optionalDescriptionPadding:(BOOL)arg0 ;
+(CGFloat)recentLableVerticalPadding:(BOOL)arg0 ;
+(id)emojiCategoryImagePath:(id)arg0 forRenderConfig:(id)arg1 ;
+(id)emojiFontAttributes;
+(id)emojiFontAttributesForPortrait:(BOOL)arg0 ;
+(id)sharedInstance;
+(struct CGPoint )margin:(BOOL)arg0 ;
+(struct CGPoint )padding:(BOOL)arg0 ;
+(struct CGSize )emojiSize:(BOOL)arg0 ;
+(unsigned char)colCount:(BOOL)arg0 ;
+(unsigned char)rowCount:(BOOL)arg0 ;
-(id)init;


@end


#endif