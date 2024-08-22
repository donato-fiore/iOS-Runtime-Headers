// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYBOARDTYPINGSPEEDLOGGER_H
#define _UIKEYBOARDTYPINGSPEEDLOGGER_H


#import <Foundation/Foundation.h>


@interface _UIKeyboardTypingSpeedLogger : NSObject {
    NSInteger _typingDelaySamples;
    NSInteger _typingDelaySampleCount;
}




-(id)init;
-(void)logToAggregate;
-(void)recordTypingDelay:(CGFloat)arg0 ;


@end


#endif