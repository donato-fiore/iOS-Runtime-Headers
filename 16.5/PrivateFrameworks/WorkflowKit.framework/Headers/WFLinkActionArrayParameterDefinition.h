// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKACTIONARRAYPARAMETERDEFINITION_H
#define WFLINKACTIONARRAYPARAMETERDEFINITION_H

@class LNArrayValueType;


#import "WFLinkActionParameterDefinition.h"

@interface WFLinkActionArrayParameterDefinition : WFLinkActionParameterDefinition

@property (readonly, nonatomic) LNArrayValueType *valueType;


-(Class)parameterClass;
-(id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)arg0 ;
-(id)initWithMemberValueType:(id)arg0 parameterMetadata:(id)arg1 ;
-(id)linkValueFromParameterState:(id)arg0 ;
-(id)linkValueFromProcessedParameterValue:(id)arg0 ;
-(id)localizedTitleForLinkValue:(id)arg0 ;
-(id)memberParameterDefinition;
-(id)parameterDefinitionDictionary;
-(id)parameterStateFromLinkValue:(id)arg0 ;
-(void)getLinkValueFromProcessedParameterValue:(id)arg0 parameterState:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif