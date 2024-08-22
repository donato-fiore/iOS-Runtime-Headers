// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTENTITEMSETTERACTION_H
#define WFCONTENTITEMSETTERACTION_H

@class NSString, NSArray, WFContentProperty;
@protocol WFDynamicEnumerationDataSource;


#import "WFContentItemAction.h"

@interface WFContentItemSetterAction : WFContentItemAction <WFDynamicEnumerationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *properties;
@property (readonly, nonatomic) WFContentProperty *selectedProperty;
@property (readonly) Class superclass;


-(BOOL)enumerationShouldProvideValuesForParameterSummaryLocalization:(id)arg0 ;
-(BOOL)inputRequired;
-(BOOL)inputsMultipleItems;
-(BOOL)outputsMultipleItems;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)appContentDestinationForSystemAppBundleIdentifier:(id)arg0 ;
-(id)changeTransactionWithInput:(id)arg0 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)defaultOutputName;
-(id)displayStringForTransactionModeState:(id)arg0 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)inputParameterKey;
-(id)keywords;
-(id)name;
-(id)outputContentClasses;
-(id)parameterDefinitions;
-(id)parameterKeyForProperty:(id)arg0 ;
-(id)parameterSummaryDefinition;
-(id)possibleStatesForEnumeration:(id)arg0 ;
-(id)requiredResourceForProperty:(id)arg0 ;
-(id)setAdditionalPropertyIfNecessaryForValue:(id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)initializeParameters;
-(void)presentAlertWithUserInterface:(id)arg0 input:(id)arg1 completion:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)setPromptForSelectedParameter;
-(void)userValueForSelectedPropertyWithCompletion:(id)arg0 ;


@end


#endif