// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKFRAMEPROVIDER_H
#define VKFRAMEPROVIDER_H

@class NSMutableArray, UIView;
@protocol NSLocking, VKFrameProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VKFrameProviderConfiguration.h"

@interface VKFrameProvider : NSObject <NSLocking>

 {
    os_unfair_lock_s _lock;
    id<VKFrameProviderDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableArray *_processors;
    VKFrameProviderConfiguration *_configuration;
    BOOL _delegateRespondsToStabilityChanges;
    BOOL _delegateRespondsToLuminosityChanges;
    NSUInteger _sceneStabilityState;
    CGFloat _sceneLuminosity;
    BOOL _processing;
    CGRect _regionOfInterest;
}


@property (readonly, nonatomic) VKFrameProviderConfiguration *configuration;
@property (readonly, weak, nonatomic) NSObject<VKFrameProviderDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) BOOL isProcessing;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) UIView *previewView; // ivar: _previewView
@property (nonatomic) CGRect regionOfInterest;


-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)lock;
-(void)registerProcessor:(id)arg0 ;
-(void)sendFrame:(id)arg0 ;
-(void)startProcessing;
-(void)startRunning;
-(void)stopProcessing;
-(void)stopRunning;
-(void)unlock;
-(void)unregisterProcessor:(id)arg0 ;


@end


#endif