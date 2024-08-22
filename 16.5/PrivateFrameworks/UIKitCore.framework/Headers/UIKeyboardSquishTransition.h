// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDSQUISHTRANSITION_H
#define UIKEYBOARDSQUISHTRANSITION_H

@class NSArray, CADisplayLink;


#import "UIKeyboardKeyplaneTransition.h"

@interface UIKeyboardSquishTransition : UIKeyboardKeyplaneTransition {
    CGFloat _widthRatio;
    CGFloat _offsetX;
}


@property (nonatomic) NSUInteger animationType; // ivar: _animationType
@property (retain, nonatomic) NSArray *commonVisibleKeys; // ivar: _commonVisibleKeys
@property (nonatomic) BOOL disableMeshOptimization; // ivar: _disableMeshOptimization
@property (retain, nonatomic) NSArray *endGeometries; // ivar: _endGeometries
@property (nonatomic) CGFloat opacityAnimationBeginTime; // ivar: _opacityAnimationBeginTime
@property (nonatomic) BOOL opacityAnimationDirectionForward; // ivar: _opacityAnimationDirectionForward
@property (retain, nonatomic) CADisplayLink *opacityAnimationDisplayLink; // ivar: _opacityAnimationDisplayLink
@property (nonatomic) CGFloat previousProgress; // ivar: _previousProgress
@property (retain, nonatomic) NSArray *startGeometries; // ivar: _startGeometries
@property (nonatomic) BOOL useInteractiveOpacity; // ivar: _useInteractiveOpacity


-(BOOL)_allowFacesToAdjoinToAdjacentFaces;
-(id)_animationsForEnd;
-(id)_animationsForStart;
-(id)geometriesForKeyplane:(id)arg0 ;
-(id)meshTransformForKeyplane:(id)arg0 toKeyplane:(id)arg1 ;
-(id)sortedCommonVisibleKeys;
-(id)symmetricMeshTransformForKeyplane:(id)arg0 ;
-(void)_updateTransition;
-(void)commitTransitionRebuild;
-(void)dealloc;
-(void)rebuildWithStartKeyplane:(id)arg0 startView:(id)arg1 endKeyplane:(id)arg2 endView:(id)arg3 ;
-(void)removeAllAnimations;
-(void)updateOpacityAnimation:(id)arg0 ;
-(void)updateWithProgress:(CGFloat)arg0 ;


@end


#endif