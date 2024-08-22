// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSUISTARKNOTIFICATIONSSCENESPECIFICATION_H
#define SBSUISTARKNOTIFICATIONSSCENESPECIFICATION_H

@class UIApplicationStarkSceneSpecification;



@interface SBSUIStarkNotificationsSceneSpecification : UIApplicationStarkSceneSpecification



-(BOOL)isInternal;
-(BOOL)isUIKitManaged;
-(Class)clientSettingsClass;
-(Class)settingsClass;
-(Class)transitionContextClass;
-(id)baseActionHandlers;
-(id)baseSettingsDiffActions;


@end


#endif