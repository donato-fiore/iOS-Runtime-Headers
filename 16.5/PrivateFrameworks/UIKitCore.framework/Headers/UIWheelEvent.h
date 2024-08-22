// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWHEELEVENT_H
#define UIWHEELEVENT_H

@class NSMutableArray;


#import "UIEvent.h"

@interface UIWheelEvent : UIEvent {
    NSInteger _recentScrollDistance;
    NSMutableArray *_recentScrollEvents;
    NSInteger lastSubtype;
}




-(BOOL)_canHaveVelocity;
-(CGFloat)_wheelVelocity;
-(NSInteger)subtype;
-(NSInteger)type;
-(void)_sendEventToResponder:(id)arg0 ;
-(void)_setHIDEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif