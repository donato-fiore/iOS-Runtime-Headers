// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBARPERSONNAMEITEMVIEW_H
#define UISTATUSBARPERSONNAMEITEMVIEW_H

@class NSString;


#import "UIStatusBarItemView.h"

@interface UIStatusBarPersonNameItemView : UIStatusBarItemView {
    NSString *_personNameString;
    CGFloat _letterSpacing;
    CGFloat _maxWidth;
}




-(BOOL)_updateWithPersonName:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)addContentOverlap:(CGFloat)arg0 ;
-(CGFloat)extraRightPadding;
-(CGFloat)resetContentOverlap;
-(CGFloat)standardPadding;
-(NSInteger)legibilityStyle;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;


@end


#endif