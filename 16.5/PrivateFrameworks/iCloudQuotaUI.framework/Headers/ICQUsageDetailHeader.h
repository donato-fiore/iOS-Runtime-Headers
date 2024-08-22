// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUSAGEDETAILHEADER_H
#define ICQUSAGEDETAILHEADER_H

@class UIView, UILabel, UIImageView, UIStackView, NSLayoutConstraint;



@interface ICQUsageDetailHeader : UIView {
    UILabel *_nameLabel;
    UILabel *_versionLabel;
    UILabel *_sizeLabel;
    UIImageView *_appIcon;
    UIStackView *_horizontalStack;
    UIStackView *_verticalStack;
    NSLayoutConstraint *_leadingMargin;
}




+(CGFloat)usageDetailHeaderHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setLabelTextAndIconWithSpecifier:(id)arg0 ;
-(void)setName:(id)arg0 ;


@end


#endif