// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIPRESSANDHOLDVIEWCELL_H
#define TUIPRESSANDHOLDVIEWCELL_H

@class UICollectionViewCell, NSString, UILabel;



@interface TUIPressAndHoldViewCell : UICollectionViewCell

@property (copy, nonatomic) NSString *accentVariant; // ivar: _accentVariant
@property (nonatomic) NSUInteger accentVariantNumber; // ivar: _accentVariantNumber
@property (retain, nonatomic) UILabel *accentVariantNumberLabel; // ivar: _accentVariantNumberLabel
@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)updateColors;
-(void)updateLabels;


@end


#endif