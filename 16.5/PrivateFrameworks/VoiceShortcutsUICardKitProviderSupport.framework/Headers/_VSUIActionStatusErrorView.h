// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _VSUIACTIONSTATUSERRORVIEW_H
#define _VSUIACTIONSTATUSERRORVIEW_H

@class UIView, UIImageView, UILabel;



@interface _VSUIActionStatusErrorView : UIView

@property (retain, nonatomic) UIView *errorIconBackgroundView; // ivar: _errorIconBackgroundView
@property (retain, nonatomic) UIImageView *errorIconView; // ivar: _errorIconView
@property (retain, nonatomic) UILabel *errorLabel; // ivar: _errorLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setUpViews;


@end


#endif