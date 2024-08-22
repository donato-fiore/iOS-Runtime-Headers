// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDYNAMICENUMERATIONPARAMETER_H
#define WFDYNAMICENUMERATIONPARAMETER_H

@class NSString, NSArray, INObjectCollection, NSError;
@protocol WFParameterValuePickable, WFDynamicEnumerationDataSource;


#import "WFEnumerationParameter.h"

@interface WFDynamicEnumerationParameter : WFEnumerationParameter <WFParameterValuePickable>

 {
    id *_defaultSerializedRepresentation;
}


@property (weak, nonatomic) NSObject<WFDynamicEnumerationDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger defaultValueLoadingState; // ivar: _defaultValueLoadingState
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAsynchronous;
@property (readonly, nonatomic) BOOL loadsDefaultStateAsynchronously;
@property (readonly, nonatomic) NSArray *possibleStates; // ivar: _possibleStates
@property (retain, nonatomic) INObjectCollection *possibleStatesCollection; // ivar: _possibleStatesCollection
@property (readonly, nonatomic) NSError *possibleStatesLoadingError; // ivar: _possibleStatesLoadingError
@property (readonly, nonatomic) NSUInteger possibleStatesLoadingState; // ivar: _possibleStatesLoadingState
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wf_allowsMultipleSelection;
@property (readonly, nonatomic) BOOL wf_alwaysScaleIconImage;
@property (readonly, nonatomic) NSString *wf_displayLocalizedPrompt;
@property (readonly, nonatomic) BOOL wf_shouldValidateCurrentStateOnCollectionChanged;
@property (readonly, nonatomic) BOOL wf_supportsSearch;
@property (readonly, nonatomic) BOOL wf_usesGroupTableViewStyle;
@property (readonly, nonatomic) BOOL wf_usesTogglesForSelection;


-(BOOL)allowsMultipleValues;
-(BOOL)alwaysShowsButton;
-(BOOL)parameterStateIsValid:(id)arg0 ;
-(id)accessoryColorForPossibleState:(id)arg0 ;
-(id)accessoryIconForPossibleState:(id)arg0 ;
-(id)accessoryImageForPossibleState:(id)arg0 ;
-(id)defaultSerializedRepresentation;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)localizedSubtitleLabelForPossibleState:(id)arg0 ;
-(void)clearPossibleStates;
-(void)createDialogRequestWithAttribution:(id)arg0 defaultState:(id)arg1 prompt:(id)arg2 completionHandler:(id)arg3 ;
-(void)defaultSerializedRepresentationDidChange;
-(void)loadDefaultSerializedRepresentationWithCompletionHandler:(id)arg0 ;
-(void)loadPossibleStatesWithCompletionHandler:(id)arg0 ;
-(void)reloadPossibleStates;
-(void)wf_loadStatesWithSearchTerm:(id)arg0 completionHandler:(id)arg1 ;
-(void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id)arg0 ;


@end


#endif