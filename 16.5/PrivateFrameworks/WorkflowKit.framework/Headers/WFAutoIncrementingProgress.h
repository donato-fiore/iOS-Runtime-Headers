// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFAUTOINCREMENTINGPROGRESS_H
#define WFAUTOINCREMENTINGPROGRESS_H

@class NSProgress;
@protocol OS_dispatch_source;



@interface WFAutoIncrementingProgress : NSProgress

@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSUInteger increments; // ivar: _increments
@property (retain, nonatomic) NSObject<OS_dispatch_source> *progressTimer; // ivar: _progressTimer
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer


-(id)initWithParent:(id)arg0 pendingUnitCount:(NSUInteger)arg1 duration:(CGFloat)arg2 ;
-(void)cancel;
-(void)finish;
-(void)start;


@end


#endif