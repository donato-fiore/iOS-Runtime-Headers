// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COUNTDOWN_H
#define COUNTDOWN_H

@class NSDate;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CountDown : NSObject {
    NSObject<OS_dispatch_source> *timer;
    unsigned int count;
}


@property (readonly, nonatomic) NSDate *startTime; // ivar: _startTime


-(id)init;
// -(void)goOffNext:(NSUInteger)arg0 fromTime:(id)arg1 forEpoch:(id)arg2 timesTotal:(NSUInteger)arg3 onQueue:(id)arg4 withIterationBlock:(id)arg5 completionBlock:(unk)arg6  ;
-(void)stop;


@end


#endif