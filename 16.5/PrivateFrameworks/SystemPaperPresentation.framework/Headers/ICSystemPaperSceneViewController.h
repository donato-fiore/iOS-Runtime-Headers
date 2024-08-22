// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSYSTEMPAPERSCENEVIEWCONTROLLER_H
#define ICSYSTEMPAPERSCENEVIEWCONTROLLER_H

@class UIViewController, UIView, FBScene, UIScene, NSString, NSData;
@protocol BSInvalidatable, FBSceneDelegate, _UISceneSettingsDiffAction, UIScenePresenter;



@interface ICSystemPaperSceneViewController : UIViewController <BSInvalidatable, FBSceneDelegate, _UISceneSettingsDiffAction>

 {
    UIView *_sceneContainerView;
    FBScene *_scene;
    id<UIScenePresenter> *_scenePresenter;
    UIScene *_uiParentScene;
    BOOL _visible;
    BOOL _invalidated;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSData *userActivityData; // ivar: _userActivityData


+(void)presentSystemPaperWithUserActivityData:(id)arg0 presenter:(id)arg1 completion:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(NSInteger)contentState;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithUserActivityData:(id)arg0 ;
-(id)uiActivityContinuationActionForUserActivityData:(id)arg0 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_adjustParentScene;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)_teardown;
-(void)_update;
-(void)_updateSceneSafeAreaInsets;
-(void)_updateSceneToSize:(struct CGSize )arg0 orientation:(NSInteger)arg1 withAnimationSettings:(id)arg2 fence:(id)arg3 ;
-(void)_updateSceneUIApplicationSceneSettingsWithBlock:(id)arg0 ;
-(void)_updateSceneUserInterfaceStyle;
-(void)createLinkWithUserActivityData:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneDidDeactivate:(id)arg0 withError:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFocusIfNeeded;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif