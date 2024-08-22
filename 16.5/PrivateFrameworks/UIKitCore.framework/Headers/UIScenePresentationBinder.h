// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISCENEPRESENTATIONBINDER_H
#define UISCENEPRESENTATIONBINDER_H

@class NSString, NSMutableDictionary, FBSSceneSettingsDiffInspector, NSSet;
@protocol FBSceneLayerManagerObserver, FBSceneObserver, BSDescriptionProviding, BSInvalidatable, UIScenePresentationBinderDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIScenePresentationBinder : NSObject <FBSceneLayerManagerObserver, FBSceneObserver, BSDescriptionProviding, BSInvalidatable>

 {
    NSString *_identifier;
    UIView *_rootView;
    NSInteger _priority;
    NSUInteger _appearanceStyle;
    BOOL _invalidated;
    NSMutableDictionary *_mapSceneIDToPresenter;
    FBSSceneSettingsDiffInspector *_settingsDiffInspector;
    ? _delegateFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIScenePresentationBinderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *scenes; // ivar: _scenes
@property (readonly) Class superclass;


-(id)_rootView;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 priority:(NSInteger)arg1 rootView:(id)arg2 appearanceStyle:(NSUInteger)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_activatePresenter:(id)arg0 scene:(id)arg1 reason:(id)arg2 ;
-(void)_deactivatePresenter:(id)arg0 scene:(id)arg1 reason:(id)arg2 ;
-(void)_delegateDidStartPresentingScene:(id)arg0 ;
-(void)_delegateDidStopPresentingScene:(id)arg0 ;
-(void)_evaluateSceneForHosting:(id)arg0 forReason:(id)arg1 ;
-(void)_noteDidStopPresentingScene:(id)arg0 ;
-(void)_noteSceneChangedLevel:(id)arg0 ;
-(void)_noteSceneMovedToBackground:(id)arg0 ;
-(void)_noteSceneMovedToForeground:(id)arg0 ;
-(void)_noteWillStartPresentingScene:(id)arg0 ;
-(void)_positionPresentationViewInRootViewOrderedCorrectly:(id)arg0 ;
-(void)_removeScene:(id)arg0 forReason:(id)arg1 ;
-(void)addScene:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeScene:(id)arg0 ;
-(void)scene:(id)arg0 didApplyUpdateWithContext:(id)arg1 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)sceneLayerManagerDidStartTrackingLayers:(id)arg0 ;
-(void)sceneLayerManagerDidStopTrackingLayers:(id)arg0 ;


@end


#endif