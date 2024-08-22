// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWRECORD_H
#define WFWORKFLOWRECORD_H

@class NSSet, NSArray, NSString, NSData, NSDate, WFWorkflowIcon, NSDictionary;
@protocol WFNaming;


#import "WFRecord.h"
#import "WFWorkflowQuarantine.h"

@interface WFWorkflowRecord : WFRecord <WFNaming>



@property (copy, nonatomic) NSSet *accessResourcePerWorkflowStates; // ivar: _accessResourcePerWorkflowStates
@property (nonatomic) NSInteger actionCount; // ivar: _actionCount
@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (copy, nonatomic) NSString *actionsDescription; // ivar: _actionsDescription
@property (copy, nonatomic) NSString *associatedAppBundleIdentifier; // ivar: _associatedAppBundleIdentifier
@property (copy, nonatomic) NSData *cloudKitRecordMetadata; // ivar: _cloudKitRecordMetadata
@property (readonly, nonatomic, getter=isConflictOfOtherWorkflow) BOOL conflictOfOtherWorkflow; // ivar: _conflictOfOtherWorkflow
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (nonatomic) BOOL disabledOnLockScreen; // ivar: _disabledOnLockScreen
@property (readonly, nonatomic) NSUInteger estimatedSize; // ivar: _estimatedSize
@property (copy, nonatomic) NSString *galleryIdentifier; // ivar: _galleryIdentifier
@property (nonatomic) BOOL hasOutputFallback; // ivar: _hasOutputFallback
@property (nonatomic) BOOL hasShortcutInputVariables; // ivar: _hasShortcutInputVariables
@property (nonatomic) BOOL hiddenFromLibraryAndSync; // ivar: _hiddenFromLibraryAndSync
@property (nonatomic) BOOL hiddenInComplication; // ivar: _hiddenInComplication
@property (retain, nonatomic) WFWorkflowIcon *icon; // ivar: _icon
@property (copy, nonatomic) NSArray *importQuestions; // ivar: _importQuestions
@property (copy, nonatomic) NSArray *inputClasses; // ivar: _inputClasses
@property (copy, nonatomic) NSString *lastMigratedClientVersion; // ivar: _lastMigratedClientVersion
@property (copy, nonatomic) NSString *lastSavedOnDeviceName; // ivar: _lastSavedOnDeviceName
@property (nonatomic) NSInteger lastSyncedEncryptedSchemaVersion; // ivar: _lastSyncedEncryptedSchemaVersion
@property (nonatomic) NSInteger lastSyncedHash; // ivar: _lastSyncedHash
@property (copy, nonatomic) NSString *legacyName; // ivar: _legacyName
@property (copy, nonatomic) NSString *minimumClientVersion; // ivar: _minimumClientVersion
@property (retain, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSDictionary *noInputBehavior; // ivar: _noInputBehavior
@property (copy, nonatomic) NSArray *outputClasses; // ivar: _outputClasses
@property (retain, nonatomic) WFWorkflowQuarantine *quarantine; // ivar: _quarantine
@property (copy, nonatomic) NSArray *quickActionSurfacesForSharing; // ivar: _quickActionSurfacesForSharing
@property (nonatomic) NSInteger remoteQuarantineStatus; // ivar: _remoteQuarantineStatus
@property (copy, nonatomic) NSSet *smartPromptPerWorkflowStates; // ivar: _smartPromptPerWorkflowStates
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (nonatomic) NSInteger syncHash; // ivar: _syncHash
@property (nonatomic) NSInteger wantedEncryptedSchemaVersion; // ivar: _wantedEncryptedSchemaVersion
@property (readonly, copy, nonatomic) NSString *wfName;
@property (copy, nonatomic) NSString *workflowSubtitle; // ivar: _workflowSubtitle
@property (copy, nonatomic) NSArray *workflowTypes; // ivar: _workflowTypes


+(BOOL)defaultDeleted;
+(BOOL)defaultDisabledOnLockScreen;
+(BOOL)defaultHasOutputFallback;
+(BOOL)defaultHasShortcutInputVariables;
+(NSInteger)defaultActionCount;
+(id)defaultActions;
+(id)defaultCreationDate;
+(id)defaultIcon;
+(id)defaultImportQuestions;
+(id)defaultInputClasses;
+(id)defaultLastMigratedClientVersion;
+(id)defaultLastSavedOnDeviceName;
+(id)defaultModificationDate;
+(id)defaultOutputClasses;
+(id)defaultQuickActionSurfacesForSharing;
+(id)defaultSmartPromptPerWorkflowStates;
+(id)defaultWorkflowTypes;
+(id)workflowSubtitleForActionCount:(NSUInteger)arg0 savedSubtitle:(id)arg1 ;
-(BOOL)addWatchWorkflowTypeIfEligible;
-(BOOL)addWatchWorkflowTypeIfEligibleWithIneligibleActionIdentifiers:(id)arg0 ;
-(BOOL)isEligibleForWatch;
-(BOOL)isEligibleForWatchWithIneligibleActionIdentifiers:(id)arg0 ;
-(BOOL)isEquivalentForSyncTo:(id)arg0 ;
-(BOOL)loadFromPeaceData:(id)arg0 keyImageData:(id)arg1 error:(*id)arg2 ;
-(BOOL)saveChangesToStorage:(id)arg0 error:(*id)arg1 ;
-(id)fileRepresentation;
-(id)initWithPeaceCloudKitRecord:(id)arg0 error:(*id)arg1 ;
-(id)initWithPeaceCoreDataModel:(id)arg0 error:(*id)arg1 ;
-(void)addWatchWorkflowType;


@end


#endif