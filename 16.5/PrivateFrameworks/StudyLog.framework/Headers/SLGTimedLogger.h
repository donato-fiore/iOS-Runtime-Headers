// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLGTIMEDLOGGER_H
#define SLGTIMEDLOGGER_H

@class NSString;
@protocol SLGActivatableLogging, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SLGTimedLogger : NSObject <SLGActivatableLogging>

 {
    id<SLGActivatableLogging> *_logger;
    CGFloat _duration;
    NSObject<OS_dispatch_source> *_timer;
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) id *activationHandler;
@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) id *deactivationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEnabled;
-(id)initWithLogger:(id)arg0 duration:(CGFloat)arg1 ;
-(void)_startTimer;
-(void)_stopTimer;
-(void)invalidate;
// -(void)logBlock:(id)arg0 domain:(unk)arg1  ;
// -(void)logBlock:(id)arg0 domain:(unk)arg1 completion:(id)arg2  ;
// -(void)logBlock:(id)arg0 domain:(unk)arg1 tags:(id)arg2  ;
// -(void)logBlock:(id)arg0 domain:(unk)arg1 tags:(id)arg2 completion:(id)arg3  ;


@end


#endif