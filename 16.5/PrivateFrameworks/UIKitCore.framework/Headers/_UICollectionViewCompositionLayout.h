// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONVIEWCOMPOSITIONLAYOUT_H
#define _UICOLLECTIONVIEWCOMPOSITIONLAYOUT_H

@class NSMutableDictionary, NSArray;


#import "UICollectionViewLayout.h"

@interface _UICollectionViewCompositionLayout : UICollectionViewLayout {
    NSMutableDictionary *_sublayoutsDict;
}


@property (readonly, nonatomic) NSArray *sublayouts;


+(Class)invalidationContextClass;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg0 withOriginalAttributes:(id)arg1 ;
-(id)_originConvertedSublayoutAttributesForAttributes:(id)arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg0 withOriginalAttributes:(id)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGRect )_frameForLayout:(id)arg0 offset:(struct CGPoint )arg1 relativeToEdges:(NSUInteger)arg2 fromSiblingLayout:(id)arg3 ;
-(struct CGSize )collectionViewContentSize;
-(void)_prepareLayout:(id)arg0 ;
-(void)addSublayout:(id)arg0 forElementKinds:(id)arg1 ;
-(void)addSublayout:(id)arg0 forItems:(id)arg1 inSection:(NSInteger)arg2 offset:(struct CGPoint )arg3 relativeToEdges:(NSUInteger)arg4 fromSiblingLayout:(id)arg5 ;
-(void)addSublayout:(id)arg0 forRect:(struct CGRect )arg1 ;
-(void)addSublayout:(id)arg0 forSections:(id)arg1 offset:(struct CGPoint )arg2 relativeToEdges:(NSUInteger)arg3 fromSiblingLayout:(id)arg4 ;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareLayout;
-(void)removeSublayout:(id)arg0 ;


@end


#endif