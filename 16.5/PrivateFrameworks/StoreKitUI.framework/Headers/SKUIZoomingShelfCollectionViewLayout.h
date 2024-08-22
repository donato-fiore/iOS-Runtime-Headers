// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIZOOMINGSHELFCOLLECTIONVIEWLAYOUT_H
#define SKUIZOOMINGSHELFCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, NSMutableDictionary, NSString;
@protocol SKUIHorizontalScrollingContainerMenuBarCollectionViewLayout, SKUIShelfCollectionViewLayout;


#import "SKUIShelfLayoutData.h"

@interface SKUIZoomingShelfCollectionViewLayout : UICollectionViewLayout <SKUIHorizontalScrollingContainerMenuBarCollectionViewLayout, SKUIShelfCollectionViewLayout>

 {
    CGSize _cachedCollectionViewContentSize;
    NSMutableDictionary *_cachedLayoutAttributes;
    BOOL _invalidateGeometryOnlyOfExistingLayoutAttributes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat focusedItemHorizontalCenterOffset; // ivar: _focusedItemHorizontalCenterOffset
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interItemSpacing; // ivar: _interItemSpacing
@property (nonatomic) CGFloat itemWidth; // ivar: _itemWidth
@property (retain, nonatomic) SKUIShelfLayoutData *layoutData; // ivar: _layoutData
@property (nonatomic) CGFloat scaledItemWidth; // ivar: _scaledItemWidth
@property (readonly) Class superclass;


+(BOOL)collectionViewCanClipToBounds;
+(CGFloat)snapToBoundariesDecelerationRate;
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)menuBarFocusedItemIndexPathWithTransitionProgress:(*CGFloat)arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareLayout;
-(void)setMenuBarFocusedItemIndexPath:(id)arg0 withTransitionProgress:(CGFloat)arg1 ;


@end


#endif