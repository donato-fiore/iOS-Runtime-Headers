// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSPOTLIGHTSYNCSERVICE_H
#define VCSPOTLIGHTSYNCSERVICE_H

@class WFDebouncer, NSString, CSSearchableIndex, NSMutableSet, WFDatabaseResult;
@protocol WFDatabaseObjectObserver, VCSpotlightSyncOperationDelegate, WFDatabaseProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCDaemonXPCEventHandler.h"
#import "VCSpotlightSyncOperation.h"

@interface VCSpotlightSyncService : NSObject <WFDatabaseObjectObserver, VCSpotlightSyncOperationDelegate>



@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, nonatomic) WFDebouncer *debouncer; // ivar: _debouncer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // ivar: _eventHandler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CSSearchableIndex *index; // ivar: _index
@property (nonatomic) BOOL isFetchingClientState; // ivar: _isFetchingClientState
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableSet *queuedInserted; // ivar: _queuedInserted
@property (retain, nonatomic) NSMutableSet *queuedModified; // ivar: _queuedModified
@property (retain, nonatomic) NSMutableSet *queuedRemoved; // ivar: _queuedRemoved
@property (readonly) Class superclass;
@property (retain, nonatomic) VCSpotlightSyncOperation *syncOperation; // ivar: _syncOperation
@property (readonly, nonatomic) WFDatabaseResult *workflows; // ivar: _workflows


-(id)initWithDatabaseProvider:(id)arg0 eventHandler:(id)arg1 ;
-(void)databaseDidChange:(id)arg0 modified:(id)arg1 inserted:(id)arg2 removed:(id)arg3 ;
-(void)dealloc;
-(void)requestSync;
-(void)start;
-(void)sync;
-(void)syncOperationFinishedWithRequestToRelaunch:(BOOL)arg0 ;
-(void)syncWithModifiedObjects:(id)arg0 inserted:(id)arg1 removed:(id)arg2 ;


@end


#endif