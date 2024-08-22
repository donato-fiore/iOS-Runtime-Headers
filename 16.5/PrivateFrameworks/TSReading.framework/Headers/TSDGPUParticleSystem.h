// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDGPUPARTICLESYSTEM_H
#define TSDGPUPARTICLESYSTEM_H

@class NSMutableSet, NSArray, NSString;
@protocol TSDMTLParticleSystem, MTLTexture;

#import <Foundation/Foundation.h>

#import "TSDGPUDataBufferAttribute.h"
#import "TSDGPUDataBuffer.h"
#import "TSDMetalContext.h"

@interface TSDGPUParticleSystem : NSObject <TSDMTLParticleSystem>

 {
    *BOOL _visibilities;
    BOOL _isInitialized;
    BOOL _isDataBufferInitialized;
    NSUInteger _textureCount;
    BOOL _hasParticleTexture;
    NSMutableSet *_attributesInShader;
}


@property (readonly, nonatomic) TSDGPUDataBufferAttribute *centerAttribute; // ivar: _centerAttribute
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *colorAttribute; // ivar: _colorAttribute
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *colorTexCoordAttribute; // ivar: _colorTexCoordAttribute
@property (readonly, nonatomic) TSDGPUDataBuffer *dataBuffer; // ivar: _dataBuffer
@property (readonly, nonatomic) NSArray *dataBufferAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger direction; // ivar: _direction
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *lifeSpanAttribute; // ivar: _lifeSpanAttribute
@property (readonly, nonatomic) TSDMetalContext *metalContext; // ivar: _metalContext
@property (readonly, nonatomic) CGSize objectSize; // ivar: _objectSize
@property (readonly, nonatomic) NSUInteger particleCount; // ivar: _particleCount
@property (readonly, nonatomic) CGSize particleSize; // ivar: _particleSize
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *particleTexCoordAttribute; // ivar: _particleTexCoordAttribute
@property (readonly, nonatomic) NSUInteger particlesHigh; // ivar: _particlesHigh
@property (readonly, nonatomic) NSUInteger particlesWide; // ivar: _particlesWide
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *positionAttribute; // ivar: _positionAttribute
@property (readonly, nonatomic) id *randomGenerator; // ivar: _randomGenerator
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *rotationAttribute; // ivar: _rotationAttribute
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *scaleAttribute; // ivar: _scaleAttribute
@property (readonly, nonatomic) BOOL shouldDraw; // ivar: _shouldDraw
@property (readonly, nonatomic) CGSize slideSize; // ivar: _slideSize
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *speedAttribute; // ivar: _speedAttribute
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *texCoordAttribute; // ivar: _texCoordAttribute
@property (readonly, nonatomic) NSObject<MTLTexture> *vertexColorTexture; // ivar: _vertexColorTexture
@property (readonly, nonatomic) CGSize vertexTextureSize; // ivar: _vertexTextureSize
@property (readonly, nonatomic) NSUInteger visibleParticleCount; // ivar: _visibleParticleCount


+(BOOL)willOverrideColorTexCoords;
+(BOOL)willOverrideColors;
+(BOOL)willOverrideGeometry;
+(BOOL)willOverrideStartingPoints;
+(BOOL)willOverrideVisibilities;
+(NSUInteger)numberOfVerticesPerParticle;
+(id)newDataBufferAttributeWithName:(id)arg0 ;
+(id)newParticleSystemWithNumberOfParticles:(NSUInteger)arg0 objectSize:(struct CGSize )arg1 slideSize:(struct CGSize )arg2 duration:(CGFloat)arg3 direction:(NSUInteger)arg4 randomGenerator:(id)arg5 shader:(id)arg6 metalContext:(id)arg7 ;
+(id)newParticleSystemWithParticleSize:(struct CGSize )arg0 particleSystemSize:(struct CGSize )arg1 objectSize:(struct CGSize )arg2 slideSize:(struct CGSize )arg3 duration:(CGFloat)arg4 direction:(NSUInteger)arg5 randomGenerator:(id)arg6 shader:(id)arg7 metalContext:(id)arg8 ;
+(struct CGSize )p_particleSystemSizeWithRequestedNumber:(NSUInteger)arg0 objectSize:(struct CGSize )arg1 ;
-(BOOL)visibilityAtIndexPoint:(struct CGPoint )arg0 ;
-(CGFloat)rotationMax;
-(CGFloat)scaleAtIndexPoint:(struct CGPoint )arg0 ;
-(CGFloat)speedMax;
-(NSUInteger)indexFromPoint:(struct CGPoint )arg0 ;
-(id)initWithParticleSize:(struct CGSize )arg0 particleSystemSize:(struct CGSize )arg1 objectSize:(struct CGSize )arg2 slideSize:(struct CGSize )arg3 duration:(CGFloat)arg4 direction:(NSUInteger)arg5 randomGenerator:(id)arg6 shader:(id)arg7 metalContext:(id)arg8 ;
-(struct ? )centerAtIndexPoint:(struct CGPoint )arg0 ;
-(struct ? )colorAtIndexPoint:(struct CGPoint )arg0 ;
-(struct ? )colorTexCoordAtIndexPoint:(struct CGPoint )arg0 ;
-(struct ? )lifeSpanAtIndexPoint:(struct CGPoint )arg0 ;
-(struct ? )rotationAtIndexPoint:(struct CGPoint )arg0 ;
-(struct ? )speedAtIndexPoint:(struct CGPoint )arg0 ;
-(struct ? )vertexPositionAtVertexIndex:(NSUInteger)arg0 particleIndexPoint:(struct CGPoint )arg1 ;
-(struct CGContext *)newContextFromTexture:(id)arg0 ;
-(struct CGPoint )indexPointFromIndex:(NSUInteger)arg0 ;
-(struct CGPoint )startingPointAtIndexPoint:(struct CGPoint )arg0 ;
-(struct CGSize )p_resizeSystemToFitWithinMaxVerticesWithSystemSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)drawMetalWithEncoder:(id)arg0 ;
-(void)p_logParticleInformation;
-(void)p_reverseParticleDataDrawOrder;
-(void)p_setupDataBufferWithParticleCount:(NSUInteger)arg0 visibleParticleCount:(NSUInteger)arg1 ;
-(void)p_setupParticleDataWithTexture:(id)arg0 ;
-(void)p_setupParticleSystemWithParticleSize:(struct CGSize )arg0 particleSystemSize:(struct CGSize )arg1 objectSize:(struct CGSize )arg2 slideSize:(struct CGSize )arg3 duration:(CGFloat)arg4 direction:(NSUInteger)arg5 randomGenerator:(id)arg6 ;
-(void)p_setupParticleTextureDataWithTexture:(id)arg0 capabilities:(id)arg1 ;
-(void)p_setupVertexData;
-(void)setupMetalWithShader:(id)arg0 ;
-(void)setupWithTexture:(id)arg0 particleTextureSize:(struct CGSize )arg1 reverseDrawOrder:(BOOL)arg2 ;
-(void)setupWithTexture:(id)arg0 particleTextureSize:(struct CGSize )arg1 reverseDrawOrder:(BOOL)arg2 capabilities:(id)arg3 ;


@end


#endif