// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTION_H
#define WFACTION_H

@class NSString, NSArray, NSSet, NSDictionary, INAppDescriptor, NSAttributedString, NSMutableDictionary, WFContactStore, NSDate, NSHashTable, WFIcon, WFColor, WFContentCollection, NSProgress;
@protocol WFAppInstalledResourceDelegate, WFUUIDProvider, WFParameterEventObserver, NSCopying, WFVariableProvider, WFActionRemoteUserInterface, WFContentPermissionRequestor, OS_dispatch_queue, WFActionExtendedOperation, WFActionRunningDelegate, WFActionSandboxExtensionProvider, WFUserInterfaceHost, WFVariableDataSource;

#import <Foundation/Foundation.h>

#import "ICApp.h"
#import "WFAppInstalledResource.h"
#import "WFActionAuxiliaryButton.h"
#import "WFContentAttributionTracker.h"
#import "WFParameter.h"
#import "WFActionParameterSummary.h"
#import "WFResourceManager.h"
#import "WFSessionKitAssertion.h"
#import "WFActionSessionKitSessionConfiguration.h"
#import "WFContextualActionSuggestionMetadata.h"
#import "WFWorkflow.h"

@interface WFAction : NSObject <WFAppInstalledResourceDelegate, WFUUIDProvider, WFParameterEventObserver, NSCopying, WFVariableProvider>



@property (copy, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSString *accessibilityName;
@property (retain, nonatomic) NSObject<WFActionRemoteUserInterface> *actionUserInterface; // ivar: _actionUserInterface
@property (readonly, nonatomic) NSArray *additionalParameterSummaries;
@property (readonly, nonatomic) NSArray *additionalParameterSummaryDefinitions;
@property (readonly, nonatomic) NSSet *allPossibleDescriptionRequires;
@property (readonly, nonatomic) NSArray *allPossibleDescriptionResults;
@property (copy, nonatomic) NSSet *allowedOnceSmartPromptStates; // ivar: _allowedOnceSmartPromptStates
@property (copy, nonatomic) NSSet *allowedOnceSmartPromptStates;
@property (readonly, nonatomic) ICApp *app;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSDictionary *appDefinition;
@property (retain, nonatomic) INAppDescriptor *appDescriptor; // ivar: _appDescriptor
@property (retain, nonatomic) INAppDescriptor *appDescriptor;
@property (readonly, nonatomic) ICApp *appForDisplay;
@property (retain, nonatomic) WFAppInstalledResource *appResource; // ivar: _appResource
@property (retain, nonatomic) WFAppInstalledResource *appResource;
@property (readonly, nonatomic) NSString *appSection;
@property (readonly, nonatomic) NSUInteger appearance;
@property (readonly, nonatomic) NSAttributedString *attributedLocalizedName;
@property (readonly, nonatomic) NSString *attribution;
@property (retain, nonatomic) WFActionAuxiliaryButton *auxiliaryButton; // ivar: _auxiliaryButton
@property (readonly, nonatomic) NSArray *availableOutputActions;
@property (readonly, nonatomic) NSArray *availableVariableNames;
@property (readonly, nonatomic) BOOL blocksSnapping;
@property (retain, nonatomic) NSMutableDictionary *cachedDefaultParameterStates; // ivar: _cachedDefaultParameterStates
@property (readonly, nonatomic) NSArray *categories;
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) Class configurationViewClass;
@property (readonly, nonatomic, getter=isConstructorAction) BOOL constructorAction;
@property (readonly, nonatomic) WFContactStore *contactStore;
@property (readonly, nonatomic) WFContactStore *contactStore;
@property (retain, nonatomic) WFContentAttributionTracker *contentAttributionTracker; // ivar: _contentAttributionTracker
@property (retain, nonatomic) WFContentAttributionTracker *contentAttributionTracker;
@property (readonly, nonatomic) Class contentItemClass;
@property (retain, nonatomic) NSObject<WFContentPermissionRequestor> *contentPermissionRequestor; // ivar: _contentPermissionRequestor
@property (retain, nonatomic) NSObject<WFContentPermissionRequestor> *contentPermissionRequestor;
@property (readonly, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSArray *currentGeneratedResourceNodes; // ivar: _currentGeneratedResourceNodes
@property (readonly, nonatomic, getter=isDebugAction) BOOL debugAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultOutputName;
@property (readonly, copy, nonatomic) NSDictionary *definition; // ivar: _definition
@property (readonly, nonatomic) BOOL deletesInput;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *descriptionDictionary;
@property (readonly, nonatomic) NSString *descriptionInput;
@property (readonly, nonatomic) NSString *descriptionNote;
@property (readonly, nonatomic) NSString *descriptionOfAccessResources;
@property (readonly, nonatomic) NSString *descriptionRequires;
@property (readonly, nonatomic) NSString *descriptionResult;
@property (readonly, nonatomic) NSString *descriptionSummary;
@property (nonatomic) BOOL didRunRemotely; // ivar: _didRunRemotely
@property (nonatomic) BOOL didRunRemotely;
@property (readonly, nonatomic) NSArray *disabledOnPlatforms;
@property (readonly, nonatomic, getter=isDiscontinued) BOOL discontinued;
@property (readonly, nonatomic, getter=isDiscoverable) BOOL discoverable;
@property (readonly, nonatomic, getter=isDiscoverableInSearch) BOOL discoverableInSearch;
@property (readonly, nonatomic) INAppDescriptor *displayableAppDescriptor;
@property (readonly, nonatomic) INAppDescriptor *displayableAppDescriptor;
@property (readonly, nonatomic) BOOL displaysParameterSummary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *effectiveWorkQueue; // ivar: _effectiveWorkQueue
@property (readonly, nonatomic) NSHashTable *eventObservers; // ivar: _eventObservers
@property (retain, nonatomic) NSObject<WFActionExtendedOperation> *extendedOperation; // ivar: _extendedOperation
@property (retain, nonatomic) NSObject<WFActionExtendedOperation> *extendedOperation;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) NSString *focusFilterDescription;
@property (copy, nonatomic) NSString *groupingIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL highRisk;
@property (readonly, nonatomic) WFIcon *icon;
@property (readonly, nonatomic) WFColor *iconColor;
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, nonatomic) NSString *iconSymbolName;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSSet *ignoredParameterKeysForProcessing; // ivar: _ignoredParameterKeysForProcessing
@property (retain, nonatomic) NSDictionary *initialSerializedParameters; // ivar: _initialSerializedParameters
@property (readonly, nonatomic) NSInteger initialSuggestionBehavior;
@property (readonly, nonatomic) WFContentCollection *input; // ivar: _input
@property (readonly, nonatomic) NSArray *inputContentClasses; // ivar: _inputContentClasses
@property (readonly, nonatomic) NSDictionary *inputDictionary;
@property (readonly, nonatomic) WFParameter *inputParameter;
@property (readonly, nonatomic) NSString *inputParameterKey;
@property (nonatomic) BOOL inputParameterUnlocked; // ivar: _inputParameterUnlocked
@property (readonly, nonatomic) BOOL inputPassthrough;
@property (readonly, nonatomic) BOOL inputRequired;
@property (readonly, nonatomic) BOOL inputTypeDeterminesOutputType;
@property (readonly, nonatomic) BOOL inputTypePassthrough;
@property (readonly, nonatomic) NSArray *inputTypes;
@property (readonly, nonatomic) BOOL inputsMultipleItems;
@property (readonly, nonatomic) BOOL isDeletable;
@property (readonly, nonatomic) BOOL isProgressIndeterminate;
@property (readonly, nonatomic) BOOL isRelevantToUser;
@property (readonly, nonatomic) NSArray *keyCommands;
@property (readonly, nonatomic) NSArray *keyCommands;
@property (readonly, nonatomic) NSArray *keywords;
@property (readonly, nonatomic, getter=isLastAction) BOOL lastAction;
@property (readonly, nonatomic, getter=isLastAction) BOOL lastAction;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSString *localizedAttribution;
@property (readonly, nonatomic) NSArray *localizedCategories;
@property (readonly, nonatomic) NSString *localizedDefaultDisambiguationPrompt;
@property (readonly, nonatomic) NSString *localizedDefaultDisambiguationPrompt;
@property (readonly, nonatomic) NSString *localizedDefaultOutputName;
@property (readonly, nonatomic) NSAttributedString *localizedDescriptionAttribution;
@property (readonly, nonatomic) NSString *localizedDescriptionInput;
@property (readonly, nonatomic) NSString *localizedDescriptionNote;
@property (readonly, nonatomic) NSString *localizedDescriptionRequires;
@property (readonly, nonatomic) NSString *localizedDescriptionResult;
@property (readonly, nonatomic) NSString *localizedDescriptionSummary;
@property (readonly, nonatomic) NSString *localizedFocusFilterDescription;
@property (readonly, nonatomic) NSAttributedString *localizedFooter;
@property (readonly, copy, nonatomic) NSString *localizedKeyParameterDisplayName;
@property (readonly, copy, nonatomic) NSString *localizedKeyParameterDisplayName;
@property (readonly, nonatomic) NSArray *localizedKeywords;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedShortName;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) BOOL locallyProcessesData;
@property (readonly, copy, nonatomic) NSString *metricsIdentifier;
@property (readonly, nonatomic) BOOL mightSuppressRunningProgress;
@property (readonly, nonatomic, getter=isMissing) BOOL missing;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL neverSuggested;
@property (readonly, nonatomic) os_unfair_lock_s observersLock; // ivar: _observersLock
@property (retain, nonatomic) WFContentCollection *output; // ivar: _output
@property (readonly, nonatomic) NSArray *outputContentClasses; // ivar: _outputContentClasses
@property (readonly, nonatomic) NSDictionary *outputDictionary;
@property (readonly, nonatomic) NSUInteger outputDisclosureLevel;
@property (readonly, nonatomic) WFIcon *outputIcon;
@property (readonly, nonatomic) BOOL outputIsRenamed;
@property (readonly, nonatomic) NSString *outputMeasurementUnitType;
@property (copy, nonatomic) NSString *outputName;
@property (readonly, nonatomic) NSArray *outputTypes;
@property (readonly, nonatomic) BOOL outputsMultipleItems;
@property (readonly, nonatomic) NSUInteger parameterCollapsingBehavior;
@property (readonly, nonatomic) NSArray *parameterDefinitions;
@property (readonly, nonatomic) os_unfair_lock_s parameterInitializationLock; // ivar: _parameterInitializationLock
@property (readonly, nonatomic) WFActionParameterSummary *parameterSummary;
@property (readonly, nonatomic) id *parameterSummaryDefinition;
@property (readonly, nonatomic) NSString *parameterSummaryString;
@property (readonly, nonatomic) NSArray *parameters; // ivar: _parameters
@property (readonly, copy, nonatomic) NSDictionary *parametersByKey; // ivar: _parametersByKey
@property (readonly, copy, nonatomic) NSDictionary *parametersByKey;
@property (readonly, nonatomic) BOOL populatesInputFromInputParameter;
@property (readonly, nonatomic) BOOL populatesInputFromInputParameter;
@property (readonly, nonatomic) BOOL prefersActionAttribution;
@property (readonly, nonatomic) BOOL prefersActionAttribution;
@property (copy, nonatomic) NSDictionary *processedParameters; // ivar: _processedParameters
@property (copy, nonatomic) NSDictionary *processedParameters;
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) NSInteger rateLimitDelay;
@property (readonly, nonatomic) NSInteger rateLimitThreshold;
@property (readonly, nonatomic) NSInteger rateLimitTimeout;
@property (readonly, nonatomic) NSArray *remoteExecuteOnPlatforms;
@property (readonly, nonatomic) NSArray *requiredResources;
@property (readonly, nonatomic) BOOL requiresRemoteExecution;
@property (readonly, nonatomic) BOOL requiresUnlock;
@property (readonly, nonatomic, getter=isResidentCompatible) BOOL residentCompatible;
@property (readonly, nonatomic) WFResourceManager *resourceManager; // ivar: _resourceManager
@property (readonly, nonatomic) os_unfair_lock_s resourceManagerLock; // ivar: _resourceManagerLock
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (readonly, nonatomic) NSObject<WFActionRunningDelegate> *runningDelegate; // ivar: _runningDelegate
@property (readonly, nonatomic) NSObject<WFActionRunningDelegate> *runningDelegate;
@property (readonly, nonatomic) NSObject<WFActionSandboxExtensionProvider> *sandboxExtensionProvider;
@property (readonly, nonatomic) NSObject<WFActionSandboxExtensionProvider> *sandboxExtensionProvider;
@property (retain, nonatomic) WFSessionKitAssertion *sessionKitAssertion; // ivar: _sessionKitAssertion
@property (readonly, nonatomic) WFActionSessionKitSessionConfiguration *sessionKitSessionConfiguration;
@property (readonly, nonatomic) NSDictionary *sessionKitSessionConfigurationDefinition;
@property (readonly, nonatomic) NSString *sessionKitSessionInvocationType;
@property (readonly, nonatomic) NSDictionary *settingsUIDefinition;
@property (readonly, nonatomic) Class settingsViewControllerClass;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) BOOL shouldBeIncludedInAppsList;
@property (readonly, nonatomic) BOOL showsSettingsWhenResourcesUnavailable;
@property (readonly, nonatomic) BOOL skipsProcessingHiddenParameters; // ivar: _skipsProcessingHiddenParameters
@property (readonly, nonatomic) BOOL skipsProcessingHiddenParameters;
@property (readonly, nonatomic) BOOL snappingPassthrough;
@property (readonly, nonatomic) NSArray *specifiedInputContentClasses;
@property (readonly, nonatomic) NSArray *specifiedOutputContentClasses;
@property (readonly, nonatomic) NSArray *specifiedOutputContentClasses;
@property (retain, nonatomic) WFContextualActionSuggestionMetadata *suggestionMetadata; // ivar: _suggestionMetadata
@property (retain, nonatomic) WFContextualActionSuggestionMetadata *suggestionMetadata;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *supplementalSerializedParameters; // ivar: _supplementalSerializedParameters
@property (readonly, nonatomic) NSArray *supportedAppIdentifiers;
@property (readonly, nonatomic) NSArray *supportedAppIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *userDefinedParameterStates; // ivar: _userDefinedParameterStates
@property (retain, nonatomic) NSObject<WFUserInterfaceHost> *userInterface; // ivar: _userInterface
@property (readonly, nonatomic) NSDictionary *userInterfaceClasses;
@property (readonly, nonatomic) NSArray *userInterfaceTypes;
@property (readonly, nonatomic) BOOL usesLegacyInputBehavior;
@property (readonly, nonatomic) BOOL usesLegacyInputBehavior;
@property (retain, nonatomic) NSObject<WFVariableDataSource> *variableSource; // ivar: _variableSource
@property (retain, nonatomic) NSObject<WFVariableDataSource> *variableSource;
@property (copy, nonatomic) NSString *widgetSizeClass; // ivar: _widgetSizeClass
@property (copy, nonatomic) NSString *widgetSizeClass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak, nonatomic) WFWorkflow *workflow; // ivar: _workflow
@property (readonly, weak, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) NSArray *workflowInputClasses;


+(id)actionFromSerializedRepresentation:(id)arg0 actionRegistry:(id)arg1 ;
+(id)actionsFromSerializedRepresentations:(id)arg0 actionRegistry:(id)arg1 ;
// +(void)showImplicitChooseFromListWithInput:(id)arg0 userInterface:(id)arg1 workQueue:(id)arg2 cancelHandler:(id)arg3 selectionHandler:(unk)arg4  ;
-(?)runWithInputcompletionHandler;
-(BOOL)allowSessionKitSessionsIfNeededWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)allowSessionKitSessionsIfNeededWithConfiguration:(id)arg0 isManualInvocation:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)allowsAnyURLDestinationWhenAddedToWorkflowByUser;
-(BOOL)canHandleInputOfContentClasses:(id)arg0 withSupportedClasses:(id)arg1 ;
-(BOOL)canHandleInputOfContentClasses:(id)arg0 withSupportedClasses:(id)arg1 includingCoercedTypes:(BOOL)arg2 ;
-(BOOL)containsVariableOfType:(id)arg0 ;
-(BOOL)getInputContentFromVariablesInParameterState:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)hasAvailableActionOutputVariables;
-(BOOL)hasAvailableVariables;
-(BOOL)hasChildren;
-(BOOL)ignoresOutputFromAction:(id)arg0 inWorkflow:(id)arg1 ;
-(BOOL)ignoresOutputFromPreviousActionInWorkflow:(id)arg0 ;
-(BOOL)isDisabledWhenRunOnDevice:(id)arg0 ;
-(BOOL)isSubclassThatOverridesSelector:(SEL)arg0 ;
-(BOOL)isVariableWithNameAvailable:(id)arg0 ;
-(BOOL)isVariableWithOutputUUIDAvailable:(id)arg0 ;
-(BOOL)legacyBehaviorIgnoresOutputFromAction:(id)arg0 inWorkflow:(id)arg1 ;
-(BOOL)requiresHandoffWhenRunWithUserInterfaceType:(id)arg0 ;
-(BOOL)requiresUserInteractionWhenRunWithInput:(id)arg0 ;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(BOOL)setParameterStateToVariable:(id)arg0 forKey:(id)arg1 ;
-(BOOL)shouldAskForValuesWhileProcessingParameterStates;
-(BOOL)shouldBeConnectedToPreviousActionInWorkflow:(id)arg0 withOutputsConsumedByFollowingActions:(id)arg1 ;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg0 inWorkflow:(id)arg1 ;
-(BOOL)shouldDisableSmartPromptChecks;
-(BOOL)shouldInsertExpandingParameterForParameter:(id)arg0 ;
-(BOOL)shouldLocalizeValueForSelector:(SEL)arg0 ;
-(BOOL)showsConnectorToPreviousActionInWorkflow:(id)arg0 ;
-(BOOL)showsImplicitChooseFromListWhenRunWithInput:(id)arg0 ;
-(BOOL)supportsUserInterfaceType:(id)arg0 ;
-(BOOL)takeSessionKitAssertionIfNeededWithError:(*id)arg0 ;
-(id)actionForAppIdentifier:(id)arg0 ;
-(id)actionProvidingVariableWithOutputUUID:(id)arg0 ;
-(id)actionsProvidingVariableName:(id)arg0 ;
-(id)classesForTypeArray:(id)arg0 includeAllOutputTypes:(BOOL)arg1 ;
-(id)colorForName:(id)arg0 ;
-(id)containedVariables;
-(id)containedVariablesOfClass:(Class)arg0 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)contextualActionsForSurface:(NSUInteger)arg0 ;
-(id)copyForDuplicating;
-(id)copyForProcessing;
-(id)copyParameterStates;
-(id)copyParameterStatesWithFallingBackToDefaultValue:(BOOL)arg0 ;
-(id)copyWithDefinition:(id)arg0 serializedParameters:(id)arg1 ;
-(id)copyWithSerializedParameters:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createAccompanyingActions;
-(id)createResourceManager;
-(id)createStateForParameter:(id)arg0 fromSerializedRepresentation:(id)arg1 ;
-(id)customOutputName;
-(id)defaultParameterStateForKey:(id)arg0 ;
-(id)deviceLockedError;
-(id)generateOutputUUIDForAction:(id)arg0 ;
-(id)generateUUIDIfNecessaryWithUUIDProvider:(id)arg0 ;
-(id)generatedResourceNodes;
-(id)inheritedInputVariableInWorkflow:(id)arg0 ;
-(id)inheritedInputVariableInWorkflow:(id)arg0 ignoringInputTypes:(BOOL)arg1 ;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg0 ;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg0 context:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;
-(id)inputSourceInWorkflow:(id)arg0 ;
-(id)itemsBeingDeleted;
-(id)localizedErrorWithLinkError:(id)arg0 ;
-(id)localizedSubcategoryForCategory:(id)arg0 ;
-(id)minimumSupportedClientVersion;
-(id)missingAppError;
-(id)outputVariableWithVariableProvider:(id)arg0 UUIDProvider:(id)arg1 ;
-(id)parameterForKey:(id)arg0 ;
-(id)parameterKeysIgnoredForParameterSummary;
-(id)parameterStateForKey:(id)arg0 ;
-(id)parameterStateForKey:(id)arg0 fallingBackToDefaultValue:(BOOL)arg1 ;
-(id)parameterValueForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)parametersRequiringUserInputAlongsideParameter:(id)arg0 ;
-(id)populatedInputWithProcessedParameterValues:(id)arg0 ;
-(id)possibleContentClassesForVariableNamed:(id)arg0 context:(id)arg1 ;
-(id)previousAction;
-(id)prioritizedParameterKeysForRemoteExecution;
-(id)providedVariableNames;
-(id)serializedParameters;
-(id)serializedParametersForDonatedIntent:(id)arg0 allowDroppingUnconfigurableValues:(BOOL)arg1 ;
-(id)serializedRepresentation;
-(id)smartPromptSubtitleWithPreviousContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(id)subcategoryForCategory:(id)arg0 ;
-(id)supplementalParameterValueForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)typeDescriptionWithTypes:(id)arg0 explanationText:(id)arg1 multiple:(BOOL)arg2 optional:(BOOL)arg3 ;
-(id)visibleParametersForParameterSummary;
-(id)visibleParametersWithProcessing:(BOOL)arg0 ;
-(void)_processParameterStates:(id)arg0 withInput:(id)arg1 skippingHiddenParameters:(BOOL)arg2 askForValuesIfNecessary:(BOOL)arg3 workQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)addEventObserver:(id)arg0 ;
-(void)addVariableObserver:(id)arg0 ;
-(void)appInstalledResource:(id)arg0 didUpdateAppDescriptor:(id)arg1 ;
-(void)askForValuesOfParameters:(id)arg0 withDefaultStates:(id)arg1 prompts:(id)arg2 input:(id)arg3 workQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)cancel;
-(void)checkUserInterfaceAndRun;
-(void)configureParameter:(id)arg0 ;
-(void)configureResourcesForParameter:(id)arg0 ;
-(void)didChangeVariableName:(id)arg0 to:(id)arg1 ;
-(void)dismissPresentedContentWithCompletionHandler:(id)arg0 ;
-(void)enumerateObservers:(id)arg0 ;
-(void)finishRunningWithError:(id)arg0 ;
-(void)getContentDestinationWithCompletionHandler:(id)arg0 ;
-(void)handleTestingEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)initializeParameters;
-(void)initializeParametersIfNecessary;
-(void)initializeParametersWithLock;
-(void)lockInputParameter;
-(void)logDataTransmissionForSmartPromptApprovalResult:(id)arg0 ;
-(void)matchContextualAction:(id)arg0 toContentCollection:(id)arg1 completionHandler:(id)arg2 ;
-(void)notifyEventObserversParameterStateDidChangeForKey:(id)arg0 ;
-(void)parameterDefaultSerializedRepresentationDidChange:(id)arg0 ;
-(void)parameterStateValidityCriteriaDidChange:(id)arg0 ;
-(void)performDataAccessChecksAndRun;
-(void)performDataAccessChecksWithUserInterface:(id)arg0 contentItemCache:(id)arg1 completionHandler:(id)arg2 ;
-(void)performDeletionAuthorizationChecksWithUserInterface:(id)arg0 contentItemCache:(id)arg1 completionHandler:(id)arg2 ;
-(void)performSmartPromptChecksWithUserInterface:(id)arg0 contentDestination:(id)arg1 contentItemCache:(id)arg2 isWebpageCoercion:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)preloadDefaultParameterStatesIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)prepareToProcessWithCompletionHandler:(id)arg0 ;
-(void)presentSmartPromptAuthorizationWithConfiguration:(id)arg0 userInterface:(id)arg1 databaseApprovalResult:(id)arg2 contentDestination:(id)arg3 completionHandler:(id)arg4 ;
-(void)processParameterStates:(id)arg0 withInput:(id)arg1 skippingHiddenParameters:(BOOL)arg2 askForValuesIfNecessary:(BOOL)arg3 workQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)processParametersWithoutAskingForValuesWithInput:(id)arg0 workQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)processParametersWithoutAskingForValuesWithInput:(id)arg0 workQueue:(id)arg1 fallingBackToDefaultValue:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)recreateGeneratedResourcesIfNeeded;
-(void)reloadAuxiliaryButton;
-(void)removeEventObserver:(id)arg0 ;
-(void)removeVariableObserver:(id)arg0 ;
-(void)requestInterfacePresentationWithCompletionHandler:(id)arg0 ;
-(void)requestUnlock:(id)arg0 ;
-(void)requestUnlockIfNeeded:(id)arg0 ;
-(void)resolveAppDescriptorIfNecessary:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runWithInput:(id)arg0 error:(*id)arg1 ;
-(void)runWithInput:(id)arg0 userInterface:(id)arg1 runningDelegate:(id)arg2 variableSource:(id)arg3 workQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;
-(void)setDefaultCoercionOptionsOnContentCollection:(id)arg0 ;
-(void)setDefaultCoercionOptionsOnInputs;
-(void)setSupplementalParameterValue:(id)arg0 forKey:(id)arg1 ;
-(void)snapInputParameterIfNecessary;
-(void)unlockInputParameter;
-(void)updateAppDescriptorInDatabaseWithSelectedApp:(id)arg0 ;
-(void)updateAppDescriptorWithSelectedApp:(id)arg0 ;
-(void)wasAddedToWorkflow:(id)arg0 ;
-(void)wasAddedToWorkflowByUser:(id)arg0 ;
-(void)wasRemovedFromWorkflow:(id)arg0 ;
-(void)willBeAddedToWorkflow:(id)arg0 ;
-(void)willBeginProcessingParameterStates;


@end


#endif