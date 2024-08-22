// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWIDGETCONTROLLER_H
#define SBWIDGETCONTROLLER_H

@class NSString, WGWidgetDiscoveryController;
@protocol WGWidgetDiscoveryControllerDelegate, SBExtensionHandling, CSWidgetGroupViewControllerProviding;

#import <Foundation/Foundation.h>


@interface SBWidgetController : NSObject <WGWidgetDiscoveryControllerDelegate, SBExtensionHandling, CSWidgetGroupViewControllerProviding>



@property (nonatomic) BOOL bootstrapFavoriteWidgets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_widgetDiscoveryController) WGWidgetDiscoveryController *widgetDiscoveryController; // ivar: _widgetDiscoveryController


-(BOOL)_shouldUsePinnedWidgets;
-(BOOL)areWidgetsPinnedForWidgetDiscoveryController:(id)arg0 ;
-(BOOL)didPurgeNonASTCSnapshotsForWidgetDiscoveryController:(id)arg0 ;
-(BOOL)didPurgeNonCAMLSnapshotsForWidgetDiscoveryController:(id)arg0 ;
-(BOOL)shouldShowWidgetsPinButtonForWidgetDiscoveryController:(id)arg0 ;
-(BOOL)shouldShowWidgetsPinningTeachingViewForWidgetDiscoveryController:(id)arg0 ;
-(BOOL)widgetDiscoveryController:(id)arg0 shouldPurgeArchivedSnapshotsForWidgetWithBundleIdentifier:(id)arg1 ;
-(BOOL)widgetDiscoveryControllerShouldIncludeInternalWidgets:(id)arg0 ;
-(BOOL)widgetDiscoveryControllerShouldRespectFavorites:(id)arg0 ;
-(id)init;
-(id)newAvocadoWidgetListViewControllerWithSettings:(struct WGWidgetListSettings )arg0 ;
-(id)newWidgetGroupViewControllerWithSettings:(struct WGWidgetListSettings )arg0 ;
-(id)newWidgetListViewControllerWithSettings:(struct WGWidgetListSettings )arg0 ;
-(id)statusBarAssertionForWidgetDiscoveryController:(id)arg0 legibilityStyle:(NSInteger)arg1 ;
-(id)todayWidgetIdentifiers;
-(id)widgetDiscoveryController:(id)arg0 preferredViewControllerForPresentingFromViewController:(id)arg1 ;
-(void)_reloadWidgetPreferences;
-(void)launchExtensionWithBundleID:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)removeWidgetIdentifiersFromToday:(id)arg0 ;
-(void)widgetDiscoveryController:(id)arg0 didChangeWidgetsPinning:(BOOL)arg1 ;
-(void)widgetDiscoveryController:(id)arg0 didEndUsingStatusBarAssertion:(id)arg1 ;
-(void)widgetDiscoveryController:(id)arg0 requestUnlockWithCompletion:(id)arg1 ;
-(void)widgetDiscoveryController:(id)arg0 updateStatusBarAssertion:(id)arg1 withLegibilityStyle:(NSInteger)arg2 ;
-(void)widgetDiscoveryController:(id)arg0 widgetWithBundleIdentifier:(id)arg1 didEncounterProblematicSnapshotAtURL:(id)arg2 ;
-(void)widgetDiscoveryControllerDidDismissWidgetsPinningTeachingView:(id)arg0 ;


@end


#endif