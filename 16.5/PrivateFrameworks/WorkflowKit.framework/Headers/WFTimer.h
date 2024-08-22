// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTIMER_H
#define WFTIMER_H

@protocol WFTimerHandler, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFTimer : NSObject

@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, weak, nonatomic) NSObject<WFTimerHandler> *handler; // ivar: _handler
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // ivar: _timeoutTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // ivar: _timerQueue


-(BOOL)shouldHaveTimeout;
-(id)initWithHandler:(id)arg0 duration:(CGFloat)arg1 ;
-(void)cancel;
-(void)restart;
-(void)start;


@end


#endif