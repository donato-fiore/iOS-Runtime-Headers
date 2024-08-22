// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSETUPMANAGER_H
#define SBSETUPMANAGER_H

@class NSString, NSMapTable, NSHashTable;
@protocol SBAppInteractionEventSourceObserving, SBFloatingDockControllerObserver, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBSetupManager : NSObject <SBAppInteractionEventSourceObserving, SBFloatingDockControllerObserver>

 {
    NSUInteger _setupRequiredReason;
    BOOL _setupWantedForDeviceMigration;
    id<BSInvalidatable> *_deferOrientationUpdatesAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeferringDeviceOrientationUpdates) BOOL deferringDeviceOrientationUpdates;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMapTable *floatingDockBehaviorAssertionsByFloatingDockController; // ivar: _floatingDockBehaviorAssertionsByFloatingDockController
@property (readonly, nonatomic) NSHashTable *floatingDockControllers; // ivar: _floatingDockControllers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInSetupMode) BOOL inSetupMode;
@property (readonly, nonatomic, getter=isInSetupModeForDeviceMigration) BOOL inSetupModeForDeviceMigration;
@property (nonatomic, getter=isInSetupModeReadyToExit) BOOL inSetupModeReadyToExit; // ivar: _inSetupModeReadyToExit
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_setSetupRequiredReason:(NSUInteger)arg0 ;
-(BOOL)setupHasFinishedRestoringFromBackup;
-(BOOL)updateInSetupMode;
-(id)init;
-(void)_invalidateFloatingDockBehaviorAssertions;
-(void)_setupProcessChangedNotificationReceived:(id)arg0 ;
-(void)_takeFloatingDockBehaviorAssertionForFloatingDockController:(id)arg0 ;
-(void)_takeFloatingDockBehaviorAssertions;
-(void)_toggleSetupForMigrationNeeded:(BOOL)arg0 forReason:(id)arg1 ;
-(void)dealloc;
-(void)eventSource:(id)arg0 didBeginTransitionToMode:(NSInteger)arg1 withLayoutState:(id)arg2 activatingElement:(id)arg3 triggeredBy:(NSInteger)arg4 ;
-(void)floatingDockControllerDidRegister:(id)arg0 ;
-(void)noteAuthenticationSucceededWithPasscode:(id)arg0 ;
-(void)postLaunchCompleteNotificationForSetup;


@end


#endif