// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGCAPTUREDATA_H
#define VGCAPTUREDATA_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VGFaceMetadata.h"
#import "VGSkeleton.h"

@interface VGCaptureData : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) *__CVBuffer depth; // ivar: _depth
@property (nonatomic) ? depthIntrinsics; // ivar: _depthIntrinsics
@property (retain, nonatomic) VGFaceMetadata *face; // ivar: _face
@property (retain, nonatomic) NSDictionary *faceTrackingResult; // ivar: _faceTrackingResult
@property (readonly, nonatomic) ? fixedDepthIntrinsics_rdar92226535;
@property (nonatomic) *__CVBuffer rgbRectified; // ivar: _rgbRectified
@property (retain, nonatomic) VGSkeleton *skeleton; // ivar: _skeleton
@property (nonatomic) ? timestamp; // ivar: _timestamp
@property (nonatomic) ? videoIntrinsics; // ivar: _videoIntrinsics
@property (nonatomic) *__CVBuffer yuvRectified; // ivar: _yuvRectified


+(BOOL)supportsSecureCoding;
+(id)_matrix33ToData:(struct ? )arg0 ;
+(struct ? )_dataToMatrix33:(id)arg0 ;
+(struct __CVBuffer *)_createColorFromYCbCr:(struct __CVBuffer *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getFaceCaptureData;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)saveAtPath:(id)arg0 ;


@end


#endif