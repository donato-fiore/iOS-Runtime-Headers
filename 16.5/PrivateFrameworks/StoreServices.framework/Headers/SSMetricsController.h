// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSMETRICSCONTROLLER_H
#define SSMETRICSCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"
#import "SSMetricsConfiguration.h"

@interface SSMetricsController : NSObject {
    SSXPCConnection *_connection;
    SSMetricsConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_flushSerialQueue;
    BOOL _flushOnForeground;
    id *_flushTimerBlock;
    NSObject<OS_dispatch_queue> *_flushTimerQueue;
}


@property (nonatomic, getter=isFlushTimerEnabled) BOOL flushTimerEnabled; // ivar: _flushTimerEnabled


-(BOOL)isDisabled;
-(id)_connection;
-(id)_cookieValuesForConfiguration:(id)arg0 ;
-(id)_userType;
-(id)_valueForField:(id)arg0 withFieldData:(id)arg1 ;
-(id)configuration;
-(id)init;
-(id)locationWithPosition:(NSInteger)arg0 type:(id)arg1 fieldData:(id)arg2 ;
-(id)pingURLs;
-(id)serialQueue;
-(void)_applicationWillEnterForeground;
-(void)_enumerateFieldValuesWithMap:(id)arg0 fieldData:(id)arg1 block:(id)arg2 ;
-(void)_flushUnreportedEventsIfEnabled;
-(void)_handleFlushTimer;
-(void)_serialQueueInsertEvents:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_setupFlushTimer;
-(void)dealloc;
-(void)flushUnreportedEventsWithCompletionHandler:(id)arg0 ;
-(void)insertEvent:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)insertEvents:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)recordAnalyticsForMetricsDialogEvent:(id)arg0 withTopic:(id)arg1 ;
-(void)setGlobalConfiguration:(id)arg0 ;
-(void)setPageConfiguration:(id)arg0 ;


@end


#endif