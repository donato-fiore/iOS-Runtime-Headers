// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLKLAYOUTUTILITIES_H
#define TLKLAYOUTUTILITIES_H


#import <Foundation/Foundation.h>


@interface TLKLayoutUtilities : NSObject



+(BOOL)isLTR;
+(BOOL)isSuperLargeAccessibilitySize;
+(BOOL)isWideScreen;
+(BOOL)widthIsCompact:(CGFloat)arg0 ;
+(CGFloat)ceilingValue:(CGFloat)arg0 inView:(id)arg1 ;
+(CGFloat)contentHeightOfTableView:(id)arg0 forWidth:(CGFloat)arg1 maxHeight:(CGFloat)arg2 ;
+(CGFloat)deviceScaledFlooredValue:(CGFloat)arg0 ;
+(CGFloat)deviceScaledRoundedValue:(CGFloat)arg0 ;
+(CGFloat)flooredValue:(CGFloat)arg0 inView:(id)arg1 ;
+(CGFloat)roundedValue:(CGFloat)arg0 inView:(id)arg1 ;
+(CGFloat)scaledValueForValue:(CGFloat)arg0 withFont:(id)arg1 ;
+(id)controlsInView:(id)arg0 ;
+(struct CGRect )deviceScaledRoundedRect:(struct CGRect )arg0 ;
+(struct CGSize )idealImageSizeWithSize:(struct CGSize )arg0 fittingSize:(struct CGSize )arg1 ;
+(struct CGSize )maxThumbnailSize;
+(struct CGSize )maxThumbnailSizeIsCompactWidth:(BOOL)arg0 ;
+(struct CGSize )minimumButtonSize;
+(struct UIEdgeInsets )deviceScaledRoundedInsets:(struct UIEdgeInsets )arg0 ;
+(void)applyMinimumSizeTouchInsetsForControlsInView:(id)arg0 ;
+(void)applyRowBoundedSizingToImageView:(id)arg0 isCompactWidth:(BOOL)arg1 ;
+(void)requireIntrinsicSizeForView:(id)arg0 ;
+(void)requireIntrinsicSizeForView:(id)arg0 withPriority:(float)arg1 ;
+(void)setDynamicBaselineAlignmentsForLabel:(id)arg0 top:(CGFloat)arg1 bottom:(CGFloat)arg2 ;


@end


#endif