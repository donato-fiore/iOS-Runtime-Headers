// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHARNESSINTERACTION_H
#define WFHARNESSINTERACTION_H


#import <Foundation/Foundation.h>

#import "WFHarnessActionSelector.h"

@interface WFHarnessInteraction : NSObject

@property (readonly, nonatomic) Class dialogRequestClass; // ivar: _dialogRequestClass
@property (readonly, nonatomic) id *interaction; // ivar: _interaction
@property (readonly, nonatomic) WFHarnessActionSelector *selector; // ivar: _selector


-(id)initWithSelector:(id)arg0 dialogRequestClass:(Class)arg1 interaction:(id)arg2 ;


@end


#endif