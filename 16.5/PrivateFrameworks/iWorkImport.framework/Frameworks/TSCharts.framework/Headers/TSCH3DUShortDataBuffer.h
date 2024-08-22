// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DUSHORTDATABUFFER_H
#define TSCH3DUSHORTDATABUFFER_H



#import "TSCH3DVectorDataBuffer.h"

@interface TSCH3DUShortDataBuffer : TSCH3DVectorDataBuffer {
    vector<TSCH3D::PODType<unsigned short>, std::allocator<TSCH3D::PODType<unsigned short>>> _container;
}


@property (readonly, nonatomic) *void container;


-(*void)data;
-(NSUInteger)componentByteSize;
-(NSUInteger)components;
-(NSUInteger)count;
-(id)elementsAtIndices:(id)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(int)componentType;
-(void)clear;
-(void)fillCapacity;


@end


#endif