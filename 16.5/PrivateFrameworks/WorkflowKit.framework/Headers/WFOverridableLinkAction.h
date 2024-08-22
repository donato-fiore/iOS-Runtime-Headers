// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFOVERRIDABLELINKACTION_H
#define WFOVERRIDABLELINKACTION_H

@class NSString, NSDictionary;


#import "WFLinkAction.h"
#import "WFActionParameterSummary.h"

@interface WFOverridableLinkAction : WFLinkAction

@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSDictionary *overrideDefaultValuesByParameter;
@property (readonly, nonatomic) NSString *overrideDescriptionSummary;
@property (readonly, nonatomic) NSDictionary *overrideLabelsByParameter;
@property (readonly, nonatomic) NSString *overrideName;
@property (readonly, nonatomic) WFActionParameterSummary *overrideParameterSummary;
@property (readonly, nonatomic) NSDictionary *parameterOverrides;
@property (readonly, nonatomic) NSDictionary *serializationKeysByParameter;
@property (readonly, nonatomic) BOOL shouldOverrideDescription;
@property (readonly, nonatomic) BOOL shouldOverrideName;
@property (readonly, nonatomic) BOOL shouldOverrideParameterLabels;
@property (readonly, nonatomic) BOOL shouldOverrideParameterSummary;
@property (readonly, nonatomic) BOOL shouldOverrideSubcategory;


+(id)inputParameterMetadataWithActionMetadata:(id)arg0 ;
+(id)overrideInputParameterName;
+(id)overrideInputParameterNames;
-(BOOL)isPlatformProvidedUnderstandingAction;
-(BOOL)shouldLocalizeValueForSelector:(SEL)arg0 ;
-(id)descriptionSummary;
-(id)name;
-(id)parameterDefinitions;
-(id)parameterSummary;


@end


#endif