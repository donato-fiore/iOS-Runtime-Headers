// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSTABLEHEADERFOOTERVIEW_H
#define VSTABLEHEADERFOOTERVIEW_H

@class UIView, UIStackView, UILabel;
@protocol VSTableHeaderFooterViewDelegate;


#import "VSFontCenter.h"

@interface VSTableHeaderFooterView : UIView

@property (retain, nonatomic) UIView *button; // ivar: _button
@property (weak, nonatomic) NSObject<VSTableHeaderFooterViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) VSFontCenter *fontCenter; // ivar: _fontCenter
@property (nonatomic) NSInteger kind; // ivar: _kind
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_didInvalidateIntrinsicContentSize;
-(void)dealloc;
-(void)invalidateIntrinsicContentSize;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setText:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif