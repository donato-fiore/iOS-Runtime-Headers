// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONWILLOPENURLTESTINGEVENT_H
#define WFACTIONWILLOPENURLTESTINGEVENT_H

@class NSURL, NSString;


#import "WFActionTestingEvent.h"

@interface WFActionWillOpenURLTestingEvent : WFActionTestingEvent

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


-(id)initWithAction:(id)arg0 URL:(id)arg1 bundleIdentifier:(id)arg2 ;


@end


#endif