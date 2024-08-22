// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSPOTLIGHTSYNCOPERATION_H
#define VCSPOTLIGHTSYNCOPERATION_H

@class NSSet, CSSearchableIndex, NSDictionary;
@protocol VCSpotlightSyncOperationDelegate, OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "VCSpotlightState.h"

@interface VCSpotlightSyncOperation : NSObject

@property (weak, nonatomic) NSObject<VCSpotlightSyncOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL fullResync; // ivar: _fullResync
@property (readonly, nonatomic) NSSet *identifiersToRemove; // ivar: _identifiersToRemove
@property (readonly, nonatomic) CSSearchableIndex *index; // ivar: _index
@property (readonly, nonatomic) NSDictionary *keyedReferences; // ivar: _keyedReferences
@property (readonly, nonatomic) VCSpotlightState *localState; // ivar: _localState
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSDictionary *searchableItemRegistry; // ivar: _searchableItemRegistry
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


+(void)_fillIdentifiersToRemove:(*id)arg0 searchableItemRegistry:(*id)arg1 withMaximumUpdatedItems:(NSInteger)arg2 references:(id)arg3 localState:(id)arg4 ;
-(id)init;
-(id)initWithModifiedReferences:(id)arg0 inserted:(id)arg1 removed:(id)arg2 spotlightIndex:(id)arg3 localState:(id)arg4 transaction:(id)arg5 ;
-(id)initWithReferences:(id)arg0 forceFullResync:(BOOL)arg1 spotlightIndex:(id)arg2 localState:(id)arg3 transaction:(id)arg4 ;
-(void)cleanupAndExitWithRequestToRelaunch:(BOOL)arg0 ;
-(void)clearLocalStateAndExit;
-(void)deleteSpotlightFileAndCleanup;
-(void)saveLocalState;
-(void)start;


@end


#endif