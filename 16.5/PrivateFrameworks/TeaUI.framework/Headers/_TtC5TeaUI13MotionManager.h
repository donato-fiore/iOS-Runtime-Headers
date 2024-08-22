// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC5TEAUI13MOTIONMANAGER_H
#define _TTC5TEAUI13MOTIONMANAGER_H

@class SwiftObject;



@interface _TtC5TeaUI13MotionManager : SwiftObject {
    ? observers;
    ? $__lazy_storage_$_displayLinkAnimator;
    ? coreMotionManager;
}




-(void)handleReduceMotionChanged;
-(void)scenDidEnterBackground;
-(void)sceneDidBecomeActive;


@end


#endif