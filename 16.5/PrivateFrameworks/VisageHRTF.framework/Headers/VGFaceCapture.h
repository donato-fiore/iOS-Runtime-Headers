// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGFACECAPTURE_H
#define VGFACECAPTURE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VGFaceFittingFrameSelector.h"
#import "VGFaceCaptureOptions.h"
#import "VGFaceKitTracker.h"

@interface VGFaceCapture : NSObject {
    VGFaceFittingFrameSelector *_faceFrameSelector;
    VGFaceCaptureOptions *_options;
    BOOL _writeDebugFiles;
    VGFaceKitTracker *_faceTracker;
    BOOL _captureComplete;
}


@property (retain, nonatomic) NSString *rootPath; // ivar: _rootPath


-(BOOL)processWithCaptureData:(id)arg0 callback:(id)arg1 ;
-(BOOL)startFaceExpressionCapture:(NSUInteger)arg0 ;
-(id)currentState;
-(id)enrolledPoses;
-(id)initWithOptions:(id)arg0 ;


@end


#endif