// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPCOLUMNS_H
#define TSWPCOLUMNS_H

@protocol TSSPropertyValueArchiving;

#import <Foundation/Foundation.h>


@interface TSWPColumns : NSObject <TSSPropertyValueArchiving>

 {
    CGFloat _widthArray;
    CGFloat _gapArray;
}


@property (readonly, nonatomic) NSUInteger columnCount; // ivar: _columnCount
@property (readonly, nonatomic) BOOL equalWidth; // ivar: _equalWidth


+(id)columns;
+(id)instanceWithArchive:(struct Message *)arg0 unarchiver:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)p_validate:(BOOL)arg0 ;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)p_equalGapForEqualWidth:(CGFloat)arg0 ;
-(CGFloat)p_equalWidthForEqualGap:(CGFloat)arg0 ;
-(CGFloat)p_maxEqualGapForBodyWidth:(CGFloat)arg0 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 outWidth:(*CGFloat)arg2 outGap:(*CGFloat)arg3 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(NSUInteger)hash;
-(id)copyWithColumnCount:(NSUInteger)arg0 ;
-(id)copyWithEqualWidth:(BOOL)arg0 ;
-(id)copyWithGap:(CGFloat)arg0 forColumnIndex:(NSUInteger)arg1 bodyWidth:(CGFloat)arg2 ;
-(id)copyWithWidth:(CGFloat)arg0 forColumnIndex:(NSUInteger)arg1 bodyWidth:(CGFloat)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithColumnCount:(NSUInteger)arg0 ;
-(id)initWithColumnCount:(NSUInteger)arg0 equalWidth:(BOOL)arg1 widthArray:(*CGFloat)arg2 gapArray:(*CGFloat)arg3 ;
-(id)initWithColumnCount:(NSUInteger)arg0 equalWidth:(BOOL)arg1 widthArray:(*CGFloat)arg2 gapArray:(*CGFloat)arg3 assert:(BOOL)arg4 ;
-(id)initWithEqualColumnCount:(NSUInteger)arg0 gapFraction:(CGFloat)arg1 ;
-(id)initWithEqualColumnCount:(NSUInteger)arg0 gapFraction:(CGFloat)arg1 assert:(BOOL)arg2 ;
-(id)p_description;
-(void)p_setGap:(CGFloat)arg0 forColumnIndex:(NSUInteger)arg1 bodyWidth:(CGFloat)arg2 ;
-(void)p_setWidth:(CGFloat)arg0 forColumnIndex:(NSUInteger)arg1 bodyWidth:(CGFloat)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif