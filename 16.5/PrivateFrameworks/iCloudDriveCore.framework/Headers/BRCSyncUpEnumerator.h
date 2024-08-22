// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSYNCUPENUMERATOR_H
#define BRCSYNCUPENUMERATOR_H

@class NSEnumerator, NSMutableDictionary, NSMutableSet, NSMutableIndexSet, PQLResultSet<PQLEnumeration>, NSMutableArray;


#import "BRCClientZone.h"
#import "BRCLocalItem.h"

@interface BRCSyncUpEnumerator : NSEnumerator {
    unsigned int _maxDepth;
    unsigned int _should2PhasePCSChain;
    unsigned int _currentDepth;
    BRCClientZone *_clientZone;
    NSMutableDictionary *_visitedItemIDsToDepthMap;
    NSMutableSet *_itemIDsLostOrThrottled;
    NSMutableSet *_itemIDsNeedingOSUpgrade;
    NSMutableSet *_itemIDsNeedingDirectoryFetch;
    NSMutableDictionary *_tombstonesEmbargo;
    NSMutableIndexSet *_returned;
    PQLResultSet<PQLEnumeration> *_enumerator;
    NSMutableArray *_stack;
    NSMutableArray *_tooDeepItems;
    int _stage;
}


@property (readonly, nonatomic) unsigned int batchSize; // ivar: _batchSize
@property (readonly, nonatomic) NSMutableSet *chainedParentIDAllowlist; // ivar: _chainedParentIDAllowlist
@property (readonly, nonatomic) BRCLocalItem *itemNeedingPCSChaining; // ivar: _itemNeedingPCSChaining
@property (readonly, nonatomic) NSMutableArray *itemsNeedingUnshare; // ivar: _itemsNeedingUnshare
@property (readonly, nonatomic) NSUInteger retryAfter; // ivar: _retryAfter


-(BOOL)_checkForSharesWithinSharesWithItem:(id)arg0 ;
-(BOOL)_checkIfParentNeedsRevivalWithParentItem:(id)arg0 ;
-(BOOL)_checkIfShouldDedicateOpToPCSChainingItem:(id)arg0 ;
-(BOOL)_checkIfShouldDenylistForParentDirectoryFaultWithItem:(id)arg0 needsDirFaultCheck:(*BOOL)arg1 ;
-(BOOL)_checkIfShouldDenylistForPathMatch:(id)arg0 ;
-(BOOL)_denyListDescendantStackAndItemIfThrottledOrNeedsOSUpgrade:(id)arg0 now:(NSUInteger)arg1 ;
-(BOOL)_handlePendingShareItemWithPendingDeleteChildren:(id)arg0 ;
-(BOOL)_handleSharedItemWhichMovedToNewShare:(id)arg0 rootItem:(id)arg1 ;
-(BOOL)handleItemForOSUpgrade:(id)arg0 parentItemID:(id)arg1 ;
-(BOOL)isDenyListed:(id)arg0 ;
-(id)_documentsOrAliasesNeedingSyncUpEnumerator;
-(id)_liveDirectoriesNeedingSyncUpEnumerator;
-(id)_nextLiveItem;
-(id)_nextTombstone;
-(id)_tombstoneLeavesNeedingSyncUpEnumerator;
-(id)initWithClientZone:(id)arg0 ;
-(id)nextObject;
-(void)_denyListDescendantStack:(id)arg0 parentItem:(id)arg1 andAddToSet:(id)arg2 ;
-(void)_denyListDescendantStack:(id)arg0 parentItem:(id)arg1 andAddToSet:(id)arg2 descendantBlock:(id)arg3 ;
-(void)invalidate;


@end


#endif