// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKACTIONPARAMETERDEFINITION_H
#define WFLINKACTIONPARAMETERDEFINITION_H

@class NSDictionary, LNActionParameterMetadata, LNValueType;

#import <Foundation/Foundation.h>


@interface WFLinkActionParameterDefinition : NSObject

@property (readonly, nonatomic) Class parameterClass;
@property (readonly, nonatomic) NSDictionary *parameterDefinitionDictionary;
@property (readonly, nonatomic) LNActionParameterMetadata *parameterMetadata; // ivar: _parameterMetadata
@property (readonly, nonatomic) NSDictionary *typeSpecificMetadata;
@property (readonly, nonatomic) LNValueType *valueType; // ivar: _valueType


-(BOOL)boolForTypeSpecificMetadataKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(NSInteger)integerForTypeSpecificMetadataKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)arg0 ;
-(id)initWithValueType:(id)arg0 parameterMetadata:(id)arg1 ;
-(id)linkValueFromParameterState:(id)arg0 ;
-(id)linkValueWithValue:(id)arg0 ;
-(id)localizedTitleForLinkValue:(id)arg0 ;
-(id)objectForTypeSpecificMetadataKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)parameterStateFromLinkValue:(id)arg0 ;
-(void)getLinkValueFromProcessedParameterValue:(id)arg0 parameterState:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif