// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWPARAMETERSTATEDESCRIPTOR_H
#define WFWORKFLOWPARAMETERSTATEDESCRIPTOR_H

@class NSString, NSDictionary;
@protocol MTLJSONSerializing, NSSecureCoding;


#import "MTLModel.h"

@interface WFWorkflowParameterStateDescriptor : MTLModel <MTLJSONSerializing, NSSecureCoding>



@property (readonly, nonatomic) NSString *cachedDisplayName; // ivar: _cachedDisplayName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSelf; // ivar: _isSelf
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *workflowIdentifier; // ivar: _workflowIdentifier
@property (readonly, copy, nonatomic) NSString *workflowName; // ivar: _workflowName


+(BOOL)supportsSecureCoding;
+(NSUInteger)storageBehaviorForPropertyWithKey:(id)arg0 ;
+(id)JSONKeyPathsByPropertyKey;
-(id)displayNameWithDatabase:(id)arg0 containingWorkflow:(id)arg1 ;
-(id)initWithWorkflowName:(id)arg0 workflowIdentifier:(id)arg1 isSelf:(BOOL)arg2 ;
-(id)initWithWorkflowReference:(id)arg0 isSelf:(BOOL)arg1 ;
-(id)matchingWorkflowInDatabase:(id)arg0 containingWorkflow:(id)arg1 ;


@end


#endif