// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGMLIMAGEIODATA_H
#define VGMLIMAGEIODATA_H

@protocol NSSecureCoding;


#import "VGMLIOData.h"

@interface VGMLImageIOData : VGMLIOData <NSSecureCoding>

 {
    *__CVBuffer _pixelBuffer;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCVPixelBufferRef:(struct __CVBuffer *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct __CVBuffer *)cvPixelBufferRef;
-(struct __CVBuffer *)resizeToWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif