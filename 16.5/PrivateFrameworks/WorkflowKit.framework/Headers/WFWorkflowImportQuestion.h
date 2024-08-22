// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWIMPORTQUESTION_H
#define WFWORKFLOWIMPORTQUESTION_H

@class NSString;
@protocol WFParameterState;

#import <Foundation/Foundation.h>

#import "WFAction.h"
#import "WFParameter.h"

@interface WFWorkflowImportQuestion : NSObject

@property (readonly, weak, nonatomic) WFAction *action; // ivar: _action
@property (readonly, nonatomic) NSObject<WFParameterState> *defaultState; // ivar: _defaultState
@property (readonly, weak, nonatomic) WFParameter *parameter; // ivar: _parameter
@property (readonly, copy, nonatomic) NSString *question; // ivar: _question


-(id)initWithAction:(id)arg0 parameter:(id)arg1 question:(id)arg2 defaultState:(id)arg3 ;
-(id)initWithSerializedRepresentation:(id)arg0 workflowActions:(id)arg1 ;
-(id)serializedRepresentationWithWorkflowActions:(id)arg0 ;


@end


#endif