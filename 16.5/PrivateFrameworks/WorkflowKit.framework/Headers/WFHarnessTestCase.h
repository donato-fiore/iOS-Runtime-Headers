// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHARNESSTESTCASE_H
#define WFHARNESSTESTCASE_H

@class NSSet, NSMutableSet, NSString, WFContentCollection, WFWorkflowRunDescriptor;

#import <Foundation/Foundation.h>

#import "WFHarnessTestResultExpectation.h"

@interface WFHarnessTestCase : NSObject

@property (readonly, copy, nonatomic) NSSet *conditions; // ivar: _conditions
@property (readonly, nonatomic) NSMutableSet *handledConditions; // ivar: _handledConditions
@property (readonly, nonatomic) NSMutableSet *handledInteractions; // ivar: _handledInteractions
@property (readonly, nonatomic) NSMutableSet *handledSiriInteractions; // ivar: _handledSiriInteractions
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) WFContentCollection *input; // ivar: _input
@property (readonly, copy, nonatomic) NSSet *interactions; // ivar: _interactions
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) WFHarnessTestResultExpectation *resultExpectation; // ivar: _resultExpectation
@property (readonly, nonatomic) WFWorkflowRunDescriptor *runDescriptor; // ivar: _runDescriptor
@property (readonly, copy, nonatomic) NSSet *siriInteractions; // ivar: _siriInteractions


-(id)initWithIdentifier:(id)arg0 name:(id)arg1 workflowRunDescriptor:(id)arg2 input:(id)arg3 interactions:(id)arg4 siriInteractions:(id)arg5 conditions:(id)arg6 resultExpectation:(id)arg7 ;


@end


#endif