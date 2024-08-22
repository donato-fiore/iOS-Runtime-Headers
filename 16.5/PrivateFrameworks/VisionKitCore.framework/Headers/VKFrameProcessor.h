// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKFRAMEPROCESSOR_H
#define VKFRAMEPROCESSOR_H

@protocol NSLocking, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VKFrameProcessor : NSObject <NSLocking>

 {
    NSObject<OS_dispatch_queue> *_resultHandlerQueue;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _isExecuting;
    BOOL _isCancelled;
    BOOL _requestImmediateProcessing;
    CGFloat _processingInterval;
    CGFloat _infrequentProcessingInterval;
    CGFloat _lastProcessingTime;
    CGFloat _currentProcessingInterval;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isExecuting) BOOL executing;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;


+(CGFloat)defaultInfrequentProcessingInterval;
+(CGFloat)defaultProcessingInterval;
-(BOOL)wantsThrottling;
-(CGFloat)infrequentProcessingInterval;
-(CGFloat)processingInterval;
-(id)init;
-(void)cancel;
-(void)enqueueFrame:(id)arg0 ;
-(void)lock;
-(void)processFrame:(id)arg0 ;
-(void)requestImmediateProcessing;
-(void)reset;
-(void)setInfrequentProcessingInterval:(CGFloat)arg0 ;
-(void)setProcessingInterval:(CGFloat)arg0 ;
-(void)unlock;


@end


#endif