// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHARNESSACTIONCONDITION_H
#define WFHARNESSACTIONCONDITION_H


#import <Foundation/Foundation.h>

#import "WFHarnessActionSelector.h"

@interface WFHarnessActionCondition : NSObject

@property (readonly, nonatomic) Class eventClass; // ivar: _eventClass
@property (readonly, copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (readonly, nonatomic) WFHarnessActionSelector *selector; // ivar: _selector


-(id)initWithSelector:(id)arg0 eventClass:(Class)arg1 eventHandler:(id)arg2 ;
-(void)evaluateWithEvent:(id)arg0 context:(id)arg1 withResponse:(id)arg2 ;


@end


#endif