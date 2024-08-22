// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVIMAGESCALEDECORATOR_H
#define TVIMAGESCALEDECORATOR_H

@class UIColor;


#import "TVImageDecorator.h"

@interface TVImageScaleDecorator : TVImageDecorator

@property (copy, nonatomic) UIColor *bgColor; // ivar: _bgColor
@property (nonatomic) BOOL centerGrowth; // ivar: _centerGrowth
@property (nonatomic) BOOL cornerContinuous; // ivar: _cornerContinuous
@property (nonatomic) TVCornerRadii cornerRadii; // ivar: _cornerRadii
@property (nonatomic) BOOL cropToFit;
@property (nonatomic) CGFloat focusedSizeIncrease; // ivar: _focusedSizeIncrease
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) BOOL preservesAlpha; // ivar: _preservesAlpha
@property (nonatomic) NSInteger scaleMode; // ivar: _scaleMode
@property (nonatomic) CGSize scaleToSize; // ivar: _scaleToSize
@property (nonatomic) CGFloat upscaleAdjustment;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)loaderCropToFit;
-(BOOL)needsAlphaForImage:(id)arg0 ;
-(NSUInteger)hash;
-(id)_imageFixedForRotation:(id)arg0 ;
-(id)decorate:(id)arg0 scaledWithSize:(struct CGSize )arg1 croppedToFit:(BOOL)arg2 ;
-(id)decoratorIdentifier;
-(id)init;
-(id)initWithScaleToSize:(struct CGSize )arg0 ;
-(id)initWithScaleToSize:(struct CGSize )arg0 cropToFit:(BOOL)arg1 ;
-(id)initWithScaleToSize:(struct CGSize )arg0 scaleMode:(NSInteger)arg1 ;
-(struct CGSize )expectedSize;
-(struct CGSize )loaderScaleToSize;
-(void)_applyCornerMaskForRect:(struct CGRect )arg0 toContext:(struct CGContext *)arg1 ;


@end


#endif