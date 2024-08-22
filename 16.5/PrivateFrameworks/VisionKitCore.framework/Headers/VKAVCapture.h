// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKAVCAPTURE_H
#define VKAVCAPTURE_H

@class AVCaptureSession, AVCaptureConnection, AVCaptureDevice, AVCapturePhotoOutput, AVCaptureVideoDataOutput, NSString;
@protocol VKZoomable, OS_dispatch_queue, VKAVCaptureDelegate;

#import <Foundation/Foundation.h>


@interface VKAVCapture : NSObject <VKZoomable>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<VKAVCaptureDelegate> *_delegate;
    AVCaptureSession *_session;
    AVCaptureConnection *_connection;
    AVCaptureDevice *_device;
    AVCapturePhotoOutput *_photoOutput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    NSUInteger _preparationState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maxZoomFactor;
@property (readonly, nonatomic) CGFloat minZoomFactor;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat zoomFactor;


-(id)init;
-(void)_sessionRuntimeError:(id)arg0 ;
-(void)dealloc;


@end


#endif