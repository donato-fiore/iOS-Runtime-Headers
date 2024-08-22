// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIEXTERNALSCENEPAIRINGOBSERVER_H
#define UIEXTERNALSCENEPAIRINGOBSERVER_H

@class FBSSceneIdentityToken, NSString, NSMutableSet, FBSSceneClientSettingsDiffInspector, FBSceneManager, FBScene;
@protocol FBSceneManagerObserver, FBSceneObserver, FBSceneLayerManagerObserver, BSInvalidatable, UIExternalScenePairingObserverDelegate;

#import <Foundation/Foundation.h>


@interface UIExternalScenePairingObserver : NSObject <FBSceneManagerObserver, FBSceneObserver, FBSceneLayerManagerObserver, BSInvalidatable>

 {
    FBSSceneIdentityToken *_sceneIdentityToken;
    NSString *_sceneID;
    NSMutableSet *_trackingExternalSceneIDs;
    NSMutableSet *_pairedExternalSceneIDs;
    FBSSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
    BOOL _invalidated;
}


@property (retain, nonatomic, setter=_setSceneManager:) FBSceneManager *_sceneManager; // ivar: _sceneManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIExternalScenePairingObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly) Class superclass;


-(BOOL)isPairedWithExternalSceneID:(id)arg0 ;
-(id)_initWithSceneManager:(id)arg0 scene:(id)arg1 delegate:(id)arg2 ;
-(id)init;
-(id)initWithScene:(id)arg0 delegate:(id)arg1 ;
-(void)_updateExternalScenes;
-(void)_updateScenePairingState;
-(void)dealloc;
-(void)invalidate;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneLayerManagerDidUpdateLayers:(id)arg0 ;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 willDestroyScene:(id)arg1 ;


@end


#endif