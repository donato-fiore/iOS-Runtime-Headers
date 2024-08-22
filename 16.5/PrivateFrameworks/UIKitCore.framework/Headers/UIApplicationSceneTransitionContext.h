// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIAPPLICATIONSCENETRANSITIONCONTEXT_H
#define UIAPPLICATIONSCENETRANSITIONCONTEXT_H

@class FBSSceneTransitionContext, UISClickAttribution, UISPasteSharingToken, NSDictionary;



@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext

@property (retain, nonatomic) UISClickAttribution *clickAttribution;
@property (nonatomic) BOOL disableTouchCancellationOnRotation;
@property (nonatomic) CGFloat execTime;
@property (nonatomic) BOOL forTesting;
@property (nonatomic, getter=_lifecycleActionType, setter=_setLifecycleActionType:) NSUInteger lifecycleActionType;
@property (retain, nonatomic) UISPasteSharingToken *pasteSharingToken;
@property (retain, nonatomic) NSDictionary *payload;
@property (nonatomic) BOOL safeMode;
@property (nonatomic) BOOL shouldTakeKeyboardFocus;
@property (nonatomic) NSUInteger signpostID;
@property (nonatomic) NSInteger statusBarAnimation;
@property (nonatomic) CGFloat userLaunchEventTime;
@property (nonatomic) BOOL waitForBackgroundTaskCompletion;


-(BOOL)isUISubclass;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif