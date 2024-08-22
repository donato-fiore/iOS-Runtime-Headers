// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHFTRIGGERACTIONSETSBUILDERPARAMETERSTATE_H
#define WFHFTRIGGERACTIONSETSBUILDERPARAMETERSTATE_H

@class NSArray, NSString, HMHome, HFTriggerActionSetsBuilder;
@protocol WFParameterState;

#import <Foundation/Foundation.h>


@interface WFHFTriggerActionSetsBuilderParameterState : NSObject <WFParameterState>



@property (readonly, nonatomic) NSArray *actionSets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSString *homeIdentifier; // ivar: _homeIdentifier
@property (readonly, copy, nonatomic) NSArray *serializedActionSets; // ivar: _serializedActionSets
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFTriggerActionSetsBuilder *triggerActionSetsBuilder;


-(BOOL)isEqual:(id)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithActionSets:(id)arg0 home:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)serializedRepresentation;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif