// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFRUNSHORTCUTERROREVENT_H
#define WFRUNSHORTCUTERROREVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFRunShortcutErrorEvent : WFEvent

@property (copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (nonatomic) BOOL didRunRemotely; // ivar: _didRunRemotely
@property (copy, nonatomic) NSString *errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (copy, nonatomic) NSString *key; // ivar: _key


+(Class)codableEventClass;


@end


#endif