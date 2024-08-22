// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBROOTWINDOWSCENEPRESENTATIONBINDER_H
#define SBROOTWINDOWSCENEPRESENTATIONBINDER_H

@class UIRootWindowScenePresentationBinder, FBSDisplayConfiguration, UIRootSceneWindow;



@interface SBRootWindowScenePresentationBinder : UIRootWindowScenePresentationBinder

@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration; // ivar: _displayConfiguration
@property (readonly, nonatomic) UIRootSceneWindow *rootWindow; // ivar: _rootWindow


-(id)initWithIdentifier:(id)arg0 priority:(NSInteger)arg1 appearanceStyle:(NSUInteger)arg2 rootWindow:(id)arg3 ;


@end


#endif