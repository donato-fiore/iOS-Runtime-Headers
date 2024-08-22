// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICOMPOSEREVIEWNICKNAMEVIEW_H
#define SKUICOMPOSEREVIEWNICKNAMEVIEW_H

@class UIView, UILabel, UITextField;


#import "SKUIGradientView.h"
#import "SKUIComposeReviewSampleCardView.h"

@interface SKUIComposeReviewNicknameView : UIView

@property (retain, nonatomic) UIView *nicknameBackgroundView; // ivar: _nicknameBackgroundView
@property (retain, nonatomic) UILabel *nicknameInfoLabel; // ivar: _nicknameInfoLabel
@property (retain, nonatomic) UILabel *nicknamePlaceholderLabel; // ivar: _nicknamePlaceholderLabel
@property (retain, nonatomic) UITextField *nicknameTextfield; // ivar: _nicknameTextfield
@property (retain, nonatomic) SKUIGradientView *sampleCardGradientView; // ivar: _sampleCardGradientView
@property (retain, nonatomic) SKUIComposeReviewSampleCardView *sampleCardView; // ivar: _sampleCardView
@property (retain, nonatomic) UILabel *titleView; // ivar: _titleView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupInfo;
-(void)_setupSampleCardView;
-(void)_setupTextField;
-(void)_setupTitle;
-(void)_setupView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif