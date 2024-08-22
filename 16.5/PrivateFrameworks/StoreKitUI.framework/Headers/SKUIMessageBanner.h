// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIMESSAGEBANNER_H
#define SKUIMESSAGEBANNER_H

@class UIView, UILabel, UIButton, NSAttributedString, NSString;
@protocol SKUIMessageBannerDelegate;



@interface SKUIMessageBanner : UIView {
    UILabel *_label;
    UIButton *_button;
    UIView *_borderView;
    UIButton *_clearButton;
}


@property (retain, nonatomic) NSAttributedString *attributedMessage; // ivar: _attributedMessage
@property (weak, nonatomic) NSObject<SKUIMessageBannerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *message;
@property (nonatomic) BOOL showsClearButton;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)value;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_clearButtonAction:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif