// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIUPDATEHIDINPUT_H
#define _UIUPDATEHIDINPUT_H

@class NSMutableArray;
@protocol _UIUpdateHIDAbstractInput;

#import <Foundation/Foundation.h>


@interface _UIUpdateHIDInput : NSObject <_UIUpdateHIDAbstractInput>

 {
    _UIUpdateInputInternal _input;
    NSMutableArray *_events;
}




-(id)init;
-(struct __IOHIDEvent *)stopEventForModelTime:(NSUInteger)arg0 alignment:(int)arg1 ;
-(void)addEvent:(struct __IOHIDEvent *)arg0 ;
-(void)removeEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif