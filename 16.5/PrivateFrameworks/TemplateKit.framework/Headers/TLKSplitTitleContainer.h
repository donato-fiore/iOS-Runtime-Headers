// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLKSPLITTITLECONTAINER_H
#define TLKSPLITTITLECONTAINER_H

@class UIView;


#import "TLKLabel.h"
#import "TLKStackView.h"

@interface TLKSplitTitleContainer : UIView

@property (retain, nonatomic) TLKLabel *centerLeadingTitleLabel; // ivar: _centerLeadingTitleLabel
@property (retain, nonatomic) TLKLabel *centerTrailingTitleLabel; // ivar: _centerTrailingTitleLabel
@property (retain, nonatomic) TLKLabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) TLKStackView *titleStackView; // ivar: _titleStackView
@property BOOL useLargeTitle; // ivar: _useLargeTitle


+(CGFloat)widthForString:(id)arg0 font:(id)arg1 ;
-(BOOL)titleLabelsFitInWidth:(CGFloat)arg0 pointSize:(CGFloat)arg1 ;
-(id)init;
-(id)titleFont;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif