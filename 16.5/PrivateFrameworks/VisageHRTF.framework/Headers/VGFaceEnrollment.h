// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGFACEENROLLMENT_H
#define VGFACEENROLLMENT_H

@class NSMutableDictionary, NSUserDefaults, NSString;
@protocol VGFaceDetectionDelegate;

#import <Foundation/Foundation.h>

#import "VGFaceDetection.h"

@interface VGFaceEnrollment : NSObject <VGFaceDetectionDelegate>

 {
    NSUInteger _state;
    VGFaceDetection *_faceDetection;
    NSMutableDictionary *_validImages;
    NSUInteger _lastReason;
    NSUserDefaults *_defaults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger failure;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger state;
@property (readonly) Class superclass;


-(BOOL)_validFaceObservation:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 ;
-(BOOL)_writeImageFileOnDisk;
-(NSUInteger)_currentStateToFetch;
-(NSUInteger)_orientationForFaceObservation:(id)arg0 ;
-(id)_croppedImageWithFaceObservation:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 ;
-(id)images;
-(id)init;
-(void)faceDetection:(id)arg0 faceObservation:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 ;
-(void)faceDetectionFailed:(id)arg0 reason:(NSUInteger)arg1 ;
-(void)processPixelBuffer:(struct __CVBuffer *)arg0 completion:(id)arg1 ;


@end


#endif