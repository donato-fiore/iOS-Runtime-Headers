// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKTEXTFRAMEPROCESSOR_H
#define VKTEXTFRAMEPROCESSOR_H

@class NSMutableArray;


#import "VKFrameProcessor.h"
#import "VKTextFrameProcessorConfiguration.h"

@interface VKTextFrameProcessor : VKFrameProcessor {
    BOOL _wantsThrottling;
    VKTextFrameProcessorConfiguration *_config;
    ? _warpTransform;
    NSMutableArray *_recognizedItems;
    id *_resultHandler;
    VKTextFrameProcessorConfiguration *_currentConfig;
    NSUInteger _dataType;
}


@property (copy, nonatomic) VKTextFrameProcessorConfiguration *configuration;
@property (copy, nonatomic) id *resultHandler;


+(id)supportedRecognitionLanguages;
-(BOOL)wantsThrottling;
-(id)init;
-(void)applyHomographyWarpTransform:(struct ? )arg0 ;
-(void)processFrame:(id)arg0 ;
-(void)reset;
-(void)setWantsThrottling:(BOOL)arg0 ;


@end


#endif