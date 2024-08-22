// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCALLOUTPATHSOURCE_H
#define TSDCALLOUTPATHSOURCE_H

@protocol TSDSmartPathSource, TSDMixing;


#import "TSDPathSource.h"

@interface TSDCalloutPathSource : TSDPathSource <TSDSmartPathSource, TSDMixing>

 {
    CGFloat mCornerRadius;
    CGFloat mTailSize;
    CGPoint mTailPosition;
    CGSize mNaturalSize;
    BOOL mIsTailAtCenter;
}


@property (nonatomic) CGFloat cornerRadius;
@property (readonly, nonatomic) BOOL isTailAtCenter;
@property (readonly, nonatomic) CGFloat maxCornerRadius;
@property (readonly, nonatomic) CGFloat maxTailSize;
@property (readonly) NSUInteger numberOfControlKnobs;
@property (readonly, nonatomic) CGPoint tailCenter;
@property (nonatomic) CGPoint tailKnobPosition;
@property (nonatomic) CGFloat tailSize;
@property (nonatomic) CGPoint tailSizeKnobPosition;


+(id)calloutWithCornerRadius:(CGFloat)arg0 tailPosition:(struct CGPoint )arg1 tailSize:(CGFloat)arg2 naturalSize:(struct CGSize )arg3 ;
+(id)quoteBubbleWithTailPosition:(struct CGPoint )arg0 tailSize:(CGFloat)arg1 naturalSize:(struct CGSize )arg2 ;
-(BOOL)isCircular;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isOval;
-(BOOL)isRectangular;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(NSUInteger)hash;
-(id)bezierPathWithoutFlips;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getFeedbackStringForKnob:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCornerRadius:(CGFloat)arg0 tailPosition:(struct CGPoint )arg1 tailSize:(CGFloat)arg2 naturalSize:(struct CGSize )arg3 tailAtCenter:(BOOL)arg4 ;
-(id)interiorWrapPath;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)p_basePath;
-(id)p_buildPath;
-(id)valueForSetSelector:(SEL)arg0 ;
-(struct CGPath *)newFeedbackPathForKnob:(NSUInteger)arg0 ;
-(struct CGPoint )getControlKnobPosition:(NSUInteger)arg0 ;
-(struct CGPoint )p_adjustedCenterForPath:(id)arg0 ;
-(struct CGPoint )p_getControlKnobPointForRoundedRect;
-(struct CGPoint )p_tailPosition;
-(struct CGSize )naturalSize;
-(void)p_getTailPath:(id)arg0 center:(struct CGPoint *)arg1 tailSize:(*CGFloat)arg2 intersections:(struct CGPoint )arg3 ;
-(void)p_setControlKnobPointForRoundedRect:(struct CGPoint )arg0 ;
-(void)p_setNaturalSize:(struct CGSize )arg0 ;
-(void)p_setTailAtCenter:(BOOL)arg0 ;
-(void)p_setTailPosition:(struct CGPoint )arg0 ;
-(void)scaleToNaturalSize:(struct CGSize )arg0 ;
-(void)setControlKnobPosition:(NSUInteger)arg0 toPoint:(struct CGPoint )arg1 ;
-(void)setNaturalSize:(struct CGSize )arg0 ;


@end


#endif