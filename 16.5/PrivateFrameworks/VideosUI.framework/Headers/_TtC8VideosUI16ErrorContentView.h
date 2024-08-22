// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI16ERRORCONTENTVIEW_H
#define _TTC8VIDEOSUI16ERRORCONTENTVIEW_H

@class UIView;


#import "VUIBaseView.h"

@interface _TtC8VideosUI16ErrorContentView : VUIBaseView {
    ? layout;
    ? titleView;
    ? descriptionView;
    ? debugTextView;
    ? debugTextView2;
}


@property (nonatomic, readonly) UIView *accessibilityDescriptionView;
@property (nonatomic, readonly) UIView *accessibilityTitleView;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;


@end


#endif