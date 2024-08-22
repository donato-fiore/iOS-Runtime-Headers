// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WAXPCCONNECTION_H
#define WAXPCCONNECTION_H

@class NSXPCConnection, NSString;
@protocol WAXPCConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WAXPCConnection : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<WAXPCConnectionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSString *token; // ivar: _token


-(id)initWithXPCConnection:(id)arg0 ;
-(void)clearMessageStoreAndReply:(id)arg0 ;
-(void)clientConfigChangeDelegateSetForGroupType:(NSInteger)arg0 andReply:(id)arg1 ;
-(void)convertWiFiStatsIntoPercentile:(id)arg0 analysisGroup:(NSInteger)arg1 groupTarget:(id)arg2 andReply:(id)arg3 ;
-(void)establishConnectionWithToken:(id)arg0 andReply:(id)arg1 ;
-(void)getDeviceAnalyticsConfigurationAndReply:(id)arg0 ;
-(void)getDpsStatsandReply:(id)arg0 ;
-(void)getMessageForUUID:(id)arg0 andReply:(id)arg1 ;
-(void)getMessagesModelForGroupType:(NSInteger)arg0 andReply:(id)arg1 ;
-(void)getNewMessageForKey:(id)arg0 groupType:(NSInteger)arg1 andReply:(id)arg2 ;
-(void)getNewMessageForKey:(id)arg0 groupType:(NSInteger)arg1 withCopy:(id)arg2 andReply:(id)arg3 ;
-(void)getUsageStatsandReply:(id)arg0 ;
-(void)ingestMessage:(id)arg0 andReply:(id)arg1 ;
-(void)issueIOReportManagementCommand:(NSUInteger)arg0 andReply:(id)arg1 ;
-(void)killDaemonAndReply:(id)arg0 ;
-(void)lqmCrashTracerNotifyForInterfaceWithName:(id)arg0 andReply:(id)arg1 ;
-(void)lqmCrashTracerReceiveBlock:(id)arg0 forInterfaceWithName:(id)arg1 andReply:(id)arg2 ;
-(void)registerForQueryableMessageWithidentifierDict:(id)arg0 groupType:(NSInteger)arg1 andReply:(id)arg2 ;
-(void)registerMessageGroup:(NSInteger)arg0 andReply:(id)arg1 ;
-(void)sendMemoryPressureRequestAndReply:(id)arg0 ;
-(void)setDeviceAnalyticsConfiguration:(id)arg0 andReply:(id)arg1 ;
-(void)submitMessage:(id)arg0 groupType:(NSInteger)arg1 andReply:(id)arg2 ;
-(void)submitWiFiAnalyticsMessage:(id)arg0 andReply:(id)arg1 ;
-(void)summarizeDeviceAnalyticsForNetwork:(id)arg0 maxAgeInDays:(NSUInteger)arg1 andReply:(id)arg2 ;
-(void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg0 andReply:(id)arg1 ;
-(void)trigger11axPerfStudyAndReply:(id)arg0 ;
-(void)triggerDatapathDiagnosticsAndCollectUpdates:(NSInteger)arg0 waMessage:(id)arg1 andReply:(id)arg2 ;
-(void)triggerDeviceAnalyticsStoreMigrationAndReply:(id)arg0 ;
-(void)triggerQueryForNWActivity:(NSInteger)arg0 andReply:(id)arg1 ;


@end


#endif