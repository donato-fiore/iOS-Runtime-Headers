// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3D2DDATABUFFER_H
#define TSCH3D2DDATABUFFER_H



#import "TSCH3DDataBuffer.h"

@interface TSCH3D2DDataBuffer : TSCH3DDataBuffer

@property (readonly, nonatomic) DataBuffer2DDimension dimension; // ivar: _dimension
@property (readonly, nonatomic) tvec3<int> size;


+(id)bufferWithCapacityDimension:(*void)arg0 ;
+(id)bufferWithCapacitySize:(*void)arg0 components:(NSUInteger)arg1 ;
-(BOOL)hasLevels;
-(NSUInteger)components;
-(id)initWithCapacityDimension:(*void)arg0 ;
-(struct DataBufferLevelData )dataAtLevel:(NSUInteger)arg0 ;


@end


#endif