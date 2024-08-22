// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPCONTROLLERCOORDINATOR_H
#define SBPIPCONTROLLERCOORDINATOR_H

@class NSMutableDictionary, NSMapTable, NSMutableSet, NSString;
@protocol SBIdleTimerProviding, SBApplicationHosting;

#import <Foundation/Foundation.h>

#import "SBWindowSceneManager.h"

@interface SBPIPControllerCoordinator : NSObject <SBIdleTimerProviding, SBApplicationHosting>

 {
    NSMutableDictionary *_controllersByType;
    NSMapTable *_controllerInterruptionAssertionsByCoordinatorAssertion;
    NSMapTable *_coordinatorAssertionToInterruptionAssertionMap;
    NSMutableSet *_pictureInPictureWindowsHiddenReasons;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SBWindowSceneManager *windowSceneManager; // ivar: _windowSceneManager


-(BOOL)canHostAnApp;
-(BOOL)isAnyPictureInPictureWindowVisible;
-(BOOL)isHostingAnApp;
-(BOOL)isPresentingPictureInPictureRequiringMedusaKeyboard;
-(BOOL)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg0 scenePersistenceIdentifier:(id)arg1 pipContentType:(NSInteger)arg2 ;
-(NSInteger)tetheringModeForScenePersistenceIdentifier:(id)arg0 pipContentType:(NSInteger)arg1 ;
-(id)acquireInterruptionAssertionForReason:(NSInteger)arg0 identifier:(id)arg1 ;
-(id)controllerForType:(NSInteger)arg0 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(id)init;
-(void)_enumerateControllersByDescendingPriority:(id)arg0 ;
-(void)conformsToSBApplicationHosting;
-(void)handleDestructionRequestForSceneHandles:(id)arg0 ;
-(void)hostedAppWillRotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)registerController:(id)arg0 forType:(NSInteger)arg1 ;
-(void)setPictureInPictureWindowsHidden:(BOOL)arg0 withReason:(id)arg1 ;


@end


#endif