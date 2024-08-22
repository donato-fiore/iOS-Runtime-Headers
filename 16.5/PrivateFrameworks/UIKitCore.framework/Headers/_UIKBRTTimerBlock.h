// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKBRTTIMERBLOCK_H
#define _UIKBRTTIMERBLOCK_H

@class NSTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _UIKBRTTimerBlock : NSObject

@property (readonly, copy, nonatomic) id *onTimer; // ivar: _onTimer
@property (readonly, nonatomic) id *owner; // ivar: _owner
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *selfQueue; // ivar: _selfQueue
@property (readonly, nonatomic) NSTimer *timer; // ivar: _timer


// -(id)initWithTimeInterval:(CGFloat)arg0 onQueue:(id)arg1 do:(id)arg2 owner:(unk)arg3  ;
-(void)dealloc;
-(void)fireNow;
-(void)invalidate;
-(void)timerFired:(id)arg0 ;


@end


#endif