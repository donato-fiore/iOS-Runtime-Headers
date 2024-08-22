// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCURVEDSHADOW_H
#define TSDCURVEDSHADOW_H



#import "TSDShadow.h"

@interface TSDCurvedShadow : TSDShadow

@property (readonly, nonatomic) CGFloat curve; // ivar: mCurve


+(id)curvedShadowWithOffset:(CGFloat)arg0 angle:(CGFloat)arg1 radius:(CGFloat)arg2 curve:(CGFloat)arg3 opacity:(CGFloat)arg4 color:(struct CGColor *)arg5 enabled:(BOOL)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)showForEditingText;
-(CGFloat)clampOffset:(CGFloat)arg0 ;
-(CGFloat)getVerticalOffset:(struct CGSize )arg0 ;
-(CGFloat)offsetFromCurve;
-(CGFloat)paddingForBlur;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(NSUInteger)shadowType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithOffset:(CGFloat)arg0 angle:(CGFloat)arg1 radius:(CGFloat)arg2 curve:(CGFloat)arg3 opacity:(CGFloat)arg4 color:(struct CGColor *)arg5 enabled:(BOOL)arg6 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newShadowClampedForSwatches;
-(struct CGImage *)newShadowImageForRep:(id)arg0 withSize:(struct CGSize )arg1 drawSelector:(SEL)arg2 unflipped:(BOOL)arg3 ;
-(struct CGPoint )boundsShiftForSize:(struct CGSize )arg0 ;
-(struct CGRect )boundsForRep:(id)arg0 ;
-(struct CGRect )boundsInNaturalSpaceForRep:(id)arg0 ;
-(struct CGRect )expandedBoundsForRect:(struct CGRect )arg0 ;
-(struct CGRect )shadowBoundsForRect:(struct CGRect )arg0 additionalTransform:(struct CGAffineTransform )arg1 ;


@end


#endif