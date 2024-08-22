// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DVEC3DATABUFFER_H
#define TSCH3DVEC3DATABUFFER_H



#import "TSCH3DFloatVectorDataBuffer.h"

@interface TSCH3Dvec3DataBuffer : TSCH3DFloatVectorDataBuffer {
    vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> _container;
}


@property (readonly, nonatomic) *void container;


-(*void)data;
-(NSUInteger)componentByteSize;
-(NSUInteger)components;
-(NSUInteger)count;
-(id)elementsAtIndices:(id)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)clear;
-(void)fillCapacity;


@end


#endif