// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSTATUSBARTAPMANAGER_H
#define SBSTATUSBARTAPMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SBStatusBarTapManager : NSObject {
    NSMutableDictionary *_statusBarOverridesToRecentScenes;
    NSMutableDictionary *_statusBarOverridesToRecentSceneResetTimers;
}




-(BOOL)_isUILocked;
-(BOOL)_performAfterAttemptingUnlockForAppWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(BOOL)canHandleTapForStatusBarStyleOverrides:(NSUInteger)arg0 ;
-(BOOL)handleTapForStyleOverrides:(NSUInteger)arg0 ;
-(id)_allApplicationDestinationsForApplications:(id)arg0 ;
-(id)_appDestinationForNextSceneToVisitForApps:(id)arg0 styleOverrides:(NSUInteger)arg1 ;
-(id)_foregroundApplicationDestinationsForApplications:(id)arg0 ;
-(id)_handlerForStyleOverrides:(NSUInteger)arg0 ;
-(id)_handlerForStyleOverrides:(NSUInteger)arg0 orOutApplications:(*id)arg1 ;
-(id)_recentlyTappedApplicationDestinationsForStyleOverrides:(NSUInteger)arg0 ;
-(id)_workspace;
-(void)_addRecentlyTappedApplicationDestinations:(id)arg0 forStyleOverrides:(NSUInteger)arg1 ;
-(void)_resetRecentlyTappedSceneIdentifiersForStyleOverrides:(NSUInteger)arg0 ;
-(void)_scheduleResetRecentlyTappedSceneIdentifiersForStyleOverrides:(NSUInteger)arg0 ;


@end


#endif