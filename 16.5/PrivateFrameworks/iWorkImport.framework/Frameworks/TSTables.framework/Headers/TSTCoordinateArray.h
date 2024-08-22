// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCOORDINATEARRAY_H
#define TSTCOORDINATEARRAY_H

@class NSMutableIndexSet;

#import <Foundation/Foundation.h>


@interface TSTCoordinateArray : NSObject {
    unsigned int _offset;
    unsigned int _count;
    *CGFloat _coordinates;
    CGFloat _average;
    NSMutableIndexSet *_visibleIndices;
    BOOL _layoutDirectionIsLeftToRight;
    CGFloat _tableWidth;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCount:(unsigned int)arg0 atOffset:(unsigned int)arg1 layoutDirectionIsLeftToRight:(BOOL)arg2 ;
-(void)dealloc;
-(void)setTableWidthForRightToLeft:(CGFloat)arg0 ;


@end


#endif