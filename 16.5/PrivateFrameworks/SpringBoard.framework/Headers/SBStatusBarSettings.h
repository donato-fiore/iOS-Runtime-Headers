// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSTATUSBARSETTINGS_H
#define SBSTATUSBARSETTINGS_H

@class BSSettings, NSNumber, NSString, _UILegibilitySettings;
@protocol BSSettingDescriptionProvider, BSDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SBStatusBarSettings : NSObject <BSSettingDescriptionProvider, BSDescriptionProviding, NSCopying, NSMutableCopying>



@property (readonly, nonatomic, getter=_BSSettings) BSSettings *BSSettings; // ivar: _settings
@property (readonly, nonatomic) NSNumber *alpha;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) NSInteger style;
@property (readonly, nonatomic) NSUInteger styleOverridesToSuppress;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithBSSettings:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif