// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUCOLOR_H
#define TSUCOLOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSUColor : NSObject <NSCopying>



@property (readonly) *CGColor CGColor; // ivar: mCGColor


+(id)blackColor;
+(id)blueColor;
+(id)brownColor;
+(id)clearColor;
+(id)colorWithCGColor:(struct CGColor *)arg0 ;
+(id)colorWithHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithPatternImage:(id)arg0 ;
+(id)colorWithPlatformColor:(id)arg0 ;
+(id)colorWithRGBAComponents:(*CGFloat)arg0 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
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
-(BOOL)isAlmostEqualToColor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGrayscaleColor;
-(BOOL)isNearlyWhite;
-(BOOL)isOpaque;
-(CGFloat)alphaComponent;
-(CGFloat)blueComponent;
-(CGFloat)brightnessComponent;
-(CGFloat)greenComponent;
-(CGFloat)hueComponent;
-(CGFloat)luminance;
-(CGFloat)p_rgbComponentWithIndex:(unsigned char)arg0 ;
-(CGFloat)redComponent;
-(CGFloat)saturationComponent;
-(NSUInteger)hash;
-(id)UIColor;
-(id)blendedColorWithFraction:(CGFloat)arg0 ofColor:(id)arg1 ;
-(id)colorWithAlphaComponent:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)darkenedColorByFactor:(CGFloat)arg0 ;
-(id)grayscaleColor;
-(id)initWithCGColor:(struct CGColor *)arg0 ;
-(id)initWithHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithPatternImage:(id)arg0 ;
-(id)initWithPlatformColor:(id)arg0 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithUIColor:(id)arg0 ;
-(id)initWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
-(id)invertedColor;
-(id)lightenedColorByFactor:(CGFloat)arg0 ;
-(id)newBlendedColorWithFraction:(CGFloat)arg0 ofColor:(id)arg1 ;
-(id)platformColor;
-(void)dealloc;
-(void)getRGBAComponents:(*CGFloat)arg0 ;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif