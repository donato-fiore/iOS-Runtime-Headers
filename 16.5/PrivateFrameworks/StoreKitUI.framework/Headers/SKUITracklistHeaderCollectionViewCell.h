// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITRACKLISTHEADERCOLLECTIONVIEWCELL_H
#define SKUITRACKLISTHEADERCOLLECTIONVIEWCELL_H

@class UIView, NSMutableDictionary, NSString;
@protocol SKUIViewElementView;


#import "SKUIViewReuseCollectionViewCell.h"
#import "SKUITracklistColumnData.h"

@interface SKUITracklistHeaderCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIViewElementView>

 {
    UIView *_bottomSeparatorView;
    SKUITracklistColumnData *_columnData;
    NSMutableDictionary *_columnViews;
    UIView *_topSeparatorView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_attributedStringForLabel:(id)arg0 context:(id)arg1 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeForHeaderTitleLabel:(id)arg0 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif