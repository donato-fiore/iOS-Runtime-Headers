// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHANDLECUSTOMINTENTACTION_H
#define WFHANDLECUSTOMINTENTACTION_H

@class INIntentCodableDescription, INIntentResponseCodableDescription, NSString, NSDictionary, NSArray, INIntentDescriptor, INSchema;
@protocol WFCustomIntentDynamicEnumerationDataSource, WFDynamicResolveParameterDataSource, WFIntentDynamicResolverDataSource;


#import "WFHandleIntentAction.h"
#import "WFIntentDynamicResolver.h"
#import "WFIntentDynamicResolutionRequest.h"

@interface WFHandleCustomIntentAction : WFHandleIntentAction <WFCustomIntentDynamicEnumerationDataSource, WFDynamicResolveParameterDataSource, WFIntentDynamicResolverDataSource>

 {
    INIntentCodableDescription *_codableDescription;
    INIntentResponseCodableDescription *_responseCodableDescription;
    NSString *_localizedName;
    NSString *_localizedKeyParameterDisplayName;
    NSDictionary *_descriptionDictionary;
    NSArray *_parameterDefinitions;
    id *_parameterSummaryDefinition;
    NSDictionary *_inputDictionary;
    NSDictionary *_outputDictionary;
    INIntentDescriptor *_intentDescriptor;
}


@property (readonly, copy, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFIntentDynamicResolver *dynamicResolver; // ivar: _dynamicResolver
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFIntentDynamicResolutionRequest *lastDynamicResolutionRequest; // ivar: _lastDynamicResolutionRequest
@property (readonly, nonatomic) INSchema *schema; // ivar: _schema
@property (readonly) Class superclass;


-(BOOL)enumerationAllowsMultipleValues:(id)arg0 ;
-(BOOL)hasLocationParameter;
-(BOOL)intentDescriptorIsSyncedFromOtherDevices;
-(BOOL)isDiscontinued;
-(BOOL)populatesInputFromInputParameter;
-(BOOL)shouldInsertExpandingParameterForParameter:(id)arg0 ;
-(NSInteger)intentCategory;
-(id)actionForAppIdentifier:(id)arg0 ;
-(id)codableDescription;
-(id)copyWithSerializedParameters:(id)arg0 ;
-(id)createBundleAccessGrant;
-(id)createStateForParameter:(id)arg0 fromSerializedRepresentation:(id)arg1 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)generatedIntentWithIdentifier:(id)arg0 input:(id)arg1 processedParameters:(id)arg2 error:(*id)arg3 ;
-(id)generatedResourceNodes;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 schema:(id)arg3 className:(id)arg4 bundleIdentifier:(id)arg5 stringLocalizer:(id)arg6 ;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 schema:(id)arg3 resolvedIntentDescriptor:(id)arg4 stringLocalizer:(id)arg5 ;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 stringLocalizer:(id)arg3 ;
-(id)inputDictionary;
-(id)intentDescription;
-(id)intentDescriptor;
-(id)localizedConfigurationPromptDialogForPamameter:(id)arg0 ;
-(id)localizedKeyParameterDisplayName;
-(id)localizedName;
-(id)name;
-(id)outputDictionary;
-(id)parameterDefinitions;
-(id)parameterKeysIgnoredForParameterSummary;
-(id)parameterSummaryDefinition;
-(id)parametersByIntentSlotName;
-(id)prettyErrorForIntentsExtensionError:(id)arg0 ;
-(id)requiredResourcesForIntentAvailableResource;
-(id)resolver;
-(id)responseCodableDescription;
-(id)serializedParametersForDonatedIntent:(id)arg0 allowDroppingUnconfigurableValues:(BOOL)arg1 ;
-(id)slots;
-(id)titleForINShortcut:(id)arg0 ;
-(void)configureResourcesForParameter:(id)arg0 ;
-(void)dynamicResolveParameterDidEndResolutionSession:(id)arg0 ;
-(void)generateSkeletonIntentForDynamicResolver:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)initializeParameters;
-(void)loadDefaultSerializedRepresentationForEnumeration:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadPossibleStatesForEnumeration:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;
-(void)localizedDisambiguationPromptForItems:(id)arg0 intent:(id)arg1 dynamicResolveParameter:(id)arg2 completion:(id)arg3 ;
-(void)parameterDefaultSerializedRepresentationDidChange:(id)arg0 ;
-(void)resolveOptionsForUserInput:(id)arg0 forDynamicResolveParameter:(id)arg1 completion:(id)arg2 ;
-(void)setIntentDescriptor:(id)arg0 ;
-(void)setUpResolverIfNeededForParameter:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)setupParameter:(id)arg0 ;
-(void)startExecutingIntent:(id)arg0 ;


@end


#endif