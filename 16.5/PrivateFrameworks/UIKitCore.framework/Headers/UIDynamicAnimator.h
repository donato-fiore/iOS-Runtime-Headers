// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDYNAMICANIMATOR_H
#define UIDYNAMICANIMATOR_H

@class CADisplayLink, NSMutableDictionary, NSMutableArray, NSMutableSet, NSMutableIndexSet, NSArray;
@protocol _UIDynamicReferenceSystem, UIDynamicAnimatorDelegate;

#import <Foundation/Foundation.h>

#import "PKExtendedPhysicsWorld.h"
#import "UIDynamicsDebug.h"
#import "UIView.h"
#import "UIDynamicAnimatorTicker.h"

@interface UIDynamicAnimator : NSObject {
    PKExtendedPhysicsWorld *_world;
    CADisplayLink *_displaylink;
    CGFloat _elapsedTime;
    CGFloat _realElapsedTime;
    CGFloat _lastUpdateTime;
    CGFloat _lastInterval;
    NSInteger _ticks;
    UIDynamicsDebug *_dynamicsDebug;
    NSMutableDictionary *_bodies;
    NSMutableArray *_topLevelBehaviors;
    NSMutableSet *_registeredBehaviors;
    NSMutableSet *_behaviorsToRemove;
    NSMutableSet *_behaviorsToAdd;
    NSMutableIndexSet *_availableFieldCategories;
    NSMutableArray *_postSolverActions;
    NSMutableArray *_beginContacts;
    NSMutableArray *_endContacts;
    BOOL _isInWorldStepMethod;
    BOOL _needsLocalBehaviorReevaluation;
    BOOL _stopping;
    NSUInteger _referenceSystemType;
    NSUInteger _integralization;
    ? _stateFlags;
    CGFloat _accuracy;
    int _registeredCollisionGroups;
    int _registeredImplicitBounds;
    CGRect _referenceSystemBounds;
    id<_UIDynamicReferenceSystem> *_referenceSystem;
    int _debugInterval;
    BOOL _debugEnabled;
    id *_action;
    id<UIDynamicAnimatorDelegate> *_delegate;
    BOOL _disableDisplayLink;
    CGFloat _speed;
}


@property (readonly, copy, nonatomic) NSArray *behaviors;
@property (weak, nonatomic) NSObject<UIDynamicAnimatorDelegate> *delegate;
@property (readonly, nonatomic) CGFloat elapsedTime;
@property (readonly, nonatomic) UIView *referenceView;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (retain, nonatomic) UIDynamicAnimatorTicker *ticker; // ivar: _ticker


+(id)_allDynamicAnimators;
+(void)_clearReferenceViewFromAnimators:(id)arg0 ;
+(void)_referenceViewSizeChanged:(id)arg0 ;
+(void)_registerAnimator:(id)arg0 ;
+(void)_unregisterAnimator:(id)arg0 ;
+(void)initialize;
-(BOOL)_alwaysDisableDisplayLink;
-(BOOL)_animatorStep:(CGFloat)arg0 ;
-(BOOL)_containsBehavior:(id)arg0 ;
-(BOOL)_debugEnabled;
-(BOOL)_isWorldActive;
-(BOOL)isDebugEnabled;
-(CGFloat)_animatorInterval;
-(CGFloat)_ptmRatio;
-(CGFloat)_realElapsedTime;
-(CGFloat)_speed;
-(CGFloat)debugAnimationSpeed;
-(NSInteger)_ticks;
-(NSUInteger)_animatorIntegralization;
-(NSUInteger)_referenceSystemType;
-(NSUInteger)debugFrameInterval;
-(id)_bodyForItem:(id)arg0 ;
-(id)_keyForItem:(id)arg0 ;
-(id)_newBodyForItem:(id)arg0 inItemGroup:(id)arg1 ;
-(id)_referenceSystem;
-(id)_registerBodyForItem:(id)arg0 ;
-(id)_world;
-(id)description;
-(id)init;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithReferenceSystem:(id)arg0 ;
-(id)initWithReferenceView:(id)arg0 ;
-(id)itemsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForCellAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)recursiveDescription;
-(int)_debugInterval;
-(int)_registerCollisionGroup;
-(struct CGRect )_referenceSystemBounds;
-(void)_checkBehavior:(id)arg0 ;
-(void)_clearReferenceView;
-(void)_defaultMapper:(id)arg0 position:(struct CGPoint )arg1 angle:(CGFloat)arg2 itemType:(NSUInteger)arg3 ;
-(void)_displayLinkTick:(id)arg0 ;
-(void)_evaluateLocalBehaviors;
-(void)_postSolverStep;
-(void)_preSolverStep;
-(void)_reevaluateImplicitBounds;
-(void)_registerBehavior:(id)arg0 ;
-(void)_registerFieldCategoryForFieldBehavior:(id)arg0 ;
-(void)_registerImplicitBounds;
-(void)_reportBeginContacts;
-(void)_reportEndContacts;
-(void)_runBlockPostSolverIfNeeded:(id)arg0 ;
-(void)_setAction:(id)arg0 ;
-(void)_setAlwaysDisableDisplayLink:(BOOL)arg0 ;
-(void)_setAnimatorIntegralization:(NSUInteger)arg0 ;
-(void)_setDebugEnabled:(BOOL)arg0 ;
-(void)_setDebugInterval:(int)arg0 ;
-(void)_setReferenceSystem:(id)arg0 ;
-(void)_setSpeed:(CGFloat)arg0 ;
-(void)_setupWorld;
-(void)_shouldReevaluateLocalBehaviors;
-(void)_start;
-(void)_stop;
-(void)_tickle;
-(void)_traverseBehaviorHierarchy:(id)arg0 ;
-(void)_unregisterBehavior:(id)arg0 ;
-(void)_unregisterBodyForItem:(id)arg0 action:(id)arg1 ;
-(void)_unregisterCollisionGroup;
-(void)_unregisterFieldCategoryForFieldBehavior:(id)arg0 ;
-(void)_unregisterImplicitBounds;
-(void)addBehavior:(id)arg0 ;
-(void)dealloc;
-(void)didBeginContact:(id)arg0 ;
-(void)didEndContact:(id)arg0 ;
-(void)removeAllBehaviors;
-(void)removeBehavior:(id)arg0 ;
-(void)setDebugAnimationSpeed:(CGFloat)arg0 ;
-(void)setDebugEnabled:(BOOL)arg0 ;
-(void)setDebugFrameInterval:(NSUInteger)arg0 ;
-(void)updateItemFromCurrentState:(id)arg0 ;
-(void)updateItemUsingCurrentState:(id)arg0 ;


@end


#endif