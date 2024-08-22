// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVOICESHORTCUTMANAGERACCESSWRAPPER_H
#define VCVOICESHORTCUTMANAGERACCESSWRAPPER_H

@class VCAccessSpecifier, NSString;
@protocol VCDaemonXPCInterface, VCSyncDataEndpoint;

#import <Foundation/Foundation.h>

#import "WFWorkflowRunCoordinator.h"
#import "WFShareSheetWorkflowProvider.h"
#import "VCCKShortcutSyncCoordinator.h"
#import "WFTriggerRegistrar.h"
#import "VCVoiceShortcutManager.h"

@interface VCVoiceShortcutManagerAccessWrapper : NSObject <VCDaemonXPCInterface>



@property (readonly, copy, nonatomic) VCAccessSpecifier *accessSpecifier; // ivar: _accessSpecifier
@property (nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFWorkflowRunCoordinator *runCoordinator; // ivar: _runCoordinator
@property (readonly, nonatomic) WFShareSheetWorkflowProvider *shareSheetProvider; // ivar: _shareSheetProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) VCCKShortcutSyncCoordinator *syncCoordinator; // ivar: _syncCoordinator
@property (readonly, nonatomic) NSObject<VCSyncDataEndpoint> *syncDataEndpoint; // ivar: _syncDataEndpoint
@property (readonly, nonatomic) WFTriggerRegistrar *triggerRegistrar; // ivar: _triggerRegistrar
@property (readonly, nonatomic) VCVoiceShortcutManager *voiceShortcutManager; // ivar: _voiceShortcutManager


-(BOOL)allowIncomingRunRequest:(id)arg0 withDescriptor:(id)arg1 ;
-(id)initWithVoiceShortcutManager:(id)arg0 triggerRegistrar:(id)arg1 accessSpecifier:(id)arg2 syncCoordinator:(id)arg3 syncDataEndpoint:(id)arg4 runCoordinator:(id)arg5 auditToken:(struct ? )arg6 ;
-(void)addDefaultShortcutsIfNecessaryWithCompletion:(id)arg0 ;
-(void)addVoiceShortcut:(id)arg0 phrase:(id)arg1 completion:(id)arg2 ;
-(void)archiveAction:(id)arg0 withActionMetadata:(id)arg1 completion:(id)arg2 ;
-(void)checkTriggerStateWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)checkTriggerStateWithKeyPath:(id)arg0 completion:(id)arg1 ;
-(void)computeFinderResizedSizesForImages:(id)arg0 inSizes:(id)arg1 completion:(id)arg2 ;
-(void)createBookmarkWithBookmarkableString:(id)arg0 path:(id)arg1 workflowID:(id)arg2 completion:(id)arg3 ;
-(void)createBookmarkWithURL:(id)arg0 workflowID:(id)arg1 completion:(id)arg2 ;
-(void)createShortcutWithRecordData:(id)arg0 name:(id)arg1 shortcutSource:(id)arg2 completion:(id)arg3 ;
-(void)createSleepWorkflow:(id)arg0 completion:(id)arg1 ;
-(void)deleteSleepWorkflowWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteTriggerWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteVoiceShortcutWithIdentifier:(id)arg0 name:(id)arg1 completion:(id)arg2 ;
-(void)describeSyncStateIncludingDeleted:(BOOL)arg0 completion:(id)arg1 ;
-(void)drawGlyphs:(id)arg0 withBackgroundColorValues:(id)arg1 padding:(CGFloat)arg2 intoContext:(id)arg3 completion:(id)arg4 ;
-(void)drawGlyphs:(id)arg0 withBackgroundColorValues:(id)arg1 padding:(CGFloat)arg2 rounded:(BOOL)arg3 intoContext:(id)arg4 completion:(id)arg5 ;
-(void)fetchURLForFPItem:(id)arg0 completion:(id)arg1 ;
-(void)filterContextualActions:(id)arg0 forContext:(id)arg1 completion:(id)arg2 ;
-(void)fireTriggerWithIdentifier:(id)arg0 force:(BOOL)arg1 completion:(id)arg2 ;
-(void)generateSingleUseTokenForWorkflowIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getConfiguredTriggerDescriptionsWithCompletion:(id)arg0 ;
-(void)getContextualActionsForContext:(id)arg0 completion:(id)arg1 ;
-(void)getFirstUnsortedWorkflowWithCompletion:(id)arg0 ;
-(void)getNumberOfVoiceShortcutsWithCompletion:(id)arg0 ;
-(void)getOnScreenContentWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)getOnScreenContentWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)getResultsForQuery:(id)arg0 resultClassName:(id)arg1 completion:(id)arg2 ;
-(void)getRunningWorkflowNamesAndProgressCompletedWithCompletionHandler:(id)arg0 ;
-(void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg0 hostBundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)getShortcutSuggestionsForAllAppsWithLimit:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getSiriAutoShortcutsEnablementForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getSiriPodcastsDatabaseURLWithCompletion:(id)arg0 ;
-(void)getSleepActionSuggestionsForAllAppsFilteringBySleep:(BOOL)arg0 completion:(id)arg1 ;
-(void)getSleepActionSuggestionsForAllAppsWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)arg0 shouldFilterBySleep:(BOOL)arg1 completion:(id)arg2 ;
-(void)getSortedVisibleFoldersWithCompletion:(id)arg0 ;
-(void)getSortedVisibleWorkflowsByNameWithCompletion:(id)arg0 ;
-(void)getSortedVisibleWorkflowsInCollection:(id)arg0 completion:(id)arg1 ;
-(void)getSortedWorkflowsWithQuery:(id)arg0 completion:(id)arg1 ;
-(void)getSpotlightAutoShortcutsEnablementForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getSpotlightAutoShortcutsEnablementForBundleIdentifier:(id)arg0 phraseSignature:(id)arg1 completion:(id)arg2 ;
-(void)getStingWorkflowWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getStingWorkflowsWithCompletion:(id)arg0 ;
-(void)getValueForDescriptor:(id)arg0 resultClassName:(id)arg1 completion:(id)arg2 ;
-(void)getVoiceShortcutWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getVoiceShortcutWithPhrase:(id)arg0 completion:(id)arg1 ;
-(void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getVoiceShortcutsWithCompletion:(id)arg0 ;
-(void)obliterateShortcuts:(id)arg0 ;
-(void)refreshTriggerWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)requestDataMigration:(id)arg0 ;
-(void)resetAutomationConfirmationStatusWithCompletion:(id)arg0 ;
-(void)resetDefaultShortcutFlagsWithCompletion:(id)arg0 ;
-(void)resolveBookmarkData:(id)arg0 completion:(id)arg1 ;
-(void)resolveCrossDeviceItemID:(id)arg0 completion:(id)arg1 ;
-(void)resolveFilePath:(id)arg0 workflowID:(id)arg1 completion:(id)arg2 ;
-(void)resumeWorkflowFromContext:(id)arg0 presentationMode:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)resumeWorkflowFromContext:(id)arg0 withRequest:(id)arg1 completion:(id)arg2 ;
-(void)runWorkflowWithDescriptor:(id)arg0 request:(id)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)sendAceCommandDictionary:(id)arg0 completion:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 inDomain:(id)arg2 completionHandler:(id)arg3 ;
-(void)setPerWorkflowStateData:(id)arg0 forSmartPromptWithActionUUID:(id)arg1 reference:(id)arg2 completion:(id)arg3 ;
-(void)setShortcutSuggestions:(id)arg0 forAppWithBundleIdentifier:(id)arg1 ;
-(void)setSiriAutoShortcutsEnablement:(BOOL)arg0 forBundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)setSpotlightAutoShortcutsEnablement:(BOOL)arg0 forBundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)setSpotlightAutoShortcutsEnablement:(BOOL)arg0 forBundleIdentifier:(id)arg1 phraseSignature:(id)arg2 completion:(id)arg3 ;
-(void)showSingleStepCompletionForWebClip:(id)arg0 completion:(id)arg1 ;
-(void)stopRunningWorkflowWithRunningContext:(id)arg0 ;
-(void)unarchiveActionFromData:(id)arg0 withActionMetadata:(id)arg1 completion:(id)arg2 ;
-(void)unregisterTriggerWithIdentifier:(id)arg0 triggerBacking:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updateVoiceShortcutWithIdentifier:(id)arg0 phrase:(id)arg1 shortcut:(id)arg2 completion:(id)arg3 ;
-(void)userHasAutomationsWithCompletion:(id)arg0 ;


@end


#endif