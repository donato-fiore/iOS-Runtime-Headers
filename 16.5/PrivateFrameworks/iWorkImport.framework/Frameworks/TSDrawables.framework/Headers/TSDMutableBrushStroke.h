// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDMUTABLEBRUSHSTROKE_H
#define TSDMUTABLEBRUSHSTROKE_H

@class TSUColor;
@protocol TSDMutableStroke;


#import "TSDBrushStroke.h"
#import "TSDStrokePattern.h"

@interface TSDMutableBrushStroke : TSDBrushStroke <TSDMutableStroke>



@property (nonatomic) CGFloat actualWidth;
@property (nonatomic) int cap;
@property (copy, nonatomic) TSUColor *color;
@property (nonatomic) int join;
@property (nonatomic) CGFloat miterLimit;
@property (copy, nonatomic) TSDStrokePattern *pattern;
@property (nonatomic) CGFloat width;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setPropertiesFromStroke:(id)arg0 ;


@end


#endif