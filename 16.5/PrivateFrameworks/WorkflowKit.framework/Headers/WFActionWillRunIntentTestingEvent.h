// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONWILLRUNINTENTTESTINGEVENT_H
#define WFACTIONWILLRUNINTENTTESTINGEVENT_H

@class INIntent;


#import "WFActionTestingEvent.h"

@interface WFActionWillRunIntentTestingEvent : WFActionTestingEvent

@property (readonly, nonatomic) INIntent *intent; // ivar: _intent


-(id)initWithAction:(id)arg0 intent:(id)arg1 ;


@end


#endif