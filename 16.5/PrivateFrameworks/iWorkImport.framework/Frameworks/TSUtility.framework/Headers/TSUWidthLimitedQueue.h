// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUWIDTHLIMITEDQUEUE_H
#define TSUWIDTHLIMITEDQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSUWidthLimitedQueue : NSObject {
    int mReaderCount;
    int mLimit;
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
    os_unfair_lock_s mUnfairLock;
}


@property (readonly, nonatomic) NSUInteger limit;


-(id)init;
-(id)initWithLimit:(NSUInteger)arg0 ;
-(id)initWithLimit:(NSUInteger)arg0 name:(id)arg1 ;
-(void)performAsync:(id)arg0 ;
-(void)performSync:(id)arg0 ;


@end


#endif