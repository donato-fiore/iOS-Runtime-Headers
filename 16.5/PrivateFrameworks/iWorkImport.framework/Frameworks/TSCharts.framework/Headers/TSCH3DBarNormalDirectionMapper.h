// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DBARNORMALDIRECTIONMAPPER_H
#define TSCH3DBARNORMALDIRECTIONMAPPER_H



#import "TSCH3DNormalDirectionMapper.h"

@interface TSCH3DBarNormalDirectionMapper : TSCH3DNormalDirectionMapper {
    NSInteger _wallOffset;
    NSInteger _crossSectionCount;
    NSInteger _spineCount;
    NSInteger _beginLimit;
    NSInteger _endLimit;
}




-(id)initWithWallOffset:(NSInteger)arg0 crossSectionCount:(NSInteger)arg1 spineCount:(NSInteger)arg2 beginLimit:(NSInteger)arg3 endLimit:(NSInteger)arg4 ;
-(void)mapFromVertexArray:(*void)arg0 normalArray:(*void)arg1 normalMatrix:(*void)arg2 numVertices:(NSInteger)arg3 destination:(*void)arg4 ;


@end


#endif