// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPLAYACTIVITYCENTER_H
#define ICPLAYACTIVITYCENTER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICPlayActivityCenter : NSObject {
    NSXPCConnection *_daemonPlayActivityControllerConnection;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




+(id)shared;
-(id)_daemonPlayActivityControllerConnection;
-(id)init;
-(void)dealloc;
-(void)flushPendingPlayActivityEventsWithCompletionHandler:(id)arg0 ;
-(void)recordPlayActivityEvents:(id)arg0 shouldFlush:(BOOL)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif