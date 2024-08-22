// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUCOLOR_H
#define TSUCOLOR_H

@class UIColor, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TSUColor.h"

@interface TSUColor : NSObject <NSCopying, NSSecureCoding>

 {
    *CGColor mCGColor;
}


@property (readonly) *CGColor CGColor;
@property (readonly, nonatomic) UIColor *UIColor;
@property (readonly, nonatomic) CGFloat alphaComponent;
@property (readonly, nonatomic) CGFloat blueComponent;
@property (readonly, nonatomic) NSUInteger colorRGBSpace; // ivar: mColorRGBSpace
@property (readonly, nonatomic) TSUColor *grayscaleColor;
@property (readonly, nonatomic) CGFloat greenComponent;
@property (readonly, nonatomic) NSString *hexString;
@property (readonly, nonatomic) TSUColor *invertedColor;
@property (readonly, nonatomic) BOOL isClear;
@property (readonly, nonatomic) BOOL isNearlyWhite;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) CGFloat luminance;
@property (readonly, nonatomic) UIColor *platformColor;
@property (readonly, nonatomic) CGFloat redComponent;
@property (readonly, nonatomic) CGFloat relativeLuminance;


+(BOOL)supportsSecureCoding;
+(id)blackColor;
+(id)blueColor;
+(id)brownColor;
+(id)clearColor;
+(id)colorWithCGColor:(struct CGColor *)arg0 ;
+(id)colorWithHexString:(id)arg0 ;
+(id)colorWithHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 alpha:(CGFloat)arg3 targetRGBSpace:(NSUInteger)arg4 ;
+(id)colorWithPatternImage:(id)arg0 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 targetRGBSpace:(NSUInteger)arg4 ;
+(id)colorWithUIColor:(id)arg0 ;
+(id)colorWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
+(id)cyanColor;
+(id)grayColor;
+(id)greenColor;
+(id)lightGrayColor;
+(id)magentaColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)randomColor;
+(id)redColor;
+(id)whiteColor;
+(id)yellowColor;
-(BOOL)improvesContrastWhenDisplayedOverAlternateBackgroundColor:(id)arg0 ratherThanStandardBackgroundColor:(id)arg1 inScenario:(NSUInteger)arg2 ;
-(BOOL)isAlmostEqualToColor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualWithTolerance:(id)arg0 ;
-(BOOL)p_isEqualToColor:(id)arg0 withTolerance:(CGFloat)arg1 ;
-(BOOL)requiresOutlineOnBackgroundWithAppearance:(NSUInteger)arg0 ;
-(CGFloat)brightnessComponent;
-(CGFloat)contrastRatioWithColor:(id)arg0 ;
-(CGFloat)hueComponent;
-(CGFloat)p_rgbComponentWithIndex:(unsigned char)arg0 ;
-(CGFloat)saturationComponent;
-(NSUInteger)hash;
-(id)blendedColorWithFraction:(CGFloat)arg0 ofColor:(id)arg1 ;
-(id)colorByCompositingSourceOverDestinationColor:(id)arg0 ;
-(id)colorWithAlphaComponent:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCGColor:(struct CGColor *)arg0 ;
-(id)initWithCGColor:(struct CGColor *)arg0 colorSpace:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCyan:(CGFloat)arg0 magenta:(CGFloat)arg1 yellow:(CGFloat)arg2 black:(CGFloat)arg3 alpha:(CGFloat)arg4 ;
-(id)initWithHexString:(id)arg0 ;
-(id)initWithHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 alpha:(CGFloat)arg3 targetRGBSpace:(NSUInteger)arg4 ;
-(id)initWithPatternImage:(id)arg0 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 colorSpace:(NSUInteger)arg4 ;
-(id)initWithUIColor:(id)arg0 ;
-(id)initWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
-(id)newBlendedColorWithFraction:(CGFloat)arg0 ofColor:(id)arg1 ;
-(id)p_colorForComparingWithColor:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getRGBAComponents:(*CGFloat)arg0 ;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif