// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSUGGESTAUTOMATIONEVENT_H
#define WFSUGGESTAUTOMATIONEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFSuggestAutomationEvent : WFEvent

@property (nonatomic) BOOL completed; // ivar: _completed
@property (nonatomic) BOOL interacted; // ivar: _interacted
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (copy, nonatomic) NSString *suggestedAutomationIdentifier; // ivar: _suggestedAutomationIdentifier


+(Class)codableEventClass;


@end


#endif