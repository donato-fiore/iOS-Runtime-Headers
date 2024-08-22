// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIANIMATORSCREENLINK_H
#define UIANIMATORSCREENLINK_H

@class CADisplayLink;

#import <Foundation/Foundation.h>


@interface UIAnimatorScreenLink : NSObject {
    *_UIUpdateSequenceItemInternal _updateSequenceItem;
    CADisplayLink *_displayLink;
    id *_updateAction;
}


@property unsigned short animationCount; // ivar: _animationCount


+(id)startTimerWithScreen:(id)arg0 action:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)onDisplayLink:(id)arg0 ;


@end


#endif