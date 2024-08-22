// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFAUTOSHORTCUTTOGGLEEVENT_H
#define WFAUTOSHORTCUTTOGGLEEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFAutoShortcutToggleEvent : WFEvent

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (copy, nonatomic) NSString *toggleType; // ivar: _toggleType


+(Class)codableEventClass;


@end


#endif