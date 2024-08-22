// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWAPPEVENTLISTENER_H
#define NWAPPEVENTLISTENER_H

@class RBSProcessMonitor;
@protocol NWAppStateEventListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NWAppEventListener : NSObject

@property (weak, nonatomic) NSObject<NWAppStateEventListenerDelegate> *appStateDelegate; // ivar: _appStateDelegate
@property (retain, nonatomic) RBSProcessMonitor *appStateMonitor; // ivar: _appStateMonitor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithQueue:(id)arg0 ;
-(void)_applicationStateMonitorInit;
-(void)cleanupAppStateMonitor;
-(void)dealloc;


@end


#endif