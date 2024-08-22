// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTRIGGERREGISTRAR_H
#define WFTRIGGERREGISTRAR_H

@protocol WFDatabaseProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFBiomeListener.h"
#import "VCCoreDuetListener.h"
#import "VCDaemonXPCEventHandler.h"
#import "VCTriggerEventQueue.h"
#import "WFWorkflowRunCoordinator.h"
#import "WFTriggerNotificationScheduler.h"
#import "WFTriggerBootManager.h"

@interface WFTriggerRegistrar : NSObject

@property (readonly, nonatomic) WFBiomeListener *biomeListener; // ivar: _biomeListener
@property (readonly, nonatomic) VCCoreDuetListener *coreDuetListener; // ivar: _coreDuetListener
@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // ivar: _eventHandler
@property (readonly, nonatomic) VCTriggerEventQueue *eventQueue; // ivar: _eventQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) WFWorkflowRunCoordinator *runCoordinator; // ivar: _runCoordinator
@property (readonly, nonatomic) WFTriggerNotificationScheduler *scheduler; // ivar: _scheduler
@property (readonly, nonatomic) WFTriggerBootManager *triggerBootManager; // ivar: _triggerBootManager


-(NSInteger)triggerBackingForConfiguredTrigger:(id)arg0 ;
-(id)initWithDatabaseProvider:(id)arg0 eventHandler:(id)arg1 runCoordinator:(id)arg2 ;
-(id)unableToLoadDatabaseErrorWithUnderlyingError:(id)arg0 ;
-(void)dealloc;
-(void)deleteTriggerWithIdentifier:(id)arg0 allowedDeletionClasses:(id)arg1 completion:(id)arg2 ;
-(void)deleteTriggerWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deviceDidUnlockForFirstTime;
-(void)fireTriggerWithIdentifier:(id)arg0 force:(BOOL)arg1 eventInfo:(id)arg2 completion:(id)arg3 ;
-(void)getConfiguredTriggerDescriptionsWithCompletion:(id)arg0 ;
-(void)queue_registerConfiguredTrigger:(id)arg0 completion:(id)arg1 ;
-(void)queue_unregisterConfiguredTrigger:(id)arg0 ;
-(void)queue_unregisterConfiguredTriggerWithIdentifier:(id)arg0 triggerBacking:(NSInteger)arg1 ;
-(void)registerAllTriggersWithCompletion:(id)arg0 ;
-(void)registerTriggerWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeStalePendingNotifications;
-(void)timeChangeDidOccur;
-(void)timezoneChangeDidOccur;
-(void)unregisterAllTriggers;
-(void)unregisterTriggerWithIdentifier:(id)arg0 triggerBacking:(NSInteger)arg1 ;


@end


#endif