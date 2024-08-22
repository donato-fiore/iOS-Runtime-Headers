// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFLOATINGVIEWCONFIGURATION_H
#define WFFLOATINGVIEWCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface WFFloatingViewConfiguration : NSObject

@property (nonatomic) BOOL appliesCornerRadiusDuringTouchDownOnly; // ivar: _appliesCornerRadiusDuringTouchDownOnly
@property (nonatomic) BOOL colorizesShadow; // ivar: _colorizesShadow
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) NSInteger gradientDirection; // ivar: _gradientDirection
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (nonatomic) CGSize shadowOffset; // ivar: _shadowOffset
@property (nonatomic) float shadowOpacity; // ivar: _shadowOpacity
@property (nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius
@property (nonatomic) BOOL usePillCornerRadius; // ivar: _usePillCornerRadius


+(id)bannerImageConfiguration;
+(id)darkMaterialWorkflowConfiguration;
+(id)lightMaterialWorkflowConfiguration;
+(id)paletteColorConfiguration;
+(id)widgetWorkflowConfiguration;
-(id)init;


@end


#endif