// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDTILINGBACKGROUNDQUEUE_H
#define TSDTILINGBACKGROUNDQUEUE_H

@protocol OS_dispatch_semaphore, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "TSKAccessController.h"

@interface TSDTilingBackgroundQueue : NSObject {
    NSObject<OS_dispatch_semaphore> *mCanEnqueueReaders;
    NSObject<OS_dispatch_group> *mInFlightReaders;
    os_unfair_lock_s mReaderSpinLock;
    NSUInteger mReaderCount;
    NSObject<OS_dispatch_semaphore> *mReadLockSignal;
    NSInteger mShutdownToken;
    TSKAccessController *mAccessController;
}


@property (getter=isShuttingDown) BOOL shuttingDown; // ivar: mShuttingDown


+(BOOL)isHoldingReadLockFromBackgroundQueue;
+(id)p_sharedLimitedQueue;
-(id)init;
-(id)initWithAccessController:(id)arg0 ;
-(void)dealloc;
-(void)drainAndPerformSync:(id)arg0 ;
-(void)p_readLock;
-(void)p_readUnlock;
-(void)performAsync:(id)arg0 ;
-(void)shutdown;


@end


#endif