// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGFACECAPTUREDATA_H
#define VGFACECAPTUREDATA_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "VGFaceMetadata.h"

@interface VGFaceCaptureData : NSObject <NSCopying>



@property (nonatomic) *__CVBuffer depth; // ivar: _depth
@property (nonatomic) ? depthIntrinsics; // ivar: _depthIntrinsics
@property (retain, nonatomic) VGFaceMetadata *face; // ivar: _face
@property (nonatomic) ? timestamp; // ivar: _timestamp
@property (nonatomic) ? videoIntrinsics; // ivar: _videoIntrinsics
@property (nonatomic) *__CVBuffer yuvRectified; // ivar: _yuvRectified


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;
-(void)saveAtPath:(id)arg0 ;


@end


#endif