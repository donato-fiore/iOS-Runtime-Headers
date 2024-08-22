// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHARNESSSIRIINTERACTION_H
#define WFHARNESSSIRIINTERACTION_H


#import <Foundation/Foundation.h>

#import "WFHarnessActionSelector.h"

@interface WFHarnessSiriInteraction : NSObject

@property (readonly, nonatomic) id *interaction; // ivar: _interaction
@property (readonly, nonatomic) WFHarnessActionSelector *selector; // ivar: _selector
@property (readonly, nonatomic) Class siriActionRequestClass; // ivar: _siriActionRequestClass


-(id)initWithSelector:(id)arg0 siriActionRequestClass:(Class)arg1 interaction:(id)arg2 ;


@end


#endif