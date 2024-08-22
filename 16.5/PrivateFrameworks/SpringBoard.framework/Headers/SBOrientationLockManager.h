// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBORIENTATIONLOCKMANAGER_H
#define SBORIENTATIONLOCKMANAGER_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SBOrientationLockManager : NSObject {
    NSInteger _userLockedOrientation;
    NSInteger _previousLockedOrientation;
    *__CFRunLoopObserver _runLoopObserver;
    NSMutableSet *_lockOverrideReasons;
    NSMutableDictionary *_shimmedDeviceOrientationAssertions;
}




+(id)sharedInstance;
-(BOOL)isEffectivelyLocked;
-(BOOL)isUserLocked;
-(BOOL)lockOverrideEnabled;
-(NSInteger)deviceOrientationAsFarAsAppsAreConcerned;
-(NSInteger)effectiveLockedOrientation;
-(NSInteger)userLockOrientation;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_addLockOverrideReason:(id)arg0 orientation:(NSInteger)arg1 force:(BOOL)arg2 ;
-(void)_beginShimmingForReason:(id)arg0 ;
-(void)_endShimmingForReason:(id)arg0 ;
-(void)_handler_runLoopObserverDispose;
-(void)_removeLockOverrideReason:(id)arg0 ;
-(void)_setupRunLoopObserverIfNecessaryForOrientation:(NSInteger)arg0 andInitialLockState:(BOOL)arg1 ;
-(void)_updateLockStateWithChanges:(id)arg0 ;
-(void)_updateLockStateWithOrientation:(NSInteger)arg0 forceUpdateHID:(BOOL)arg1 changes:(id)arg2 ;
-(void)dealloc;
-(void)enableLockOverrideForReason:(id)arg0 forceOrientation:(NSInteger)arg1 ;
-(void)enableLockOverrideForReason:(id)arg0 suggestOrientation:(NSInteger)arg1 ;
-(void)lock;
-(void)lock:(NSInteger)arg0 ;
-(void)restoreStateFromPrefs;
-(void)setLockOverrideEnabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)unlock;
-(void)updateLockOverrideForCurrentDeviceOrientation;


@end


#endif