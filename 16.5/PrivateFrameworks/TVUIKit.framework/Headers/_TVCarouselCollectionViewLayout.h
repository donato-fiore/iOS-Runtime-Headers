// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVCAROUSELCOLLECTIONVIEWLAYOUT_H
#define _TVCAROUSELCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, NSDictionary;



@interface _TVCarouselCollectionViewLayout : UICollectionViewLayout {
    NSDictionary *_layoutAttributesByIndexPath;
}


@property (nonatomic) CGSize itemSize; // ivar: _itemSize
@property (nonatomic) CGFloat minimumInteritemSpacing; // ivar: _minimumInteritemSpacing


-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(NSInteger)_expectedNumberOfCells;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)prepareLayout;


@end


#endif