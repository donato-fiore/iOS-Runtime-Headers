// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBROTATIONSWITCHERMODIFIER_H
#define SBROTATIONSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBRotationSwitcherModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) NSInteger fromInterfaceOrientation; // ivar: _fromInterfaceOrientation
@property (nonatomic) BOOL shouldNotUseAnchorPointToPinLayoutRolesToSpace; // ivar: _shouldNotUseAnchorPointToPinLayoutRolesToSpace
@property (readonly, nonatomic) NSInteger toInterfaceOrientation; // ivar: _toInterfaceOrientation


-(BOOL)shouldPerformRotationAnimationForOrientationChange;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(CGFloat)rotationAngleForIndex:(NSUInteger)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 appLayout:(id)arg1 fromInterfaceOrientation:(NSInteger)arg2 toInterfaceOrientation:(NSInteger)arg3 ;
-(id)keyboardSuppressionMode;
-(id)transitionWillBegin;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif