// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICOLOREFFECT_H
#define UICOLOREFFECT_H

@class NSString, NSDictionary;


#import "UIVisualEffect.h"

@interface UIColorEffect : UIVisualEffect {
    NSString *_filterType;
    NSDictionary *_configurationValues;
    NSDictionary *_identityValues;
    NSDictionary *_requestedValues;
    BOOL _disableInPlaceFiltering;
}




+(BOOL)supportsSecureCoding;
+(id)_colorEffectCAMatrix:(struct CAColorMatrix )arg0 ;
+(id)_colorEffectSourceOver:(struct ? )arg0 ;
+(id)colorEffectAdd:(id)arg0 ;
+(id)colorEffectBrightness:(CGFloat)arg0 ;
+(id)colorEffectColor:(id)arg0 ;
+(id)colorEffectContrast:(CGFloat)arg0 ;
+(id)colorEffectCurvesRed:(id)arg0 green:(id)arg1 blue:(id)arg2 alpha:(id)arg3 ;
+(id)colorEffectInvert;
+(id)colorEffectLuminanceCurveMap:(id)arg0 blendingAmount:(CGFloat)arg1 ;
+(id)colorEffectLuminanceMap:(id)arg0 blendingAmount:(CGFloat)arg1 ;
+(id)colorEffectMatrix:(struct ? )arg0 ;
+(id)colorEffectMonochromeTint:(id)arg0 blendingAmount:(CGFloat)arg1 brightnessAdjustment:(CGFloat)arg2 ;
+(id)colorEffectMultiply:(id)arg0 ;
+(id)colorEffectSaturate:(CGFloat)arg0 ;
+(id)colorEffectSubtract:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_expectedUsage;
-(NSUInteger)hash;
-(id)_filterEntry;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif