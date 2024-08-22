// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSDEFERREDACTION_H
#define TPSDEFERREDACTION_H

@protocol TPSDeferredActionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TPSDeferredAction : NSObject

@property (weak, nonatomic) NSObject<TPSDeferredActionDelegate> *delegate; // ivar: _delegate
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL scheduled; // ivar: _scheduled


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)scheduleNextRunLoop;


@end


#endif