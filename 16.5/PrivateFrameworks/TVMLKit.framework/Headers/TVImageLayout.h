// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVIMAGELAYOUT_H
#define TVIMAGELAYOUT_H

@class UIColor, NSString, IKFourTuple, IKColor, UIImageSymbolConfiguration, NSShadow;


#import "TVViewLayout.h"

@interface TVImageLayout : TVViewLayout

@property (nonatomic) BOOL allowsNonOpaqueShadows; // ivar: _allowsNonOpaqueShadows
@property (nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) TVCornerRadii borderRadii; // ivar: _borderRadii
@property (nonatomic) UIEdgeInsets borderWidth; // ivar: _borderWidth
@property (nonatomic) BOOL continuousBorder; // ivar: _continuousBorder
@property (copy, nonatomic) NSString *cropCode; // ivar: _cropCode
@property (readonly, nonatomic) CGSize decoratorSize;
@property (retain, nonatomic) IKFourTuple *ikBorderRadius; // ivar: _ikBorderRadius
@property (retain, nonatomic) IKColor *ikDarkTintColor; // ivar: _ikDarkTintColor
@property (retain, nonatomic) IKColor *ikTintColor; // ivar: _ikTintColor
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // ivar: _imageSymbolConfiguration
@property (copy, nonatomic) NSString *imageTreatment; // ivar: _imageTreatment
@property (copy, nonatomic) NSString *inlineTitle; // ivar: _inlineTitle
@property (copy, nonatomic) NSString *placeholderArtworkName; // ivar: _placeholderArtworkName
@property (nonatomic) NSInteger scaleMode; // ivar: _scaleMode
@property (retain, nonatomic) NSShadow *shadow; // ivar: _shadow
@property (nonatomic) CGFloat upscaleFactor; // ivar: _upscaleFactor
@property (nonatomic) BOOL useInSearchPartial; // ivar: _useInSearchPartial


+(id)layoutWithLayout:(id)arg0 element:(id)arg1 ;
-(CGFloat)defaultFocusSizeIncrease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(struct CGSize )_aspectFitToSize:(struct CGSize )arg0 scaleToSize:(struct CGSize )arg1 aspectRatio:(CGFloat)arg2 ;


@end


#endif