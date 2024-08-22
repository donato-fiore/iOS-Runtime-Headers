// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIHIDEVENTSYNCHRONIZER_H
#define _UIHIDEVENTSYNCHRONIZER_H

@class NSRunLoop, CADisplayLink;

#import <Foundation/Foundation.h>

#import "_UIHIDPath.h"
#import "_UIHIDPathCollection.h"
#import "_UIHIDPathSynchronizationFilter.h"

@interface _UIHIDEventSynchronizer : NSObject {
    NSUInteger _strategy;
    NSInteger _state;
    id *_outputEventsHandler;
    id *_completionHandler;
    NSRunLoop *_runLoop;
    CGPoint _initialPosition;
    CGFloat _timestampOfInitialInputEvent;
    _UIHIDPath *_outputPath;
    _UIHIDPathCollection *_outputPathCollection;
    _UIHIDPathSynchronizationFilter *_pathFilter;
    NSInteger _endingDeliveryPhase;
    CADisplayLink *_displayLink;
    int _offsetToNextCoalescableEventIndex;
}




-(void)_renderEvents:(id)arg0 ;
-(void)dealloc;


@end


#endif