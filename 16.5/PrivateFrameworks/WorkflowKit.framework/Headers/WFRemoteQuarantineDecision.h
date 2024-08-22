// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMOTEQUARANTINEDECISION_H
#define WFREMOTEQUARANTINEDECISION_H

@class NSString, NSDictionary;
@protocol MTLJSONSerializing;


#import "MTLModel.h"

@interface WFRemoteQuarantineDecision : MTLModel <MTLJSONSerializing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (readonly, nonatomic) NSString *errorTitle; // ivar: _errorTitle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger policy; // ivar: _policy
@property (readonly) Class superclass;


+(id)JSONKeyPathsByPropertyKey;


@end


#endif