// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI21INAPPBANNERLOCKUPCELL_H
#define _TTC8VIDEOSUI21INAPPBANNERLOCKUPCELL_H

@class UICollectionViewCell;



@interface _TtC8VideosUI21InAppBannerLockupCell : UICollectionViewCell {
    ? layout;
    ? bannerContentView;
    ? logoImageView;
    ? labels;
    ? decorationImageView;
    ? dividerView;
    ? parentIsInAppBanner;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif