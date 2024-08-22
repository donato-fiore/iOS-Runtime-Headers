// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIBRANTSETTINGS_H
#define _UIVIBRANTSETTINGS_H


#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "_UILegibilitySettings.h"

@interface _UIVibrantSettings : NSObject

@property (retain, nonatomic) UIColor *chevronShimmerColor; // ivar: _chevronShimmerColor
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) UIColor *highlightLimitingColor; // ivar: _highlightLimitingColor
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) UIColor *referenceColor; // ivar: _referenceColor
@property (readonly, nonatomic) CGFloat referenceContrast; // ivar: _referenceContrast
@property (retain, nonatomic) UIColor *shimmerColor; // ivar: _shimmerColor
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(id)vibrantSettingsWithReferenceColor:(id)arg0 referenceContrast:(CGFloat)arg1 legibilitySettings:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_computeSourceColorDodgeColorForDestinationColor:(id)arg0 producingLuminanceChange:(CGFloat)arg1 ;
-(id)highlightLimitingViewWithFrame:(struct CGRect )arg0 ;
-(id)initWithReferenceColor:(id)arg0 referenceContrast:(CGFloat)arg1 legibilitySettings:(id)arg2 ;
-(id)tintViewWithFrame:(struct CGRect )arg0 ;


@end


#endif