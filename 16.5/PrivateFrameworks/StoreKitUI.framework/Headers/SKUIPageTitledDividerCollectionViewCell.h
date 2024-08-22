// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPAGETITLEDDIVIDERCOLLECTIONVIEWCELL_H
#define SKUIPAGETITLEDDIVIDERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIButton, NSNumber, UILabel, UIView, NSString;
@protocol SKUIViewElementView;


#import "SKUIButtonViewElement.h"

@interface SKUIPageTitledDividerCollectionViewCell : UICollectionViewCell <SKUIViewElementView>

 {
    CGFloat _buttonContentHorizontalPadding;
    SKUIButtonViewElement *_buttonViewElement;
    UIEdgeInsets _contentEdgeInsets;
    UIEdgeInsets _contentInset;
    UIButton *_dividerButton;
    NSNumber *_dividerButtonImageRequestIdentifier;
    UILabel *_dividerLabel;
    UIEdgeInsets _imageVerticalPadding;
    UIEdgeInsets _internalHorizontalMargins;
    UIView *_leftLine;
    UIView *_rightLine;
    UIEdgeInsets _titleVerticalPadding;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *dividerTitle;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topEdgeInset; // ivar: _topEdgeInset


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(CGFloat)viewElementInsetDividerHeight:(id)arg0 ;
+(id)_attributedStringForButtonViewElement:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForDividerTitle:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForViewElementText:(id)arg0 style:(id)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 dividerTitle:(id)arg1 context:(id)arg2 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(struct UIEdgeInsets )_contentEdgeInsetsForViewElement:(id)arg0 ;
+(struct UIEdgeInsets )_imageVerticalPaddingForViewElement:(id)arg0 ;
+(struct UIEdgeInsets )_titleVerticalPaddingForViewElement:(id)arg0 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)_imageForImageViewElement:(id)arg0 returningRequestIdentifier:(*id)arg1 context:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setColoringWithColorScheme:(id)arg0 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif