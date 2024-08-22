// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIMETRICSFLUSHTIMER_H
#define SKUIMETRICSFLUSHTIMER_H

@class NSHashTable;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SKUIMetricsFlushTimer : NSObject {
    NSHashTable *_metricsControllers;
    NSObject<OS_dispatch_source> *_timer;
    NSUInteger _timerStartTime;
}




+(id)sharedTimer;
-(id)init;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)_cancelFlushTimer;
-(void)_performFlush;
-(void)addMetricsController:(id)arg0 ;
-(void)dealloc;
-(void)flushAllMetricsControllers;
-(void)reloadFlushInterval;
-(void)removeMetricsController:(id)arg0 ;


@end


#endif