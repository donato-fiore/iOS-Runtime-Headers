// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDYNAMICANIMATIONSTATE_H
#define _UIDYNAMICANIMATIONSTATE_H

@class CADisplayLink, NSTimer, NSMutableArray;

#import <Foundation/Foundation.h>

#import "UIScreen.h"

@interface _UIDynamicAnimationState : NSObject {
    UIScreen *_screen;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    NSMutableArray *_activeAnimations;
    CGFloat _lastUpdateTime;
    BOOL _shouldSchedYield;
}






@end


#endif