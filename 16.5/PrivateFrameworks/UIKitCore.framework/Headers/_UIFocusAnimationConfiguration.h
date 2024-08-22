// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSANIMATIONCONFIGURATION_H
#define _UIFOCUSANIMATIONCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIFocusAnimationConfiguration : NSObject <NSCopying>



@property (nonatomic) NSUInteger animationOptions; // ivar: _animationOptions
@property (nonatomic) CGFloat focusingBaseDuration; // ivar: _focusingBaseDuration
@property (nonatomic) CGFloat focusingDelay; // ivar: _focusingDelay
@property (nonatomic) CGFloat focusingDurationScaleFactorLowerBound; // ivar: _focusingDurationScaleFactorLowerBound
@property (nonatomic) CGFloat focusingDurationScaleFactorUpperBound; // ivar: _focusingDurationScaleFactorUpperBound
@property (nonatomic) CGFloat minimumFocusDuration; // ivar: _minimumFocusDuration
@property (nonatomic) CGFloat unfocusingBackgroundFadeDurationPercentage; // ivar: _unfocusingBackgroundFadeDurationPercentage
@property (nonatomic) CGFloat unfocusingBaseDuration; // ivar: _unfocusingBaseDuration
@property (nonatomic) CGFloat unfocusingDurationScaleFactorLowerBound; // ivar: _unfocusingDurationScaleFactorLowerBound
@property (nonatomic) CGFloat unfocusingDurationScaleFactorUpperBound; // ivar: _unfocusingDurationScaleFactorUpperBound
@property (nonatomic) CGFloat unfocusingRepositionBaseDuration; // ivar: _unfocusingRepositionBaseDuration


+(id)configurationWithStyle:(NSInteger)arg0 ;
-(CGFloat)_defaultVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg0 ;
-(CGFloat)_focusingVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg0 ;
-(CGFloat)_unfocusingRepositionVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg0 ;
-(CGFloat)_unfocusingVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif