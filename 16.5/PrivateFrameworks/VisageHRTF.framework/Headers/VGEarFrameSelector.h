// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGEARFRAMESELECTOR_H
#define VGEARFRAMESELECTOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "VGEarPoseDetector.h"
#import "VGFrameSelector.h"
#import "VGEarCaptureOptions.h"

@interface VGEarFrameSelector : NSObject {
    VGEarPoseDetector *_earPoseDetector;
    VGFrameSelector *_leftEarYawSelector;
    VGFrameSelector *_leftEarPitchSelector;
    VGFrameSelector *_rightEarYawSelector;
    VGFrameSelector *_rightEarPitchSelector;
    BOOL _selectionCompleted;
    NSUInteger _frameCount;
    NSUInteger _rightFrameCount;
    NSUInteger _leftFrameCount;
    VGEarCaptureOptions *_options;
    BOOL _hasPreviousLandmarks;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _previousLandmarksCoords;
    NSUInteger _previousFrameTimestampMS;
}


@property (readonly, nonatomic) NSMutableDictionary *leftEarEnrolledYawToBoundingBox; // ivar: _leftEarEnrolledYawToBoundingBox
@property (readonly, nonatomic) NSMutableDictionary *rightEarEnrolledYawToBoundingBox; // ivar: _rightEarEnrolledYawToBoundingBox


+(id)defaultModelsPath;
-(float)getMotionBlurScoreFromLandmarks:(struct vector<float, std::allocator<float>> )arg0 isEarDetected:(BOOL)arg1 frameTimestamp:(struct ? )arg2 ;
-(id)addPoseWithCaptureData:(id)arg0 ;
-(id)allPoseSelectors;
-(id)currentState;
-(id)enrolledPoses;
-(id)init;
-(id)initWithModelsPath:(id)arg0 ;
-(id)initWithModelsPath:(id)arg0 options:(id)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(id)leftEarEnrolledPoses;
-(id)posesFromSelectors:(id)arg0 ;
-(id)rightEarEnrolledPoses;
-(void)writeToPath:(id)arg0 ;


@end


#endif