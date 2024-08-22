// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSEVENTSHISTORYCONTROLLER_H
#define TPSEVENTSHISTORYCONTROLLER_H

@class NSMutableDictionary, NSDictionary, TPSTipStatusController;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TPSEventsHistoryController : NSObject

@property (retain, nonatomic) NSMutableDictionary *contextualEventIdentifierToContextualEventMap; // ivar: _contextualEventIdentifierToContextualEventMap
@property (copy, nonatomic) NSDictionary *contextualEventsForIdentifiers; // ivar: _contextualEventsForIdentifiers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // ivar: _eventQueue
@property (retain, nonatomic) TPSTipStatusController *tipStatusController; // ivar: _tipStatusController


+(void)removeEventHistoryCache;
-(id)_contextualEventForIdentifier:(id)arg0 ;
-(id)allContextualEvents;
-(id)contextualEventsBySourceMap;
-(id)contextualEventsForIdentifiers:(id)arg0 ;
-(id)debugDescription;
-(id)initWithTipStatusController:(id)arg0 ;
-(void)_addEvents:(id)arg0 contentIdentifier:(id)arg1 eventSinceDate:(id)arg2 minObservationCount:(NSUInteger)arg3 ;
-(void)_persistUserInfo:(id)arg0 forObserverIdentifiers:(id)arg1 ;
-(void)_setContextualEvent:(id)arg0 forIdentifier:(id)arg1 ;
-(void)addEventsFromTriggerEvents:(id)arg0 desiredOutcomeEvents:(id)arg1 contentIdentifier:(id)arg2 eventSinceDate:(id)arg3 ;
-(void)processEventProviderQueryResults:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeCacheData;
-(void)removeObserverIdentifiers:(id)arg0 ;
-(void)removeObserverIdentifiers:(id)arg0 fromEventIdentifiers:(id)arg1 ;
-(void)restartTrackingForEventIdentifiers:(id)arg0 date:(id)arg1 ;
-(void)updateCacheData;


@end


#endif