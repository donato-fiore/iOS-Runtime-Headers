// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBRENDERFACTORYEMOJI_IPAD_H
#define UIKBRENDERFACTORYEMOJI_IPAD_H

@class iPhone;



@interface UIKBRenderFactoryEmoji_iPad : iPhone



-(BOOL)shouldClearBaseDisplayStringForVariants:(id)arg0 ;
-(CGFloat)emojiInternationalKeySize;
-(CGFloat)keyCornerRadius;
-(CGFloat)symbolImageControlKeyFontSize;
-(NSInteger)assetIdiom;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)lightKeycapsFontName;
-(id)messagesWriteboardKeyImageName;
-(id)thinKeycapsFontName;
-(struct CGPoint )emojiInternationalKeyOffset;
-(struct CGPoint )emojiPopupTextOffset;
-(void)_customizeTraits:(id)arg0 forPopupForKey:(id)arg1 withRenderingContext:(id)arg2 keycapsFontName:(id)arg3 ;


@end


#endif