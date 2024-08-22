// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPMORPHANIMATORCONTROLLER_H
#define SBPIPMORPHANIMATORCONTROLLER_H

@class NSString, NSUUID;
@protocol SBViewMorphAnimatorObserver, SBPIPMorphAnimatorControllerDelegate, SBViewMorphAnimatorDataSource;

#import <Foundation/Foundation.h>

#import "SBAppLayout.h"
#import "SBPIPContainerViewController.h"
#import "SBViewMorphAnimator.h"

@interface SBPIPMorphAnimatorController : NSObject <SBViewMorphAnimatorObserver>



@property (copy, nonatomic) id *animatorWaitingForExternalAnimationActionBlock; // ivar: _animatorWaitingForExternalAnimationActionBlock
@property (retain, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (nonatomic) CGRect appLayoutBoundingBox; // ivar: _appLayoutBoundingBox
@property (nonatomic) NSInteger completedTargetAnimations; // ivar: _completedTargetAnimations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBPIPMorphAnimatorControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isGestureInitiated) BOOL gestureInitiated; // ivar: _gestureInitiated
@property (readonly, nonatomic) BOOL hasCompletedSourceAnimations;
@property (readonly, nonatomic) BOOL hasCompletedTargetAnimations;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutRole; // ivar: _layoutRole
@property (weak, nonatomic) SBPIPContainerViewController *pictureInPictureContainerViewController; // ivar: _pictureInPictureContainerViewController
@property (readonly, nonatomic) NSString *scenePersistenceIdentifier; // ivar: _scenePersistenceIdentifier
@property (copy, nonatomic) id *setupCompletionBlock; // ivar: _setupCompletionBlock
@property (readonly) Class superclass;
@property (readonly, nonatomic) int targetProcessIdentifier; // ivar: _targetProcessIdentifier
@property (readonly, nonatomic, getter=isTerminated) BOOL terminated; // ivar: _terminated
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) SBViewMorphAnimator *viewMorphAnimator; // ivar: _viewMorphAnimator
@property (readonly, nonatomic) NSObject<SBViewMorphAnimatorDataSource> *viewMorphAnimatorDataSource; // ivar: _viewMorphAnimatorDataSource


-(BOOL)_isWaitingForExternalAnimationCompletion;
-(id)initWithTargetProcessIdentifier:(int)arg0 scenePersistenceIdentifier:(id)arg1 appLayout:(id)arg2 layoutRole:(NSInteger)arg3 appLayoutBoundingBox:(struct CGRect )arg4 windowScene:(id)arg5 direction:(NSInteger)arg6 gestureInitiated:(BOOL)arg7 delegate:(id)arg8 uuid:(id)arg9 ;
-(id)initWithTargetProcessIdentifier:(int)arg0 scenePersistenceIdentifier:(id)arg1 windowScene:(id)arg2 direction:(NSInteger)arg3 gestureInitiated:(BOOL)arg4 delegate:(id)arg5 uuid:(id)arg6 ;
-(void)_performAnimatorWaitingForExternalAnimationActionBlock;
-(void)_terminate;
-(void)animatorWasInterrupted:(id)arg0 ;
-(void)cancel;
-(void)didEndSourceAnimations:(NSUInteger)arg0 finished:(BOOL)arg1 continueBlock:(id)arg2 ;
-(void)didEndTargetAnimations:(NSUInteger)arg0 finished:(BOOL)arg1 continueBlock:(id)arg2 ;
-(void)interrupt;
-(void)willRemoveTargeMatchMoveAnimationAtFrame:(struct CGRect )arg0 withinSourceFrame:(struct CGRect )arg1 ;
-(void)willStartSourceAnimations:(NSUInteger)arg0 ;


@end


#endif