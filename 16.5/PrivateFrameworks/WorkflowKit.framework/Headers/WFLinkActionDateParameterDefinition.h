// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKACTIONDATEPARAMETERDEFINITION_H
#define WFLINKACTIONDATEPARAMETERDEFINITION_H



#import "WFLinkActionParameterDefinition.h"

@interface WFLinkActionDateParameterDefinition : WFLinkActionParameterDefinition



-(Class)parameterClass;
-(id)dateFromStringValue:(id)arg0 error:(*id)arg1 ;
-(id)initWithParameterMetadata:(id)arg0 ;
-(id)linkValueFromParameterState:(id)arg0 ;
-(id)localizedTitleForLinkValue:(id)arg0 ;
-(id)parameterDefinitionDictionary;
-(id)parameterStateFromLinkValue:(id)arg0 ;
-(void)getLinkValueFromProcessedParameterValue:(id)arg0 parameterState:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif