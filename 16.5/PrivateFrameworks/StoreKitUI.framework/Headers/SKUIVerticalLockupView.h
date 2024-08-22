// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIVERTICALLOCKUPVIEW_H
#define SKUIVERTICALLOCKUPVIEW_H

@class NSHashTable, NSMapTable, UIView, NSString;
@protocol SKUIItemOfferButtonDelegate, SKUIPerspectiveView, SKUIViewElementView;


#import "SKUIViewReuseView.h"
#import "SKUILockupViewElement.h"
#import "SKUISizeValue.h"

@interface SKUIVerticalLockupView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIPerspectiveView, SKUIViewElementView>

 {
    NSHashTable *_artworkRelatedChildViewElementViews;
    UIEdgeInsets _contentInset;
    NSMapTable *_imageViewToImageResourceCacheKey;
    NSMapTable *_lineSpacings;
    SKUILockupViewElement *_lockupElement;
    CGFloat _productImageAdjustedWidth;
    SKUISizeValue *_productImageBoundingSize;
    UIView *_productImageView;
    CGAffineTransform _productImageViewOriginalTransform;
    NSMapTable *_topInsets;
    NSMapTable *_viewElementViews;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat opacityOfViewsOtherThanProductImageView; // ivar: _opacityOfViewsOtherThanProductImageView
@property (nonatomic) NSInteger sizingStyle; // ivar: _sizingStyle
@property (readonly) Class superclass;
@property (nonatomic) CGFloat zoomingImageAlpha; // ivar: _zoomingImageAlpha
@property (nonatomic) CGFloat zoomingImageWidth; // ivar: _zoomingImageWidth


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(CGFloat)_bottomInsetForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
+(CGFloat)_topInsetForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
+(CGFloat)maximumPerspectiveHeightForSize:(struct CGSize )arg0 ;
+(id)_attributedStringForButton:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForLabel:(id)arg0 context:(id)arg1 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_cancelConfirmationAction:(id)arg0 ;
-(void)_showConfirmationAction:(id)arg0 ;
-(void)dealloc;
-(void)itemOfferButtonWillAnimateTransition:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setPerspectiveTargetView:(id)arg0 ;
-(void)setVanishingPoint:(struct CGPoint )arg0 ;
-(void)updateForChangedDistanceFromVanishingPoint;


@end


#endif