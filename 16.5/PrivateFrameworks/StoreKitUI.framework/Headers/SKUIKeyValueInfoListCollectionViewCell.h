// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIKEYVALUEINFOLISTCOLLECTIONVIEWCELL_H
#define SKUIKEYVALUEINFOLISTCOLLECTIONVIEWCELL_H

@class NSMapTable, NSString;
@protocol SKUIViewElementView;


#import "SKUIViewReuseCollectionViewCell.h"
#import "SKUIAttributedStringView.h"

@interface SKUIKeyValueInfoListCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIViewElementView>

 {
    CGFloat _titleColumnWidth;
    SKUIAttributedStringView *_titleView;
    NSMapTable *_valueViews;
    NSMapTable *_imageViewToImageResourceCacheKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(CGFloat)titleColumnWidthWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
+(id)_attributedStringForButton:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForLabel:(id)arg0 context:(id)arg1 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_imageTapAction:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;


@end


#endif