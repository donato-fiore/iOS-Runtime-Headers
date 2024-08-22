// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDGLDATAARRAYBUFFER_H
#define TSDGLDATAARRAYBUFFER_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSString;
@protocol TSDGLDataBufferAccessor;

#import <Foundation/Foundation.h>


@interface TSDGLDataArrayBuffer : NSObject <TSDGLDataBufferAccessor>

 {
    NSMutableArray *_vertexAttributes;
    NSUInteger _vertexCount;
    NSUInteger _dataTypeSizeInBytes;
    unsigned int _bufferUsage;
    BOOL _usesMetalBuffer;
    *NSInteger _needsUpdateFirstIndex;
    *NSInteger _needsUpdateLastIndex;
    char * _gLData;
    BOOL _dataBufferHasBeenSetup;
    *unsigned int _gLDataBuffers;
    NSMutableDictionary *_attributeOffsetsDictionary;
    NSArray *_metalDataBuffers;
    NSUInteger _bufferIndex;
}


@property (readonly, nonatomic) NSUInteger bufferCount; // ivar: _bufferCount
@property (nonatomic) NSUInteger currentBufferIndex; // ivar: _currentBufferIndex
@property (readonly, nonatomic) NSUInteger dataBufferEntrySize; // ivar: _dataBufferEntrySize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasUpdatedData;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)p_bufferOffsetOfAttribute:(id)arg0 atIndex:(NSUInteger)arg1 component:(NSUInteger)arg2 ;
-(NSUInteger)vertexCount;
-(char *)dataPointer;
-(float)GLfloatForAttribute:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)initWithVertexAttributes:(id)arg0 vertexCount:(NSUInteger)arg1 bufferCount:(NSUInteger)arg2 ;
-(struct ? )GLPoint2DForAttribute:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(struct ? )GLPoint3DForAttribute:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(struct ? )GLPoint4DForAttribute:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)addAllIndexesNeedUpdate;
-(void)addIndexNeedsUpdate:(NSInteger)arg0 ;
-(void)addIndexRangeNeedsUpdate:(struct _NSRange )arg0 ;
-(void)dealloc;
-(void)disableVertexAttributeArrayBuffersWithShader:(id)arg0 ;
-(void)enableArrayBufferWithDevice:(id)arg0 ;
-(void)enableVertexAttributeArrayBuffersWithShader:(id)arg0 ;
-(void)encodeArrayBufferWithEncoder:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)p_setupGLDataBufferIfNecessary;
-(void)p_setupMetalDataBufferIfNecessaryWithDevice:(id)arg0 ;
-(void)setCGFloat:(CGFloat)arg0 forAttribute:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setGLPoint2D:(struct ? )arg0 forAttribute:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setGLPoint3D:(struct ? )arg0 forAttribute:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setGLPoint4D:(struct ? )arg0 forAttribute:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setGLfloat:(float)arg0 forAttribute:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)swapGPUDataBuffers;
-(void)updateDataBufferIfNecessary;


@end


#endif