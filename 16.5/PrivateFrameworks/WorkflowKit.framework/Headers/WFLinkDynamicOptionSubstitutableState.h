// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKDYNAMICOPTIONSUBSTITUTABLESTATE_H
#define WFLINKDYNAMICOPTIONSUBSTITUTABLESTATE_H

@class WFImage, NSString;


#import "WFVariableSubstitutableParameterState.h"

@interface WFLinkDynamicOptionSubstitutableState : WFVariableSubstitutableParameterState

@property (readonly, nonatomic) WFImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) BOOL valueNeedsDisplayRepresentation;


+(Class)processingValueClass;
+(id)serializedIdentifierFromLinkValue:(id)arg0 ;
+(id)serializedRepresentationFromLinkValue:(id)arg0 ;
+(id)serializedRepresentationFromValue:(id)arg0 ;
+(id)valueFromSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
+(id)valueFromSerializedValueRepresentation:(id)arg0 valueType:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)stateIsEquivalent:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithValue:(id)arg0 localizedTitle:(id)arg1 localizedSubtitle:(id)arg2 image:(id)arg3 ;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif