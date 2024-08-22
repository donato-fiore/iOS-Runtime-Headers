// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGFACEDETECTION_H
#define VGFACEDETECTION_H

@class VNDetectFaceRectanglesRequest, VNClassifyFaceAttributesRequest, VNDetectFaceCaptureQualityRequest, VNDetectFaceLandmarksRequest, VNFaceObservation, VNSequenceRequestHandler;
@protocol VGFaceDetectionDelegate;

#import <Foundation/Foundation.h>


@interface VGFaceDetection : NSObject {
    id<VGFaceDetectionDelegate> *_delegate;
    VNDetectFaceRectanglesRequest *_faceDetectionRequest;
    VNClassifyFaceAttributesRequest *_faceAttributesRequest;
    VNDetectFaceCaptureQualityRequest *_faceQualityRequest;
    VNDetectFaceLandmarksRequest *_faceLandmarksRequest;
    VNFaceObservation *_faceObservation;
    VNSequenceRequestHandler *_requestHandler;
}




-(BOOL)_isMouthOpen:(id)arg0 ;
-(NSInteger)_compareFaceObservations:(id)arg0 observation:(id)arg1 ;
-(id)faceAttributesRequest;
-(id)faceDetectionRequest;
-(id)faceLandmarksRequest;
-(id)faceQualityRequest;
-(id)initWithDelegate:(id)arg0 ;
-(void)_performFaceDetectionOnPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)_performFaceRequestsIfNeededOnPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)_updateEnrollementStatePixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)processPixelBuffer:(struct __CVBuffer *)arg0 ;


@end


#endif