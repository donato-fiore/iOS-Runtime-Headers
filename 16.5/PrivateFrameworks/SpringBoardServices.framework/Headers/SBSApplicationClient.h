// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSAPPLICATIONCLIENT_H
#define SBSAPPLICATIONCLIENT_H



#import "SBSServiceFacilityClient.h"

@interface SBSApplicationClient : SBSServiceFacilityClient



+(id)serviceFacilityIdentifier;
-(id)applicationShortcutItemsOfTypes:(NSUInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(void)deleteSnapshotsForApplicationIdentifier:(id)arg0 ;
-(void)fetchApplicationShortcutItemsOfTypes:(NSUInteger)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)fetchSupportedMultitaskingShortcutActionsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)arg0 withCompletionHandler:(id)arg1 ;
-(void)performMultitaskingShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(void)requestShelfPresentationForSceneWithIdentifier:(id)arg0 ;
-(void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)arg0 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg0 bundleIdentifier:(id)arg1 ;


@end


#endif