// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWDEFERREDKEYFRAMEANIMATION_H
#define _UIVIEWDEFERREDKEYFRAMEANIMATION_H

@class UIViewDeferredAnimation, NSMutableArray;



@interface _UIViewDeferredKeyframeAnimation : UIViewDeferredAnimation {
    NSMutableArray *_animationFrames;
}




-(BOOL)isEmpty;
-(id)_animationFrames;
-(void)_enumerateAnimationFramesForKeyframes:(id)arg0 ;
-(void)_finalize;
-(void)addAnimationFrameForValue:(id)arg0 ;
-(void)animateFrameAtIndex:(NSInteger)arg0 animations:(id)arg1 ;


@end


#endif