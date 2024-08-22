// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBLUREFFECTLEGACYIMPL_H
#define _UIBLUREFFECTLEGACYIMPL_H

@class UIBlurEffectImpl;


#import "UIColor.h"
#import "UIBlurEffect.h"

@interface _UIBlurEffectLegacyImpl : UIBlurEffectImpl {
    NSInteger _style;
    UIColor *_tintColor;
    BOOL _invertAutomaticStyle;
}


@property (nonatomic) UIBlurEffect *effect; // ivar: _effect


-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg0 toEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(BOOL)canProvideVibrancyEffect;
-(BOOL)invertAutomaticStyle;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)style;
-(NSUInteger)hash;
-(id)implementationForUserInterfaceStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 tintColor:(id)arg1 invertAutomaticStyle:(BOOL)arg2 ;
-(id)tintColor;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)appendDescriptionTo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif