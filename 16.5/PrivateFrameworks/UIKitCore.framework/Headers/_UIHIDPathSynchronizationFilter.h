// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIHIDPATHSYNCHRONIZATIONFILTER_H
#define _UIHIDPATHSYNCHRONIZATIONFILTER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _UIHIDPathSynchronizationFilter : NSObject {
    CGPoint _initialPosition;
    CGFloat _initialInputTimestamp;
    CGPoint _currentInputPosition;
    CGFloat _currentInputTimestamp;
    CGFloat _outputPositionTimestampInInputScale;
    NSMutableArray *_inputEvents;
    ? _configuration;
    NSInteger _state;
    CGFloat _outputPositionTimestamp;
    CGPoint _outputPosition;
}






@end


#endif