// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIWINDOWSCENEFBSSCENELIFECYCLEMONITOR_H
#define _UIWINDOWSCENEFBSSCENELIFECYCLEMONITOR_H

@class UISceneLifecycleMonitor, NSNumber;



@interface _UIWindowSceneFBSSceneLifecycleMonitor : UISceneLifecycleMonitor {
    NSNumber *_transitioningState;
    BOOL _transitioning;
    BOOL _connected;
}




-(NSInteger)currentActivationState;
-(id)_windowScene;
-(id)initWithScene:(id)arg0 ;
-(void)didEnterBackground;
-(void)transitionToTargetState:(id)arg0 fromState:(id)arg1 withTransitionContext:(id)arg2 preparations:(id)arg3 ;
-(void)willBecomeActive;


@end


#endif