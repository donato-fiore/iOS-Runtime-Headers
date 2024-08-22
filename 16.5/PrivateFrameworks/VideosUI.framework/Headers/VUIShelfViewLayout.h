// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUISHELFVIEWLAYOUT_H
#define VUISHELFVIEWLAYOUT_H

@class UICollectionViewLayout, NSArray;
@protocol VUIShelfViewLayoutDelegate;


#import "VUIShelfLayoutHelper.h"

@interface VUIShelfViewLayout : UICollectionViewLayout

@property (weak, nonatomic) NSObject<VUIShelfViewLayoutDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat headerBottomMargin; // ivar: _headerBottomMargin
@property (nonatomic) CGSize headerReferenceSize; // ivar: _headerReferenceSize
@property (nonatomic) CGFloat headerSelectionMargin; // ivar: _headerSelectionMargin
@property (nonatomic) CGSize itemSize; // ivar: _itemSize
@property (retain, nonatomic) VUIShelfLayoutHelper *layoutHelper; // ivar: _layoutHelper
@property (nonatomic) CGFloat minimumInteritemSpacing; // ivar: _minimumInteritemSpacing
@property (nonatomic) CGFloat minimumLineSpacing; // ivar: _minimumLineSpacing
@property (nonatomic) NSInteger prominentSectionIndex; // ivar: _prominentSectionIndex
@property (nonatomic) NSInteger rowCount; // ivar: _rowCount
@property (nonatomic) UIEdgeInsets sectionInset; // ivar: _sectionInset
@property (retain, nonatomic) NSArray *shelfLayoutSections; // ivar: _shelfLayoutSections
@property (nonatomic) BOOL shouldSnapContent; // ivar: _shouldSnapContent


+(CGFloat)defaultHeaderSelectionMargin;
-(BOOL)_bumpHeaderForLayoutSection:(id)arg0 forIndexPath:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(CGFloat)computedContentHeight;
-(NSInteger)computedRowCount;
-(id)_indexPathForItemAtProposedContentOffset:(struct CGPoint )arg0 ;
-(id)indexPathForSnappedContent;
-(id)init;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(struct CGRect )boundingSelectionFrameForFrame:(struct CGRect )arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareLayout;
-(void)snapContent;
-(void)snapContentToIndexPath:(id)arg0 ;


@end


#endif