// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCUSTOMINTENTDYNAMICENUMERATIONPARAMETER_H
#define WFCUSTOMINTENTDYNAMICENUMERATIONPARAMETER_H

@class INCodableAttribute, NSString, INStringLocalizer;
@protocol WFParameterValuePickable, WFCodableAttributeBackedParameter, WFCustomIntentDynamicEnumerationDataSource;


#import "WFDynamicEnumerationParameter.h"

@interface WFCustomIntentDynamicEnumerationParameter : WFDynamicEnumerationParameter <WFParameterValuePickable, WFCodableAttributeBackedParameter>



@property (retain, nonatomic) INCodableAttribute *codableAttribute; // ivar: _codableAttribute
@property (weak, nonatomic) NSObject<WFCustomIntentDynamicEnumerationDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedConfigurationPromptDialog;
@property (retain, nonatomic) INStringLocalizer *stringLocalizer; // ivar: _stringLocalizer
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wf_allowsMultipleSelection;
@property (readonly, nonatomic) BOOL wf_alwaysScaleIconImage;
@property (readonly, nonatomic) NSString *wf_displayLocalizedPrompt;
@property (readonly, nonatomic) BOOL wf_shouldValidateCurrentStateOnCollectionChanged;
@property (readonly, nonatomic) BOOL wf_supportsSearch;
@property (readonly, nonatomic) BOOL wf_usesGroupTableViewStyle;
@property (readonly, nonatomic) BOOL wf_usesTogglesForSelection;


-(BOOL)displaysMultipleValueEditor;
-(BOOL)hidesSubtitleInEditor;
-(BOOL)parameterStateIsValid:(id)arg0 ;
-(BOOL)preferParameterValuePicker;
-(Class)singleStateClass;
-(id)accessoryImageForPossibleState:(id)arg0 ;
-(id)localizedSubtitleLabelForPossibleState:(id)arg0 ;
-(id)wf_pickerLocalizedImageForState:(id)arg0 ;
-(id)wf_pickerLocalizedSubtitleForState:(id)arg0 ;
-(id)wf_pickerLocalizedTitleForState:(id)arg0 ;
-(void)getStatesWithSearchTerm:(id)arg0 completionHandler:(id)arg1 ;
-(void)wf_loadStatesWithSearchTerm:(id)arg0 completionHandler:(id)arg1 ;
-(void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id)arg0 ;


@end


#endif