// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VFXEXTERNALDRAWCALL_H
#define VFXEXTERNALDRAWCALL_H


#import <Foundation/Foundation.h>


@interface VFXExternalDrawCall : NSObject {
    ? aabb;
    ? opaque;
    ? isDepthOnly;
    ? drawCallEncoder;
}


@property (nonatomic, readonly) id *encoder;
@property (nonatomic, readonly) BOOL hasCustomHandler;


-(BOOL)depthOnly;
-(BOOL)isOpaque;
-(id)boundingBoxMax;
-(id)boundingBoxMin;
-(id)init;


@end


#endif