// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUICANDIDATELAYOUT_H
#define TUICANDIDATELAYOUT_H

@class UICollectionViewLayout, NSMutableArray, NSMutableDictionary, NSIndexPath;
@protocol NSCopying;


#import "TUICandidateLayoutAttributes.h"

@interface TUICandidateLayout : UICollectionViewLayout <NSCopying>

 {
    NSMutableArray *_candidateAttributes;
    NSMutableDictionary *_dummyCandidateAttributes;
    NSMutableArray *_lineAttributes;
    NSMutableArray *_slottedCellSeparatorAttributes;
    NSMutableArray *_groupHeaderAttributes;
    TUICandidateLayoutAttributes *_customHeaderAttributes;
    BOOL _dirty;
}


@property (nonatomic) BOOL candidateNumberEnabled; // ivar: _candidateNumberEnabled
@property (nonatomic) NSUInteger columnsCount; // ivar: _columnsCount
@property (nonatomic) CGFloat customHeaderHeight; // ivar: _customHeaderHeight
@property (nonatomic) BOOL fillGridWithLines; // ivar: _fillGridWithLines
@property (nonatomic) CGPoint gridLineOffset; // ivar: _gridLineOffset
@property (nonatomic) UIEdgeInsets gridLinePadding; // ivar: _gridLinePadding
@property (nonatomic) UIEdgeInsets gridPadding; // ivar: _gridPadding
@property (nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (nonatomic) CGFloat minimumInterItemSpacing; // ivar: _minimumInterItemSpacing
@property (retain, nonatomic) NSIndexPath *oldFirstVisibleIndexPath; // ivar: _oldFirstVisibleIndexPath
@property (nonatomic) CGFloat oldFirstVisibleOffset; // ivar: _oldFirstVisibleOffset
@property (nonatomic) NSInteger rowType; // ivar: _rowType
@property (nonatomic) BOOL shouldJustifyRow; // ivar: _shouldJustifyRow
@property (nonatomic) BOOL showExtraLineBeforeFirstRow; // ivar: _showExtraLineBeforeFirstRow
@property (nonatomic) BOOL showsIndex; // ivar: _showsIndex
@property (nonatomic) CGFloat singleSlottedCellMargin; // ivar: _singleSlottedCellMargin
@property (nonatomic) NSInteger transitionState; // ivar: _transitionState


-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)keyForDummyCandidateIndexPath:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)clearLayoutAttributes;
-(void)invalidateLayout;
-(void)justify:(id)arg0 rowStartX:(CGFloat)arg1 maxWidth:(CGFloat)arg2 remainingWidth:(CGFloat)arg3 endOfSection:(BOOL)arg4 ;
-(void)layoutSlottedCandidates;
-(void)prepareLayout;
-(void)prepareLayoutForMultiRow;
-(void)prepareLayoutForSingleRow;
-(void)rotateAttributesBy90Degrees;


@end


#endif