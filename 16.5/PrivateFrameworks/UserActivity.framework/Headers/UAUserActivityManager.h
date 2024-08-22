// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UAUSERACTIVITYMANAGER_H
#define UAUSERACTIVITYMANAGER_H

@class NSXPCConnection, NSMutableSet, NSMapTable, NSUUID, NSString, NSSet;
@protocol UAUserActivityClientResponseProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UAUserActivityManager : NSObject <UAUserActivityClientResponseProtocol>

 {
    NSXPCConnection *_connection;
    BOOL _connectionInitializationSucceeded;
    BOOL _activityContinuationIsEnabled;
    BOOL _allowedToConnect;
    NSMutableSet *_userActivityUUIDsSendToServer;
    int _useractivitydpid;
}


@property (retain) NSMapTable *activeUserActivitiesByUUID; // ivar: _activeUserActivitiesByUUID
@property (copy) NSUUID *activeUserActivityUUID; // ivar: _activeUserActivityUUID
@property (readonly) BOOL activityContinuationIsEnabled;
@property BOOL allowedToConnect;
@property (readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL needToSendInitialMessage; // ivar: _needToSendInitialMessage
@property BOOL registeredForAppResignationMessages; // ivar: _registeredForAppResignationMessages
@property (readonly) NSObject<OS_dispatch_queue> *serverQ; // ivar: _serverQ
@property (readonly) Class superclass;
@property (readonly) BOOL supportsActivityContinuation; // ivar: _supportsActivityContinuation
@property (retain) NSMapTable *userActivitiesByUUID; // ivar: _userActivitiesByUUID
@property (readonly, copy) NSSet *userActivityUUIDsSendToServer;


+(BOOL)shouldSupportActivityContinuation;
+(BOOL)userActivityContinuationSupported;
+(id)_determineMatchingApplicationBundleIdentfierWithOptionsForActivityType:(id)arg0 dynamicType:(id)arg1 kind:(NSUInteger)arg2 teamIdentifier:(id)arg3 ;
+(id)defaultManager;
-(BOOL)currentUserActivityProxiesWithOptions:(id)arg0 predicate:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)currentUserActivityUUIDWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)determineIfUserActivityIsCurrent:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)hasUserActivityWithUUID:(id)arg0 ;
-(BOOL)initialServerHandshake:(BOOL)arg0 ;
-(BOOL)registerAsProxyForApplication:(int)arg0 options:(id)arg1 completionBlock:(id)arg2 ;
-(BOOL)userActivityIsActive:(id)arg0 ;
-(id)activeActivitiesByPriority;
-(id)activities;
-(id)createByDecodingUserActivity:(id)arg0 ;
-(id)encodeUserActivity:(id)arg0 ;
-(id)fetchUUID:(id)arg0 intervalToWaitForDocumentSynchonization:(CGFloat)arg1 withCompletionHandler:(id)arg2 ;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)userActivityForUUID:(id)arg0 ;
-(void)addDynamicUserActivity:(id)arg0 matching:(id)arg1 ;
-(void)addUserActivity:(id)arg0 ;
-(void)askClientUserActivityToSave:(id)arg0 ;
-(void)askClientUserActivityToSave:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)didReceiveInputStreamWithUUID:(id)arg0 inputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)makeActive:(id)arg0 ;
-(void)makeInactive:(id)arg0 ;
-(void)markUserActivityAsDirty:(id)arg0 forceImmediate:(BOOL)arg1 ;
-(void)pinUserActivity:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)registerForApplicationDeactivateIfNecessary;
-(void)removeDynamicUserActivity:(id)arg0 matching:(id)arg1 ;
-(void)removeUserActivity:(id)arg0 ;
-(void)sendCurrentActivityToIndexer:(id)arg0 ;
-(void)sendToIndexerIfAppropriate:(id)arg0 force:(BOOL)arg1 ;
-(void)sendUserActivityInfoToLSUserActivityd:(id)arg0 makeCurrent:(BOOL)arg1 ;
-(void)tellClientDebuggingEnabled:(BOOL)arg0 logFileHandle:(id)arg1 ;
-(void)tellClientUserActivityItWasResumed:(id)arg0 ;
-(void)tellDaemonAboutNewLSUserActivity:(id)arg0 ;
-(void)unregisterForApplicationDeactivation;


@end


#endif