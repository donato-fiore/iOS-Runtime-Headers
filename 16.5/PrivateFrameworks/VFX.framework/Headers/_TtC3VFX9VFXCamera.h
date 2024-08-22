// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC3VFX9VFXCAMERA_H
#define _TTC3VFX9VFXCAMERA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC3VFX9VFXCamera : NSObject {
    ? instance;
}


@property (nonatomic, readonly) float aperture;
@property (nonatomic, readonly) float exposure;
@property (nonatomic, readonly) float fStop;
@property (nonatomic, readonly) float fieldOfView;
@property ? filmOffset;
@property (nonatomic, readonly) float focalLength;
@property (nonatomic, readonly) float focusDistance;
@property (nonatomic) BOOL isOrthographic;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) ? orientation;
@property ? position;
@property (nonatomic) ? projection;
@property (nonatomic, readonly) char projectionDirection;
@property (nonatomic, readonly) BOOL reverseZ;
@property (nonatomic, readonly) float scale;
@property (nonatomic, readonly) float sensorSize;
@property (nonatomic, readonly) ? worldTransform;
@property (nonatomic, readonly) float zFar;
@property (nonatomic, readonly) float zNear;


-(BOOL)isEqual:(id)arg0 ;


@end


#endif