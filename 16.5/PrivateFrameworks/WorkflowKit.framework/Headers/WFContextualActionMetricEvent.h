// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTEXTUALACTIONMETRICEVENT_H
#define WFCONTEXTUALACTIONMETRICEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFContextualActionMetricEvent : WFEvent

@property (nonatomic) BOOL hasTrackpad; // ivar: _hasTrackpad
@property (nonatomic) unsigned int itemCount; // ivar: _itemCount
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *source; // ivar: _source


+(Class)codableEventClass;
+(id)serializablePropertyTransformers;


@end


#endif