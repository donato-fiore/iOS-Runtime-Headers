// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTABLETEMPLATEPARAMETER_H
#define WFTABLETEMPLATEPARAMETER_H



#import "WFParameter.h"

@interface WFTableTemplateParameter : WFParameter

@property (readonly, copy, nonatomic) id *additionalRowSerializedRepresentation;
@property (readonly, nonatomic) Class contentItemClass; // ivar: _contentItemClass
@property (readonly, nonatomic, getter=isFilterable) BOOL filterable; // ivar: _filterable


-(BOOL)allowsMultipleValues;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)defaultSupportedVariableTypes;
-(id)importQuestionBehavior;
-(id)initWithDefinition:(id)arg0 ;


@end


#endif