// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDSTROKEPATTERN_H
#define TSDSTROKEPATTERN_H

@protocol NSCopying, TSDMixing;

#import <Foundation/Foundation.h>


@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing>

 {
    CGFloat _pattern;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) BOOL isDash;
@property (readonly, nonatomic) BOOL isRoundDash;
@property (readonly, nonatomic) *CGFloat pattern;
@property (readonly, nonatomic) NSInteger patternType; // ivar: _type
@property (readonly, nonatomic) CGFloat phase; // ivar: _phase


+(id)dashPatternWithSpacing:(CGFloat)arg0 ;
+(id)emptyPattern;
+(id)longDashPattern;
+(id)mediumDashPattern;
+(id)roundDashPattern;
+(id)roundDashPatternWithSpacing:(CGFloat)arg0 ;
+(id)shortDashPattern;
+(id)solidPattern;
+(id)strokePatternWithPattern:(*CGFloat)arg0 count:(NSUInteger)arg1 phase:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)p_renderableLengthForUnclippedPatternWithLineWidth:(CGFloat)arg0 withinAvailableLength:(CGFloat)arg1 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithPattern:(*CGFloat)arg0 count:(NSUInteger)arg1 phase:(CGFloat)arg2 ;
-(id)initWithPatternType:(NSInteger)arg0 pattern:(*CGFloat)arg1 count:(NSUInteger)arg2 phase:(CGFloat)arg3 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)p_typeString;
-(void)applyToContext:(struct CGContext *)arg0 lineWidth:(CGFloat)arg1 ;
-(void)i_applyToContext:(struct CGContext *)arg0 lineWidth:(CGFloat)arg1 capStyle:(*NSUInteger)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif