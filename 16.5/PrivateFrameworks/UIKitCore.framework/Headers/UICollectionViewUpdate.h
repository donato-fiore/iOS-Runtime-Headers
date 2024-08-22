// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICOLLECTIONVIEWUPDATE_H
#define UICOLLECTIONVIEWUPDATE_H

@class NSArray, NSMutableIndexSet, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSUUID;
@protocol _UICollectionViewUpdateTranslating;

#import <Foundation/Foundation.h>

#import "UICollectionViewData.h"
#import "_UICollectionViewFocusedItemState.h"
#import "UICollectionView.h"

@interface UICollectionViewUpdate : NSObject <_UICollectionViewUpdateTranslating>

 {
    NSArray *_updateItems;
    UICollectionViewData *_oldModel;
    UICollectionViewData *_newModel;
    CGRect _oldVisibleBounds;
    CGRect _newVisibleBounds;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
    NSMutableArray *_deletedSupplementaryIndexesSectionArray;
    NSMutableArray *_insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary *_deletedSupplementaryTopLevelIndexesDict;
    NSMutableDictionary *_insertedSupplementaryTopLevelIndexesDict;
    _UICollectionViewFocusedItemState *_oldFocusedItemState;
    _UICollectionViewFocusedItemState *_newFocusedItemState;
    UICollectionView *_collectionView;
    NSSet *_itemAnchoredAuxiliaryElementKinds;
    NSSet *_moveItemSourceIndexPaths;
    _UIDataSourceUpdateMaps _updateMaps;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *invalidUpdatesErrorMessage; // ivar: _invalidUpdatesErrorMessage
@property (readonly, nonatomic, getter=isLayoutPreparedForUpdates) BOOL layoutPreparedForUpdates;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL updatesAreInvalid;


-(BOOL)hasDeletedAuxiliaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)hasInsertedAuxiliaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)hasMovedItemAtOldIndexPath:(id)arg0 ;
-(NSInteger)finalGlobalIndexForInitialGlobalIndex:(NSInteger)arg0 ;
-(NSInteger)finalSectionCount;
-(NSInteger)finalSectionIndexForInitialSectionIndex:(NSInteger)arg0 ;
-(NSInteger)initialGlobalIndexForFinalGlobalIndex:(NSInteger)arg0 ;
-(NSInteger)initialSectionCount;
-(NSInteger)initialSectionIndexForFinalSectionIndex:(NSInteger)arg0 ;
-(id)finalIndexPathForInitialIndexPath:(id)arg0 ;
-(id)finalIndexPathForSupplementaryElementOfKind:(id)arg0 forInitialIndexPath:(id)arg1 ;
-(id)initWithCollectionView:(id)arg0 updateItems:(id)arg1 moveItemSourceIndexPaths:(id)arg2 oldModel:(id)arg3 newModel:(id)arg4 oldVisibleBounds:(struct CGRect )arg5 newVisibleBounds:(struct CGRect )arg6 ;
-(id)initialIndexPathForFinalIndexPath:(id)arg0 ;
-(id)initialIndexPathForSupplementaryElementOfKind:(id)arg0 forFinalIndexPath:(id)arg1 ;
-(id)newIndexPathForSupplementaryElementOfKind:(id)arg0 oldIndexPath:(id)arg1 ;
-(id)oldIndexPathForSupplementaryElementOfKind:(id)arg0 newIndexPath:(id)arg1 ;
-(id)validatedNewIndexPathForSupplementaryElementOfKind:(id)arg0 oldIndexPath:(id)arg1 ;
-(id)validatedOldIndexPathForSupplementaryElementOfKind:(id)arg0 newIndexPath:(id)arg1 ;
-(struct _NSRange )finalSectionGlobalItemRangeForSection:(NSInteger)arg0 ;
-(struct _NSRange )initalSectionGlobalItemRangeForSection:(NSInteger)arg0 ;
-(void)_computeAuxiliaryUpdates;
-(void)_generateUpdateMaps;
-(void)dealloc;


@end


#endif