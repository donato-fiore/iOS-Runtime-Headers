// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIBRANCYEFFECTCOREMATERIALIMPL_H
#define _UIVIBRANCYEFFECTCOREMATERIALIMPL_H

@class UIVibrancyEffectImpl, NSString;



@interface _UIVibrancyEffectCoreMaterialImpl : UIVibrancyEffectImpl {
    NSInteger _blurStyle;
    NSInteger _vibrancyStyle;
    NSString *_lightMaterial;
    NSString *_darkMaterial;
}




-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg0 toEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(BOOL)invertAutomaticStyle;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)style;
-(NSInteger)vibrancyStyle;
-(NSUInteger)hash;
-(id)initWithLightMaterial:(id)arg0 darkMaterial:(id)arg1 vibrancyStyle:(NSInteger)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 vibrancyStyle:(NSInteger)arg1 ;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)appendDescriptionTo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif