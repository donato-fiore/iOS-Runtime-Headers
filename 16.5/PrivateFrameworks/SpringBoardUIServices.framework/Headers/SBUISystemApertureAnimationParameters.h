// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUISYSTEMAPERTUREANIMATIONPARAMETERS_H
#define SBUISYSTEMAPERTUREANIMATIONPARAMETERS_H

@class NSNumber, BSSettings, SBFFluidBehaviorSettings;

#import <Foundation/Foundation.h>


@interface SBUISystemApertureAnimationParameters : NSObject {
    NSNumber *_tracking;
    NSNumber *_retargeted;
}


@property (readonly, nonatomic) BSSettings *BSSettingsRepresentation; // ivar: _BSSettingsRepresentation
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic) SBFFluidBehaviorSettings *fluidBehaviorSettings; // ivar: _fluidBehaviorSettings
@property (readonly, nonatomic, getter=isRetargeted) BOOL retargeted;
@property (readonly, nonatomic) BOOL tracking;


+(BOOL)areParams:(id)arg0 equivalentTo:(id)arg1 ;
-(BOOL)_hasSpringParameters;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_animationBehavior;
-(id)initWithBSSettingsRepresentation:(id)arg0 ;
-(id)initWithFluidBehaviorSettings:(id)arg0 tracking:(BOOL)arg1 retargeted:(BOOL)arg2 ;


@end


#endif