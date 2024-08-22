// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIREDEEMRESULTMESSAGEVIEW_H
#define SKUIREDEEMRESULTMESSAGEVIEW_H

@class UIView, UILabel, NSString;



@interface SKUIRedeemResultMessageView : UIView {
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}


@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif