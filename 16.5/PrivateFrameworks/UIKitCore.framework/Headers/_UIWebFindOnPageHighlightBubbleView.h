// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIWEBFINDONPAGEHIGHLIGHTBUBBLEVIEW_H
#define _UIWEBFINDONPAGEHIGHLIGHTBUBBLEVIEW_H



#import "UIView.h"

@interface _UIWebFindOnPageHighlightBubbleView : UIView {
    *CGImage _highlightedContent;
    CGPoint _highlightedContentOrigin;
}




-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setHighlightedContent:(struct CGImage *)arg0 withOrigin:(struct CGPoint )arg1 ;


@end


#endif