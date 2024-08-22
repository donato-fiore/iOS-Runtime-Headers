// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVOICESHORTCUTMANAGER_H
#define VCVOICESHORTCUTMANAGER_H

@class WFDatabase, NSString, HMHomeManager;
@protocol HMHomeManagerDelegate, WFDatabaseProvider;

#import <Foundation/Foundation.h>


@interface VCVoiceShortcutManager : NSObject <HMHomeManagerDelegate>



@property (nonatomic) BOOL addingDefaultShortcuts; // ivar: _addingDefaultShortcuts
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property (readonly) Class superclass;


-(BOOL)isPhraseUsable:(id)arg0 inDatabase:(id)arg1 error:(*id)arg2 ;
-(BOOL)lsDatabaseChangedSinceLastCheck;
-(BOOL)phraseHasHomeKitConflict:(id)arg0 ;
-(id)actionWithSerializedParameters:(id)arg0 actionMetadata:(id)arg1 ;
-(id)initWithDatabaseProvider:(id)arg0 eventHandler:(id)arg1 ;
-(void)addDefaultShortcutsWithAccessSpecifier:(id)arg0 completion:(id)arg1 ;
-(void)addDefaultShortcutsWithCompletion:(id)arg0 ;
-(void)addNewFolderWithPersonalizedShortcuts:(id)arg0 completionHandler:(id)arg1 ;
-(void)addVoiceShortcut:(id)arg0 phrase:(id)arg1 accessSpecifier:(id)arg2 completion:(id)arg3 ;
-(void)applicationWasUnregistered:(id)arg0 ;
-(void)archiveAction:(id)arg0 withActionMetadata:(id)arg1 completion:(id)arg2 ;
-(void)createShortcutWithRecordData:(id)arg0 name:(id)arg1 shortcutSource:(id)arg2 accessSpecifier:(id)arg3 completion:(id)arg4 ;
-(void)createSleepWorkflow:(id)arg0 completion:(id)arg1 ;
-(void)deleteSleepWorkflowWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteStaleSuggestions;
-(void)deleteSuggestionsFromApps:(id)arg0 ;
-(void)deleteVoiceShortcutWithIdentifier:(id)arg0 name:(id)arg1 accessSpecifier:(id)arg2 completion:(id)arg3 ;
-(void)drawGlyphs:(id)arg0 withBackgroundColorValues:(id)arg1 padding:(CGFloat)arg2 rounded:(BOOL)arg3 intoContext:(id)arg4 ;
-(void)getDefaultShortcutEligibilityWithCompletion:(id)arg0 ;
-(void)getInactiveAppsWithAccessSpecifier:(id)arg0 completion:(id)arg1 ;
-(void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)arg0 completion:(id)arg1 ;
-(void)getResultsForQuery:(id)arg0 resultClass:(Class)arg1 completion:(id)arg2 ;
-(void)getShortcutSuggestionsForAllAppsWithLimit:(NSUInteger)arg0 accessSpecifier:(id)arg1 completion:(id)arg2 ;
-(void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg0 accessSpecifier:(id)arg1 completion:(id)arg2 ;
-(void)getSiriAutoShortcutsEnablementForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getSleepActionSuggestionsForAllAppsFilteringBySleep:(BOOL)arg0 accessSpecifier:(id)arg1 completion:(id)arg2 ;
-(void)getSleepActionSuggestionsForAllAppsWithOptions:(NSUInteger)arg0 accessSpecifier:(id)arg1 completion:(id)arg2 ;
-(void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)arg0 accessSpecifier:(id)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)arg0 shouldFilterBySleep:(BOOL)arg1 accessSpecifier:(id)arg2 completion:(id)arg3 ;
-(void)getSpotlightAutoShortcutsEnablementForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getValueForDescriptor:(id)arg0 resultClass:(Class)arg1 completion:(id)arg2 ;
-(void)getVoiceShortcutWithIdentifier:(id)arg0 accessSpecifier:(id)arg1 completion:(id)arg2 ;
-(void)getVoiceShortcutWithPhrase:(id)arg0 accessSpecifier:(id)arg1 completion:(id)arg2 ;
-(void)getVoiceShortcutsForAppsWithBundleIdentifiers:(id)arg0 accessSpecifier:(id)arg1 completion:(id)arg2 ;
-(void)getVoiceShortcutsWithAccessSpecifier:(id)arg0 completion:(id)arg1 ;
-(void)isAutoShortcutDisabledForBundleIdentifier:(id)arg0 autoShortcutIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)logHomescreenFastPathRunEventForShortcutWithWebClip:(id)arg0 ;
-(void)requestDataMigrationWithCompletion:(id)arg0 ;
-(void)requestShortcutsSpotlightFullReindex;
-(void)resetDefaultShortcutFlagsWithAccessSpecifier:(id)arg0 completion:(id)arg1 ;
-(void)setAutoShortcutDisabledForBundleIdentifier:(id)arg0 autoShortcutDisabled:(BOOL)arg1 autoShortcutIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)setPerWorkflowStateData:(id)arg0 forSmartPromptWithActionUUID:(id)arg1 reference:(id)arg2 ;
-(void)setShortcutSuggestions:(id)arg0 forAppWithBundleIdentifier:(id)arg1 accessSpecifier:(id)arg2 ;
-(void)setSiriAutoShortcutsEnablement:(BOOL)arg0 forBundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)setSpotlightAutoShortcutsEnablement:(BOOL)arg0 forBundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)unarchiveActionFromData:(id)arg0 withActionMetadata:(id)arg1 completion:(id)arg2 ;
-(void)updateLSDatabaseAnchors;
-(void)updateVoiceShortcutWithIdentifier:(id)arg0 phrase:(id)arg1 shortcut:(id)arg2 accessSpecifier:(id)arg3 completion:(id)arg4 ;


@end


#endif