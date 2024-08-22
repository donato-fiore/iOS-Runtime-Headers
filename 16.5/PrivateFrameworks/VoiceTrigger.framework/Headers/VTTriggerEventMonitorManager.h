// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTTRIGGEREVENTMONITORMANAGER_H
#define VTTRIGGEREVENTMONITORMANAGER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VTTriggerEventMonitorManager : NSObject {
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedManager;
-(id)init;
-(void)addConnection:(id)arg0 ;
-(void)notifyEarlyDetect;
-(void)notifyVoiceTrigger;
-(void)removeConnection:(id)arg0 ;


@end


#endif