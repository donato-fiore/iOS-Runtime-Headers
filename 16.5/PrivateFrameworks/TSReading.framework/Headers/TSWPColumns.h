// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPCOLUMNS_H
#define TSWPCOLUMNS_H


#import <Foundation/Foundation.h>


@interface TSWPColumns : NSObject {
    CGFloat _widthArray;
    CGFloat _gapArray;
}


@property (nonatomic) NSUInteger columnCount; // ivar: _columnCount
@property (nonatomic) BOOL equalWidth; // ivar: _equalWidth


+(id)columns;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)p_equalGapForEqualWidth:(CGFloat)arg0 ;
-(CGFloat)p_equalWidthForEqualGap:(CGFloat)arg0 ;
-(CGFloat)p_maxEqualGapForBodyWidth:(CGFloat)arg0 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 outWidth:(*CGFloat)arg2 outGap:(*CGFloat)arg3 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithColumnCount:(NSUInteger)arg0 ;
-(id)initWithColumnCount:(NSUInteger)arg0 equalWidth:(BOOL)arg1 widthArray:(*CGFloat)arg2 gapArray:(*CGFloat)arg3 ;
-(id)initWithEqualColumnCount:(NSUInteger)arg0 gapFraction:(CGFloat)arg1 ;
-(void)setGap:(CGFloat)arg0 forColumnIndex:(NSUInteger)arg1 bodyWidth:(CGFloat)arg2 ;
-(void)setWidth:(CGFloat)arg0 forColumnIndex:(NSUInteger)arg1 bodyWidth:(CGFloat)arg2 ;


@end


#endif