// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTURESCENEELEMENTSCENEPRESENTERVIEW_H
#define SBSYSTEMAPERTURESCENEELEMENTSCENEPRESENTERVIEW_H

@class UIView, FBScene;
@protocol UIScenePresenter;



@interface SBSystemApertureSceneElementScenePresenterView : UIView

@property (retain, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, nonatomic) UIView *sceneContentView; // ivar: _sceneContentView
@property (readonly, nonatomic) NSObject<UIScenePresenter> *scenePresenter; // ivar: _scenePresenter


-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif