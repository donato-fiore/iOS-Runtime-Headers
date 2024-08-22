// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTEXTUALACTIONSPOTLIGHTSYNCSERVICE_H
#define WFCONTEXTUALACTIONSPOTLIGHTSYNCSERVICE_H

@class BPSSink, CSSearchableIndex;
@protocol WFDatabaseObjectObserver, OS_os_activity, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCDaemonDatabaseProvider.h"
#import "VCDaemonXPCEventHandler.h"

@interface WFContextualActionSpotlightSyncService : NSObject <WFDatabaseObjectObserver>



@property (readonly, nonatomic) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (retain, nonatomic) VCDaemonDatabaseProvider *databaseProvider; // ivar: _databaseProvider
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // ivar: _eventHandler
@property (readonly, nonatomic) BPSSink *focusModeSink; // ivar: _focusModeSink
@property (readonly, nonatomic) CSSearchableIndex *index; // ivar: _index
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithEventHandler:(id)arg0 databaseProvider:(id)arg1 ;
-(void)databaseDidChange:(id)arg0 modified:(id)arg1 inserted:(id)arg2 removed:(id)arg3 ;
-(void)dealloc;
// -(void)queue_fetchWipeAndIndexActionsInDomainWithDescriptiveName:(id)arg0 identifier:(id)arg1 fetcher:(id)arg2 completionBlock:(unk)arg3  ;
-(void)queue_getAppShortcutContextualActionsWithCompletionHandler:(id)arg0 ;
-(void)queue_getFocusModeContextualActionsWithCompletionHandler:(id)arg0 ;
-(void)queue_getStaticContextualActionsWithCompletionHandler:(id)arg0 ;
-(void)queue_wipeIndexIfNotMigratedToNewDomainIdentifiersWithCompletionHandler:(id)arg0 ;
-(void)receiveAutoShortcutsUpdatedNotification:(id)arg0 ;
-(void)start;
-(void)subscribeToBiome;


@end


#endif