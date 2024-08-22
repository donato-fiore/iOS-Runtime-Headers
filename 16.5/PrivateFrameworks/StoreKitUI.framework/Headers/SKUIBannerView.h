// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIBANNERVIEW_H
#define SKUIBANNERVIEW_H

@class UIView, UILabel, UIImageView, UIButton, NSMutableArray, NSString, UIControl, UIImage, SSLookupItemOffer, NSArray;


#import "SKUIClientContext.h"
#import "SKUIItemState.h"

@interface SKUIBannerView : UIView {
    UILabel *_artistNameLabel;
    UIView *_bottomBorderView;
    UIImageView *_iconImageView;
    UIButton *_itemOfferButton;
    UILabel *_itemStateLabel;
    NSMutableArray *_screenshotImageViews;
    UIView *_separatorView;
    UILabel *_titleLabel;
    UIImageView *_userRatingStarImageView;
}


@property (copy, nonatomic) NSString *artistName;
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, nonatomic) UIControl *closeButton; // ivar: _closeButton
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) SSLookupItemOffer *itemOffer; // ivar: _itemOffer
@property (readonly, nonatomic) UIControl *itemOfferButton;
@property (retain, nonatomic) SKUIItemState *itemState; // ivar: _itemState
@property (copy, nonatomic) NSArray *screenshotImages;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) float userRating; // ivar: _userRating


-(id)_newDefaultLabel;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_reloadItemState;
-(void)layoutSubviews;


@end


#endif