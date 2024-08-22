// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIREDEEMITUNESPASSLOCKUP_H
#define SKUIREDEEMITUNESPASSLOCKUP_H

@class UIControl, UILabel, UIView, UIImageView;


#import "SKUIClientContext.h"
#import "SKUIITunesPassConfiguration.h"

@interface SKUIRedeemITunesPassLockup : UIControl {
    SKUIClientContext *_clientContext;
    SKUIITunesPassConfiguration *_configuration;
    UILabel *_descriptionLabel;
    UIView *_horizontalSeparatorView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
}




-(id)_attributedDescriptionString;
-(id)initWithITunesPassConfiguration:(id)arg0 clientContext:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif