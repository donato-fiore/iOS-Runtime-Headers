// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGFACEFITTINGFRAMESELECTOR_H
#define VGFACEFITTINGFRAMESELECTOR_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>

#import "VGFrameSelector.h"
#import "VGFaceCaptureOptions.h"

@interface VGFaceFittingFrameSelector : NSObject {
    VGFrameSelector *_yawSelector;
    VGFrameSelector *_pitchSelector;
    NSMutableDictionary *_expressionsSelector;
    BOOL _selectionCompleted;
    NSUInteger _frameCount;
    NSDictionary *_facekitSemantics;
    VGFaceCaptureOptions *_options;
}




-(BOOL)startFaceExpressionCapture:(NSUInteger)arg0 ;
-(float)_calculateFacePitchWithRotationMatrix:(*void)arg0 ;
-(float)_calculateFaceYawWithRotationMatrix:(*void)arg0 ;
-(id)addPoseWithCaptureData:(id)arg0 tracking:(id)arg1 externalTracking:(BOOL)arg2 ;
-(id)allPoseSelectors;
-(id)currentState;
-(id)enrolledPoses;
-(id)expressionSelectors;
-(id)finish;
-(id)finishAndWriteToPath:(id)arg0 ;
-(id)initWithOptions:(id)arg0 faceKitSemantics:(struct __CFDictionary *)arg1 ;
-(id)neutralSelectors;
-(id)posesFromSelectors:(id)arg0 ;


@end


#endif