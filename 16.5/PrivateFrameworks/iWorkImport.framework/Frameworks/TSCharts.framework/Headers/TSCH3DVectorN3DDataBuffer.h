// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DVECTORN3DDATABUFFER_H
#define TSCH3DVECTORN3DDATABUFFER_H



#import "TSCH3DDataBuffer.h"

@interface TSCH3DVectorN3DDataBuffer : TSCH3DDataBuffer {
    DataBuffer3DDimension _dimension;
    vector<unsigned char, std::allocator<unsigned char>> _container;
}


@property (readonly, nonatomic) *void container;


+(id)bufferWithCapacity3DDimension:(*void)arg0 ;
-(*void)data;
-(NSUInteger)componentByteSize;
-(NSUInteger)components;
-(NSUInteger)count;
-(id)initWithCapacity3DDimension:(*void)arg0 ;
-(int)componentType;
-(struct tvec3<int> )size;
-(void)fillCapacity;


@end


#endif