// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVCOMMONSENSEVIEW_H
#define _TVCOMMONSENSEVIEW_H

@class UIView, NSArray;


#import "_TVCommonSenseFooterView.h"

@interface _TVCommonSenseView : UIView {
    UIView *_containerView;
}


@property (retain, nonatomic) _TVCommonSenseFooterView *footerView; // ivar: _footerView
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (retain, nonatomic) NSArray *infoViews; // ivar: _infoViews


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif