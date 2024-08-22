// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFGALLERYSESSIONADDSHORTCUTEVENT_H
#define WFGALLERYSESSIONADDSHORTCUTEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFGallerySessionAddShortcutEvent : WFEvent

@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (copy, nonatomic) NSString *shortcutIdentifier; // ivar: _shortcutIdentifier


+(Class)codableEventClass;


@end


#endif