// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIBANNERSCENECLIENTSETTINGS_H
#define SBUIBANNERSCENECLIENTSETTINGS_H

@class BNSceneClientSettings, NSString;
@protocol BSSettingDescriptionProvider;



@interface SBUIBannerSceneClientSettings : BNSceneClientSettings <BSSettingDescriptionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *transitionDismissalPreventionReason;
@property (readonly, copy, nonatomic) NSString *wantsDefaultGesturePriorityReason;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif