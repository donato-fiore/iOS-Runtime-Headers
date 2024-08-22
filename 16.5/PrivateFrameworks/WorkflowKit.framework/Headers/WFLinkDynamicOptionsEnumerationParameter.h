// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKDYNAMICOPTIONSENUMERATIONPARAMETER_H
#define WFLINKDYNAMICOPTIONSENUMERATIONPARAMETER_H

@class NSString, LNActionParameterMetadata;
@protocol WFParameterValuePickable, WFPropertyListObject;


#import "WFDynamicEnumerationParameter.h"

@interface WFLinkDynamicOptionsEnumerationParameter : WFDynamicEnumerationParameter <WFParameterValuePickable>



@property (nonatomic) BOOL allowsMultipleValues; // ivar: _allowsMultipleValues
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LNActionParameterMetadata *parameterMetadata; // ivar: _parameterMetadata
@property (readonly, nonatomic) NSObject<WFPropertyListObject> *serializedDefaultParameterOption; // ivar: _serializedDefaultParameterOption
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wf_allowsMultipleSelection;
@property (readonly, nonatomic) BOOL wf_alwaysScaleIconImage;
@property (readonly, nonatomic) NSString *wf_displayLocalizedPrompt;
@property (readonly, nonatomic) BOOL wf_shouldValidateCurrentStateOnCollectionChanged;
@property (readonly, nonatomic) BOOL wf_supportsSearch;
@property (readonly, nonatomic) BOOL wf_usesGroupTableViewStyle;
@property (readonly, nonatomic) BOOL wf_usesTogglesForSelection;


-(BOOL)alwaysShowsButton;
-(BOOL)displaysMultipleValueEditor;
-(BOOL)dynamicOptionsSupportsSearch;
-(BOOL)hidesSubtitleInEditor;
-(BOOL)parameterStateIsValid:(id)arg0 ;
-(BOOL)preferParameterValuePicker;
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedTitleForButtonWithState:(id)arg0 ;
-(id)statesForMultipleStateLabelWithStates:(id)arg0 ;
-(id)wf_pickerLocalizedSubtitleForState:(id)arg0 ;
-(id)wf_pickerLocalizedTitleForState:(id)arg0 ;
-(void)createDialogRequestWithAttribution:(id)arg0 defaultState:(id)arg1 prompt:(id)arg2 completionHandler:(id)arg3 ;
-(void)wf_loadStatesWithSearchTerm:(id)arg0 completionHandler:(id)arg1 ;
-(void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id)arg0 ;


@end


#endif