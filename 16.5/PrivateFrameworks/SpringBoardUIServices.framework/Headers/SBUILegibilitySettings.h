// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUILEGIBILITYSETTINGS_H
#define SBUILEGIBILITYSETTINGS_H

@class _UILegibilitySettings, NSString, UIColor;
@protocol SBUILegibilitySettings;

#import <Foundation/Foundation.h>


@interface SBUILegibilitySettings : NSObject <SBUILegibilitySettings>

 {
    NSUInteger _computedHash;
    _UILegibilitySettings *_cachedLegacyLegibiltiySettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat imageOutset;
@property (readonly, nonatomic) CGFloat minFillHeight; // ivar: _minFillHeight
@property (readonly, nonatomic) UIColor *primaryColor; // ivar: _primaryColor
@property (readonly, nonatomic) UIColor *secondaryColor; // ivar: _secondaryColor
@property (readonly, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (readonly, nonatomic) ? shadowSettings; // ivar: _shadowSettings
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)sharedInstanceForStyle:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLegibilitySettings:(id)arg0 ;
-(CGFloat)shadowAlpha;
-(CGFloat)shadowRadius;
-(id)_UILegibilitySettings;
-(id)compositingFilter;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentColor:(id)arg0 ;
-(id)initWithContentColor:(id)arg0 contrast:(CGFloat)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 contentColor:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 primaryColor:(id)arg1 secondaryColor:(id)arg2 shadowColor:(id)arg3 ;
-(id)initWithStyle:(NSInteger)arg0 primaryColor:(id)arg1 secondaryColor:(id)arg2 shadowColor:(id)arg3 shadowSettings:(struct ? )arg4 ;
-(id)initWithStyle:(NSInteger)arg0 primaryColor:(id)arg1 secondaryColor:(id)arg2 shadowColor:(id)arg3 shadowSettings:(struct ? )arg4 minFillHeight:(CGFloat)arg5 ;
-(void)_configureForStyle:(NSInteger)arg0 contentColor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif