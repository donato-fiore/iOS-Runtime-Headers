// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSSCENEPARTICIPANTDELEGATE_H
#define SBTRAITSSCENEPARTICIPANTDELEGATE_H

@class UIApplicationSceneClientSettingsDiffInspector, BKSAnimationFenceHandle, SBFTraitsArbiter, NSString, SBFTraitsParticipant, NSNumber, FBScene, SBSceneHandle;
@protocol FBSceneObserver, SBSceneHandleObserver, BSInvalidatable, SBFTraitsParticipantDelegate, SBTraitsSceneSettingsUpdater;

#import <Foundation/Foundation.h>

#import "SBTraitsSceneOrientationRequestAssistant.h"

@interface SBTraitsSceneParticipantDelegate : NSObject <FBSceneObserver, SBSceneHandleObserver, BSInvalidatable, SBFTraitsParticipantDelegate, SBTraitsSceneSettingsUpdater>

 {
    BOOL _invalidated;
    SBTraitsSceneOrientationRequestAssistant *_orientationRequestActionAssistant;
    UIApplicationSceneClientSettingsDiffInspector *_sceneClientSettingsDiffInspector;
    NSInteger _orientationMode;
    BKSAnimationFenceHandle *_fallbackFence_90210730;
}


@property (copy, nonatomic) id *actuateOrientationAlongsideBlock; // ivar: _actuateOrientationAlongsideBlock
@property (copy, nonatomic) id *actuateOrientationSettingsAlongsideBlock; // ivar: _actuateOrientationSettingsAlongsideBlock
@property (copy, nonatomic) id *actuateZOrderAlongsideBlock; // ivar: _actuateZOrderAlongsideBlock
@property (weak, nonatomic) SBFTraitsArbiter *arbiter; // ivar: _arbiter
@property (nonatomic) BOOL canDetermineActiveOrientation; // ivar: _canDetermineActiveOrientation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isOrientationActuationAnimatable) BOOL orientationActuationAnimatable; // ivar: _orientationActuationAnimatable
@property (nonatomic, getter=isOrientationActuationAnimatable) BOOL orientationActuationEnabled; // ivar: _orientationActuationEnabled
@property (nonatomic) NSInteger orientationModeOverride; // ivar: _orientationModeOverride
@property (weak, nonatomic) SBFTraitsParticipant *participant; // ivar: _participant
@property (retain, nonatomic) NSNumber *preferredSceneLevel; // ivar: _preferredSceneLevel
@property (weak, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, nonatomic) NSInteger sceneCurrentOrientation;
@property (weak, nonatomic) SBSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (readonly) Class superclass;


-(BOOL)_isAllowedToHavePortraitUpsideDown;
-(BOOL)needsActuationForUpdateReasons:(NSInteger)arg0 ;
-(NSInteger)_orientationMode;
-(NSInteger)_preferredOrientation;
-(NSUInteger)_allLegalOrientations;
-(NSUInteger)_bestGuessSupportedInterfaceOrientations;
-(NSUInteger)_sanitizedMask:(NSUInteger)arg0 forApplication:(id)arg1 ;
-(NSUInteger)_supportedOrientations;
-(id)_application;
-(id)initWithScene:(id)arg0 ;
-(id)initWithSceneHandle:(id)arg0 ;
-(id)participantAssociatedSceneIdentityTokens:(id)arg0 ;
-(void)_evaluateOrientationTransitionContext:(id)arg0 ;
-(void)_resetToInitialState;
-(void)actuateOrientationSettingsWithContext:(id)arg0 ;
-(void)actuateZOrderLevelSettings;
-(void)dealloc;
-(void)didChangeSettingsForParticipant:(id)arg0 context:(id)arg1 ;
-(void)invalidate;
-(void)participantWillInvalidate:(id)arg0 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneHandle:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)updateOrientationSceneSettingsForParticipant:(id)arg0 ;
-(void)updatePreferencesForParticipant:(id)arg0 updater:(id)arg1 ;
-(void)updatePreferencesWithUpdater:(id)arg0 ;


@end


#endif