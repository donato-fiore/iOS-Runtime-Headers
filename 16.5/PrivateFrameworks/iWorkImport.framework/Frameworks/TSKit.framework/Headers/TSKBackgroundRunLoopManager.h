// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKBACKGROUNDRUNLOOPMANAGER_H
#define TSKBACKGROUNDRUNLOOPMANAGER_H

@class NSHashTable;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSKRunLoopTicket.h"

@interface TSKBackgroundRunLoopManager : NSObject {
    NSObject<OS_dispatch_group> *_startingRunLoopGroup;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_requestSerializationQueue;
    NSHashTable *_activeTickets;
    TSKRunLoopTicket *_mainRunLoopTicket;
    TSKRunLoopTicket *_startingTicket;
}




+(id)sharedManager;
-(BOOL)isManagedRunLoop:(struct __CFRunLoop *)arg0 ;
-(id)initSingleton;
-(id)runLoopTicketForManagedRunLoop:(struct __CFRunLoop *)arg0 ;
-(id)runLoopTicketWithQualityOfService:(NSInteger)arg0 ;
-(struct __CFRunLoop *)runLoopForTicket:(id)arg0 ;
-(struct _opaque_pthread_t *)threadIdForTicket:(id)arg0 ;
-(void)startRunLoop;


@end


#endif