// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKAVCAPTUREFRAME_H
#define VKAVCAPTUREFRAME_H



#import "VKFrame.h"

@interface VKAVCaptureFrame : VKFrame

@property (nonatomic) unsigned int orientation; // ivar: _orientation
@property (nonatomic) *opaqueCMSampleBuffer sampleBuffer; // ivar: _sampleBuffer


-(id)imageRequestHandler;
-(struct __CVBuffer *)CVImageBuffer;
-(void)dealloc;


@end


#endif