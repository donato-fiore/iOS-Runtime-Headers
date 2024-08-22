// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHARNESSACTIONCONDITIONCONTEXT_H
#define WFHARNESSACTIONCONDITIONCONTEXT_H

@protocol WFVariableDataSource;

#import <Foundation/Foundation.h>


@interface WFHarnessActionConditionContext : NSObject

@property (readonly, nonatomic) NSObject<WFVariableDataSource> *variableDataSource; // ivar: _variableDataSource


-(id)initWithVariableDataSource:(id)arg0 ;


@end


#endif