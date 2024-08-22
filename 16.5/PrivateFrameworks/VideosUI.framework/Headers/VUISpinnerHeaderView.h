// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUISPINNERHEADERVIEW_H
#define VUISPINNERHEADERVIEW_H

@class UIView, UIActivityIndicatorView, UILabel, PSSpecifier;
@protocol PSHeaderFooterView;



@interface VUISpinnerHeaderView : UIView <PSHeaderFooterView>

 {
    UIActivityIndicatorView *_spinner;
    UILabel *_text;
    PSSpecifier *_specifier;
}




-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)hideSpinner;
-(void)hideText;
-(void)layoutSubviews;
-(void)showSpinner;
-(void)showText;


@end


#endif