// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI26UBERNAVIGATIONBARTITLEVIEW_H
#define _TTC8VIDEOSUI26UBERNAVIGATIONBARTITLEVIEW_H

@class UINavigationBarTitleView;



@interface _TtC8VideosUI26UberNavigationBarTitleView : UINavigationBarTitleView {
    ? customBackButton;
    ? titleView;
    ? titleOpacity;
    ? hostViewController;
    ? isBackButtonHidden;
    ? touchProxyView;
    ? showUberState;
    ? isUber;
    ? futureDisplayMode;
    ? dismissalDisplayMode;
}




-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)contentDidChange;
-(void)layoutSubviews;


@end


#endif