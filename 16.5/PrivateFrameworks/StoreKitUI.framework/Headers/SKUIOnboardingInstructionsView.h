// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIONBOARDINGINSTRUCTIONSVIEW_H
#define SKUIONBOARDINGINSTRUCTIONSVIEW_H

@class UIView, NSMutableArray, UILabel;



@interface SKUIOnboardingInstructionsView : UIView {
    NSMutableArray *_labelsStack;
}


@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (nonatomic) NSInteger contentPosition; // ivar: _contentPosition
@property (readonly, nonatomic) UILabel *explanationLabel; // ivar: _explanationLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)explanationAttributedStringWithString:(id)arg0 ;
+(id)titleAttributedStringWithString:(id)arg0 ;
-(id)_newExplanationLabel;
-(id)_newTitleLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)popLabelState;
-(void)pushLabelState;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif