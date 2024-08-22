// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSUILOGINUISCENECLIENTSETTINGSDIFFINSPECTOR_H
#define SBSUILOGINUISCENECLIENTSETTINGSDIFFINSPECTOR_H

@class UIApplicationSceneClientSettingsDiffInspector;



@interface SBSUILoginUISceneClientSettingsDiffInspector : UIApplicationSceneClientSettingsDiffInspector



-(void)_observeOtherLoginUISetting:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)observeIdleTimerModeWithBlock:(id)arg0 ;
-(void)observeRotationModeWithBlock:(id)arg0 ;
-(void)observeStatusBarUserNameOverrideWithBlock:(id)arg0 ;
-(void)observeWallpaperModeWithBlock:(id)arg0 ;


@end


#endif