// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCNOTIFICATIONMANAGER_H
#define BRCNOTIFICATIONMANAGER_H

@class NSHashTable, NSMutableDictionary, BRNotificationQueue, NSMutableSet, NSMapTable, NSString;
@protocol BRCModule, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRCClientRanksPersistedState.h"
#import "BRCXPCClient.h"
#import "BRCAccountSessionFPFS.h"

@interface BRCNotificationManager : NSObject <BRCModule>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_pipes;
    NSMutableDictionary *_watchersByFileObjectID;
    BRCClientRanksPersistedState *_state;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    BRNotificationQueue *_notifs;
    NSMutableDictionary *_transferCache;
    BRCXPCClient *_client;
    NSMutableSet *_additionalUpdatesItemRowID;
    NSUInteger _previousMaxRank;
    NSMapTable *_fileObjectIDByWatcher;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly, nonatomic) BRCAccountSessionFPFS *session; // ivar: _session
@property (readonly) Class superclass;


-(BOOL)hasWatcherMatchingGlobalItemID:(id)arg0 ;
-(id)initWithAccountSession:(id)arg0 ;
-(id)pipeWithReceiver:(id)arg0 ;
-(void)_dispatchUpdatesToPipesWithRank:(NSUInteger)arg0 ;
-(void)_queueAdditionalUpdates;
-(void)cancel;
-(void)close;
-(void)fetchLastFlushedRankWithReply:(id)arg0 ;
-(void)flushUpdatesWithRank:(NSUInteger)arg0 ;
-(void)getPipeWithXPCReceiver:(id)arg0 client:(id)arg1 reply:(id)arg2 ;
-(void)invalidatePipeReceiversWatchingAppLibraryIDs:(id)arg0 completionBlock:(id)arg1 ;
-(void)invalidatePipesWatchingAppLibraryIDs:(id)arg0 ;
-(void)pipeDelegateInvalidated:(id)arg0 ;
-(void)queueUpdate:(id)arg0 ;
-(void)queueUpdateForItemAtRowID:(NSUInteger)arg0 ;
-(void)registerAppLibraries:(id)arg0 forFlags:(NSUInteger)arg1 ;
-(void)registerPipe:(id)arg0 asWatcherForFileObjectID:(id)arg1 ;
-(void)resume;
-(void)suspend;
-(void)unregisterAppLibraries:(id)arg0 forFlags:(NSUInteger)arg1 ;
-(void)unregisterPipeAsWatcher:(id)arg0 ;


@end


#endif