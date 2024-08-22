// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSPIPELINEMANAGER_H
#define SBTRAITSPIPELINEMANAGER_H

@class SBFTraitsArbiter, NSString, SBFTraitsArbitrationInputs, UIKBArbiterClientFocusContext;
@protocol SBFTraitsArbiterStagesRolesProvider, SBFTraitsArbiterDrawingDataSource, SBFTraitsArbiterInputsDataSource, SBWindowSceneDelegate;

#import <Foundation/Foundation.h>

#import "SBMedusa1oSettings.h"

@interface SBTraitsPipelineManager : NSObject <SBFTraitsArbiterStagesRolesProvider, SBFTraitsArbiterDrawingDataSource, SBFTraitsArbiterInputsDataSource>

 {
    SBMedusa1oSettings *_medusaSettings;
}


@property (weak, nonatomic) SBFTraitsArbiter *arbiter; // ivar: _arbiter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBFTraitsArbitrationInputs *inputs;
@property (retain, nonatomic) UIKBArbiterClientFocusContext *keyboardFocusContext; // ivar: _keyboardFocusContext
@property (weak, nonatomic) NSObject<SBWindowSceneDelegate> *sceneDelegate; // ivar: _sceneDelegate
@property (readonly) Class superclass;


-(id)defaultOrientationAnimationSettingsAnimatable:(BOOL)arg0 ;
-(id)init;
-(id)initWithArbiter:(id)arg0 sceneDelegate:(id)arg1 ;
// -(id)newBlockBasedOrientationPolicySpecifier:(id)arg0 forParticipant:(unk)arg1  ;
// -(id)newBlockBasedOrientationPolicySpecifier:(id)arg0 forRole:(unk)arg1  ;
-(id)orientationStageRoles;
-(id)zOrderStageRoles;
-(void)setupDefaultPipelineForArbiter:(id)arg0 ;


@end


#endif