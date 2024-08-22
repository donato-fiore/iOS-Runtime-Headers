// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCARDVIEW_H
#define TSCARDVIEW_H

@class UIView, NSString;



@interface TSCardView : UIView {
    ? onTap;
    ? onCloseTap;
    ? expandAccessibilityActionHandler;
    ? expandAccessibilityAction;
    ? collapseAccessibilityActionHandler;
    ? collapseAccessibilityAction;
    ? contentView;
    ? clippingView;
    ? grabberView;
    ? contentOverlayButtonView;
    ? barView;
    ? titleView;
    ? layout;
    ? isFullscreen;
}


@property (nonatomic, copy) NSString *accessibilityLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)toggleExpansion;


@end


#endif