// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISTACKLISTCOLLECTIONVIEWCELL_H
#define SKUISTACKLISTCOLLECTIONVIEWCELL_H

@class NSString, NSMapTable;
@protocol SKUIViewElementView;


#import "SKUIViewReuseCollectionViewCell.h"

@interface SKUIStackListCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIViewElementView>



@property (nonatomic) NSUInteger alignment; // ivar: _alignment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *listViews; // ivar: _listViews
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)_isRightAligned;
-(BOOL)layoutSubviewsWithFixedWidth:(struct CGRect )arg0 size:(struct CGSize *)arg1 ;
-(BOOL)layoutSubviewsWithFlowLayout:(struct CGRect )arg0 size:(struct CGSize *)arg1 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;


@end


#endif