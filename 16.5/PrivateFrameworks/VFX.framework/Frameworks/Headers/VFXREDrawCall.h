// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VFXREDRAWCALL_H
#define VFXREDRAWCALL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VFXREDrawCall : NSObject {
    ? drawCall;
    ? aabb;
    ? _isDepthOnly;
    ? reProvidedBuffers;
    ? reProvidedTextures;
    ? handler;
    ? renderPassName;
}


@property (nonatomic, readonly) id *customHandler;
@property (nonatomic, readonly) BOOL hasCustomHandler;
@property (nonatomic, readonly) BOOL isDepthOnly;
@property (nonatomic, copy) NSString *renderPassName;


-(BOOL)hasLightingEnabled;
-(NSInteger)indexBufferOffset;
-(NSInteger)indexBufferSize;
-(NSInteger)indexCount;
-(NSInteger)instanceCount;
-(NSInteger)vertexCount;
-(NSUInteger)materialIdentifier;
-(NSUInteger)primitiveType;
-(NSUInteger)winding;
-(id)boundingBoxMax;
-(id)boundingBoxMin;
-(id)indexBuffer;
-(id)init;
-(id)meshIdentifier;
-(unsigned char)indexType;
-(void)enumerateBuffers:(id)arg0 ;
-(void)enumerateTextures:(id)arg0 ;
-(void)withDefaultIBLConstantBuffer:(*void)arg0 ;
-(void)withDefaultLightConstantBuffer:(*void)arg0 ;


@end


#endif