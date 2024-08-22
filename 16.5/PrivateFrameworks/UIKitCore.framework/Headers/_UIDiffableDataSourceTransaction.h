// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDIFFABLEDATASOURCETRANSACTION_H
#define _UIDIFFABLEDATASOURCETRANSACTION_H

@class NSArray, NSOrderedCollectionDifference;

#import <Foundation/Foundation.h>

#import "NSDiffableDataSourceSnapshot.h"

@interface _UIDiffableDataSourceTransaction : NSObject {
    NSArray *_reorderedItemIdentifiers;
    NSInteger _source;
}


@property (readonly, nonatomic) NSOrderedCollectionDifference *difference; // ivar: _difference
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *finalSnapshot; // ivar: _finalSnapshot
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *initialSnapshot; // ivar: _initialSnapshot
@property (readonly, nonatomic) NSArray *sectionTransactions; // ivar: _sectionTransactions


+(id)applyTransactionWithInitialSnapshot:(id)arg0 finalSnapshot:(id)arg1 difference:(id)arg2 sectionTransactions:(id)arg3 ;
+(id)reorderingTransactionWithInitialSnapshot:(id)arg0 finalSnapshot:(id)arg1 difference:(id)arg2 sectionTransactions:(id)arg3 ;
-(BOOL)isApplyTransaction;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReorderingTransaction;
-(NSInteger)finalGlobalIndexForInitialGlobalIndex:(NSInteger)arg0 ;
-(NSInteger)finalSectionCount;
-(NSInteger)finalSectionIndexForInitialSectionIndex:(NSInteger)arg0 ;
-(NSInteger)initialGlobalIndexForFinalGlobalIndex:(NSInteger)arg0 ;
-(NSInteger)initialSectionCount;
-(NSInteger)initialSectionIndexForFinalSectionIndex:(NSInteger)arg0 ;
-(NSInteger)source;
-(id)description;
-(id)finalDataSourceSnapshotter;
-(id)finalIndexPathForInitialIndexPath:(id)arg0 ;
-(id)finalIndexPathForSupplementaryElementOfKind:(id)arg0 forInitialIndexPath:(id)arg1 ;
-(id)initWithInitialSnapshot:(id)arg0 finalSnapshot:(id)arg1 source:(NSInteger)arg2 reorderedItemIdentifiers:(id)arg3 difference:(id)arg4 sectionTransactions:(id)arg5 ;
-(id)initialDataSourceSnapshotter;
-(id)initialIndexPathForFinalIndexPath:(id)arg0 ;
-(id)initialIndexPathForSupplementaryElementOfKind:(id)arg0 forFinalIndexPath:(id)arg1 ;
-(id)performDiffGeneratingUpdates;
-(id)reorderedItemIdentifiers;
-(struct _NSRange )finalSectionGlobalItemRangeForSection:(NSInteger)arg0 ;
-(struct _NSRange )initalSectionGlobalItemRangeForSection:(NSInteger)arg0 ;


@end


#endif