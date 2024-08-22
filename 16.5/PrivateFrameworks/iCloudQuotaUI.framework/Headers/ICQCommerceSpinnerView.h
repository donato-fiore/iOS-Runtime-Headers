// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQCOMMERCESPINNERVIEW_H
#define ICQCOMMERCESPINNERVIEW_H

@class UIView, UIActivityIndicatorView, UILabel;



@interface ICQCommerceSpinnerView : UIView {
    UIActivityIndicatorView *_spinner;
    UILabel *_completeingPurchaseLabel;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif