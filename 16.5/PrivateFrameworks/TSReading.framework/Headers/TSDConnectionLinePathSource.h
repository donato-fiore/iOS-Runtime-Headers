// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCONNECTIONLINEPATHSOURCE_H
#define TSDCONNECTIONLINEPATHSOURCE_H

@protocol TSDSmartPathSource;


#import "TSDBezierPathSource.h"

@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource>



@property (readonly) NSUInteger numberOfControlKnobs;
@property (nonatomic) CGFloat outsetFrom; // ivar: mOutsetFrom
@property (nonatomic) CGFloat outsetTo; // ivar: mOutsetTo
@property (nonatomic) int type; // ivar: mType


+(id)pathSourceAtAngleOfSize:(struct CGSize )arg0 forType:(int)arg1 ;
+(id)pathSourceOfLength:(CGFloat)arg0 ;
-(BOOL)isCircular;
-(BOOL)isLineSegment;
-(BOOL)isRectangular;
-(NSInteger)pathElementIndexForKnobTag:(NSUInteger)arg0 ;
-(id)bezierPath;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getFeedbackStringForKnob:(NSUInteger)arg0 ;
-(id)initWithBezierPath:(id)arg0 ;
-(struct CGPath *)newFeedbackPathForKnob:(NSUInteger)arg0 ;
-(struct CGPoint )fixedPointForControlKnobChange;
-(struct CGPoint )getControlKnobPosition:(NSUInteger)arg0 ;
-(void)bend;
-(void)p_setBezierPath:(id)arg0 ;
-(void)scaleToNaturalSize:(struct CGSize )arg0 ;
-(void)setControlKnobPosition:(NSUInteger)arg0 toPoint:(struct CGPoint )arg1 ;


@end


#endif