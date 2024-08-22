// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDSCALARPATHSOURCE_H
#define TSDSCALARPATHSOURCE_H

@protocol TSDMixing, TSDSmartPathSource;


#import "TSDPathSource.h"

@interface TSDScalarPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>



@property (readonly, nonatomic) CGFloat maxScalar;
@property (nonatomic) CGSize naturalSize; // ivar: mNaturalSize
@property (readonly) NSUInteger numberOfControlKnobs;
@property (nonatomic) CGFloat scalar; // ivar: mScalar
@property (nonatomic) int type; // ivar: mType


+(id)chevronWithScalar:(CGFloat)arg0 naturalSize:(struct CGSize )arg1 ;
+(id)pathSourceWithType:(int)arg0 scalar:(CGFloat)arg1 naturalSize:(struct CGSize )arg2 ;
+(id)rectangleWithNaturalSize:(struct CGSize )arg0 ;
+(id)regularPolygonWithScalar:(CGFloat)arg0 naturalSize:(struct CGSize )arg1 ;
+(id)roundedRectangleWithScalar:(CGFloat)arg0 naturalSize:(struct CGSize )arg1 ;
-(BOOL)isCircular;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRectangular;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(NSUInteger)hash;
-(id)bezierPathWithoutFlips;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getFeedbackStringForKnob:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithType:(int)arg0 scalar:(CGFloat)arg1 naturalSize:(struct CGSize )arg2 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)valueForSetSelector:(SEL)arg0 ;
-(struct CGPath *)newFeedbackPathForKnob:(NSUInteger)arg0 ;
-(struct CGPath *)p_newChevronPath;
-(struct CGPath *)p_newRegularPolygonPath;
-(struct CGPath *)p_newRoundedRectPath;
-(struct CGPoint )getControlKnobPosition:(NSUInteger)arg0 ;
-(struct CGPoint )p_getControlKnobPointForChevron;
-(struct CGPoint )p_getControlKnobPointForRegularPolygon;
-(struct CGPoint )p_getControlKnobPointForRoundedRect;
-(struct CGSize )scaleFactorForInscribedRectangle;
-(void)p_setControlKnobPointForChevron:(struct CGPoint )arg0 ;
-(void)p_setControlKnobPointForRegularPolygon:(struct CGPoint )arg0 ;
-(void)p_setControlKnobPointForRoundedRect:(struct CGPoint )arg0 ;
-(void)scaleToNaturalSize:(struct CGSize )arg0 ;
-(void)setControlKnobPosition:(NSUInteger)arg0 toPoint:(struct CGPoint )arg1 ;


@end


#endif