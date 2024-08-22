// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DVEC4DATABUFFER_H
#define TSCH3DVEC4DATABUFFER_H



#import "TSCH3DFloatVectorDataBuffer.h"

@interface TSCH3Dvec4DataBuffer : TSCH3DFloatVectorDataBuffer {
    vector<glm::detail::tvec4<float>, std::allocator<glm::detail::tvec4<float>>> _container;
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