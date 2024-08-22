// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKNAVIGATIONPUCKLOCATIONTRACINGEVENT_H
#define VKNAVIGATIONPUCKLOCATIONTRACINGEVENT_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface VKNavigationPuckLocationTracingEvent : NSObject

@property (readonly, nonatomic) NSUUID *locationUUID; // ivar: _locationUUID
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSInteger type; // ivar: _eventType


-(id)initWithEventType:(NSInteger)arg0 timestamp:(CGFloat)arg1 locationUUID:(id)arg2 ;


@end


#endif