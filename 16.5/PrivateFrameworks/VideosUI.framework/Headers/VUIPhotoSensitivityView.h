// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPHOTOSENSITIVITYVIEW_H
#define VUIPHOTOSENSITIVITYVIEW_H

@class UIView, VUIImageView;


#import "VUITextLayout.h"
#import "VUILabel.h"
#import "VUIPhotoSensitivityViewLayout.h"

@interface VUIPhotoSensitivityView : UIView

@property (readonly, nonatomic) VUITextLayout *descriptionLayout; // ivar: _descriptionLayout
@property (retain, nonatomic) VUILabel *descriptionView; // ivar: _descriptionView
@property (retain, nonatomic) UIView *dividerView; // ivar: _dividerView
@property (retain, nonatomic) VUIPhotoSensitivityViewLayout *layout; // ivar: _layout
@property (retain, nonatomic) VUIImageView *logoImageView; // ivar: _logoImageView


-(BOOL)_isPortrait;
-(CGFloat)_descriptionWidth;
-(id)initWithPhotoSensitivityInfoDictionary:(id)arg0 ;
-(struct CGSize )_dividerSize;
-(struct CGSize )_logoSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_descriptionMargin;
-(struct UIEdgeInsets )_dividerMargin;
-(struct UIEdgeInsets )_logoMargin;
-(struct UIEdgeInsets )_margin;
-(void)_configureSubviewsWithDictionary:(id)arg0 ;
-(void)_hideAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_hideWithAnimationWithCompletion:(id)arg0 ;
-(void)_showAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_showWithAnimationWithCompletion:(id)arg0 ;
-(void)show:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif