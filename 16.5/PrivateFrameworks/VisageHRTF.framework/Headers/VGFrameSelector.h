// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGFRAMESELECTOR_H
#define VGFRAMESELECTOR_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface VGFrameSelector : NSObject {
    vector<float, std::allocator<float>> _angles;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _angularVectors;
    vector<VGCapturedPose *, std::allocator<VGCapturedPose *>> _selectedPoses;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _viewDirVectors;
    vector<float, std::allocator<float>> _angularMinAlignments;
    vector<float, std::allocator<float>> _angularBestAlignments;
    vector<float, std::allocator<float>> _angularBestScores;
    NSInteger _motionType;
    int _frontPoseIdx;
    NSArray *_expressionFilters;
    NSArray *_frontExpressionFilters;
    BOOL _useSimpleSelector;
    float _simpleSelectorMinAlignment;
    float _simpleSelectorMaxAlignment;
}


@property (readonly, nonatomic) BOOL completed;
@property (readonly, nonatomic) NSUInteger remainingPosesCount; // ivar: _remainingPosesCount
@property (readonly, nonatomic) NSUInteger requiredPosesCount; // ivar: _requiredPosesCount
@property (readonly, nonatomic) NSDictionary *results;


+(id)invalidPose;
-(id)initForPosesCount:(NSUInteger)arg0 limit:(float)arg1 motionType:(NSInteger)arg2 expressionFilters:(id)arg3 ;
-(id)initForPosesCount:(NSUInteger)arg0 limit:(float)arg1 motionType:(NSInteger)arg2 expressionFilters:(id)arg3 options:(id)arg4 ;
-(id)processCaptureData:(id)arg0 trackingData:(id)arg1 framePose:(struct ? )arg2 ;
-(id)processViewDirInternal:(id)arg0 trackingData:(NSUInteger)arg1 frameTimestampMS:(id)arg2 selectorName;
-(id)processViewDirSimple:(NSUInteger)arg0 frameTimestampMS:(id)arg1 selectorName;
-(id)selectedValidPoses;


@end


#endif