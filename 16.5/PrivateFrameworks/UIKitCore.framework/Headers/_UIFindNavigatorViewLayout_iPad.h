// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFINDNAVIGATORVIEWLAYOUT_IPAD_H
#define _UIFINDNAVIGATORVIEWLAYOUT_IPAD_H

@class UIFindNavigatorViewLayout;


#import "UIStackView.h"

@interface _UIFindNavigatorViewLayout_iPad : UIFindNavigatorViewLayout {
    UIStackView *_contentStackView;
    UIStackView *_textFieldsStackView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForLayout;
-(void)setReplaceFieldVisible:(BOOL)arg0 ;


@end


#endif