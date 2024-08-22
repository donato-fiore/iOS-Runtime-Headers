// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DAREAGEOMETRY_H
#define TSCH3DAREAGEOMETRY_H



#import "TSCH3DGeometry.h"

@interface TSCH3DAreaGeometry : TSCH3DGeometry {
    vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> _topLine;
    vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> _bottomLine;
    unsigned int _capOffset;
    int _capCount;
}


@property (nonatomic) float maxZ; // ivar: _maxZ
@property (nonatomic) float minZ; // ivar: _minZ
@property (nonatomic) BOOL stacked; // ivar: _stacked
@property (nonatomic) float zeroValue; // ivar: _zeroValue


-(*void)bottomLine;
-(*void)topLine;
-(id)elementsBoundsPositions;
-(id)init;
-(id)selectionKnobPositions;
-(int)geometryCount;
-(struct tvec2<float> )bottomTopAtPosition:(float)arg0 ;
-(unsigned int)capCount;
-(unsigned int)capOffset;
-(void)generateArrays;
-(void)setTopLine:(*void)arg0 bottomLine:(*void)arg1 zeroValue:(float)arg2 ;


@end


#endif