// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIDYNAMICBARANIMATOR_H
#define SKUIDYNAMICBARANIMATOR_H

@class CADisplayLink;
@protocol SKUIDynamicBarAnimatorDelegate;

#import <Foundation/Foundation.h>


@interface SKUIDynamicBarAnimator : NSObject {
    CGFloat _topBarHeightForState;
    CGFloat _bottomBarOffsetForState;
    BOOL _dragging;
    CADisplayLink *_displayLink;
    CGFloat _targetTopBarHeight;
    CGFloat _unroundedTopBarHeight;
    CGFloat _lastUnroundedTopBarHeight;
    BOOL _didHideBarsByMoving;
    BOOL _didHideOrShowBarsExplicitly;
    CGFloat _lastOffset;
    BOOL _inSteadyState;
}


@property (readonly, nonatomic) CGFloat bottomBarOffset; // ivar: _bottomBarOffset
@property (weak, nonatomic) NSObject<SKUIDynamicBarAnimatorDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat maximumBottomBarOffset; // ivar: _maximumBottomBarOffset
@property (nonatomic) CGFloat minimumTopBarHeight; // ivar: _minimumTopBarHeight
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSInteger targetState;
@property (readonly, nonatomic) CGFloat topBarHeight; // ivar: _topBarHeight


-(BOOL)canTransitionToState:(NSInteger)arg0 ;
-(CGFloat)_bottomBarOffsetForTopBarHeight:(CGFloat)arg0 ;
-(CGFloat)_constrainTopBarHeight:(CGFloat)arg0 ;
-(CGFloat)_topBarHeightForBottomBarOffset:(CGFloat)arg0 ;
-(id)init;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_moveBarsWithDelta:(CGFloat)arg0 ;
-(void)_setInSteadyState:(BOOL)arg0 ;
-(void)_transitionToSteadyState;
-(void)_updateDisplayLink;
-(void)_updateOutputs;
-(void)attemptTransitionToState:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)beginDraggingWithOffset:(CGFloat)arg0 ;
-(void)dealloc;
-(void)endDraggingWithTargetOffset:(CGFloat)arg0 velocity:(CGFloat)arg1 ;
-(void)updateDraggingWithOffset:(CGFloat)arg0 ;


@end


#endif