// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISCROLLVIEWASYNCSCROLLDECELERATIONSTATE_H
#define _UISCROLLVIEWASYNCSCROLLDECELERATIONSTATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "UIScrollEvent.h"

@interface _UIScrollViewAsyncScrollDecelerationState : NSObject {
    CGFloat _lastUpdateTime;
    UIScrollEvent *_scrollEvent;
    CGVector _velocity;
    NSMutableArray *_enqueuedCompletionResults;
    BOOL _deliveredFinishedDecelerating;
}






@end


#endif