// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVLOADINGVIEW_H
#define _TVLOADINGVIEW_H

@class UIView, UIActivityIndicatorView;


#import "_TVImageView.h"

@interface _TVLoadingView : UIView

@property (readonly, weak, nonatomic) _TVImageView *backgroundImageView; // ivar: _backgroundImageView
@property (readonly, weak, nonatomic) UIView *labelContainer; // ivar: _labelContainer
@property (weak, nonatomic) UIView *loadingTitleLabel; // ivar: _loadingTitleLabel
@property (nonatomic) BOOL shouldShowSpinner; // ivar: _shouldShowSpinner
@property (readonly, weak, nonatomic) UIView *spinnerContainer; // ivar: _spinnerContainer
@property (readonly, weak, nonatomic) UIActivityIndicatorView *spinnerView; // ivar: _spinnerView


-(BOOL)canBecomeFocused;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_showSpinner;
-(void)layoutSubviews;


@end


#endif