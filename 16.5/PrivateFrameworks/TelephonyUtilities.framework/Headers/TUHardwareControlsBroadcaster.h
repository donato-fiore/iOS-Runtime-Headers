// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUHARDWARECONTROLSBROADCASTER_H
#define TUHARDWARECONTROLSBROADCASTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TUHardwareControlsBroadcaster : NSObject {
    *__IOHIDEventSystemClient _hidEventSystemClientRef;
}


@property (retain) NSString *eventTypeToIgnore; // ivar: _eventTypeToIgnore


-(id)init;
-(void)dealloc;
-(void)longPressTimerFired:(id)arg0 ;


@end


#endif