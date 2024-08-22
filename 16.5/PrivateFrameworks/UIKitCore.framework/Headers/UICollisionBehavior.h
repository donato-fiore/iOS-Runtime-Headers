// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICOLLISIONBEHAVIOR_H
#define UICOLLISIONBEHAVIOR_H

@class NSMutableDictionary, NSArray;
@protocol UICollisionBehaviorDelegate;


#import "UIDynamicBehavior.h"
#import "PKExtendedPhysicsBody.h"

@interface UICollisionBehavior : UIDynamicBehavior {
    BOOL _usesImplicitBounds;
    UIEdgeInsets _implicitBoundsInsets;
    PKExtendedPhysicsBody *_implicitBoundsBody;
    NSMutableDictionary *_boundaryBodies;
    NSMutableDictionary *_boundaryPaths;
    NSUInteger _collisionMode;
    id<UICollisionBehaviorDelegate> *_collisionDelegate;
    unsigned int _groupVID;
    unsigned int _groupBID;
    ? _collisionBehaviorFlags;
}


@property (readonly, copy, nonatomic) NSArray *boundaryIdentifiers;
@property (weak, nonatomic) NSObject<UICollisionBehaviorDelegate> *collisionDelegate;
@property (nonatomic) NSUInteger collisionMode;
@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) BOOL translatesReferenceBoundsIntoBoundary;


+(BOOL)_isPrimitiveBehavior;
-(id)boundaryWithIdentifier:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithItems:(id)arg0 ;
-(void)_addCollisionItem:(id)arg0 ;
-(void)_applySettings;
-(void)_associate;
-(void)_didBeginContact:(id)arg0 ;
-(void)_didEndContact:(id)arg0 ;
-(void)_dissociate;
-(void)_reevaluate:(NSUInteger)arg0 ;
-(void)_registerBodyForIdentifier:(id)arg0 path:(id)arg1 ;
-(void)_registerBoundaryForIdentifier:(id)arg0 path:(id)arg1 ;
-(void)_removeExplicitBoundaryBodies;
-(void)_removeExplicitBoundaryPaths;
-(void)_removeImplicitBoundaries;
-(void)_setCollisions:(BOOL)arg0 forBody:(id)arg1 isEdge:(BOOL)arg2 ;
-(void)_setTranslatesReferenceItemBounds:(BOOL)arg0 intoBoundaryWithInsets:(struct UIEdgeInsets )arg1 ;
-(void)_setupExplicitBoundaries;
-(void)_setupImplicitBoundaries;
-(void)addBoundaryWithIdentifier:(id)arg0 forPath:(id)arg1 ;
-(void)addBoundaryWithIdentifier:(id)arg0 fromPoint:(struct CGPoint )arg1 toPoint:(struct CGPoint )arg2 ;
-(void)addItem:(id)arg0 ;
-(void)removeAllBoundaries;
-(void)removeBoundaryWithIdentifier:(id)arg0 ;
-(void)removeItem:(id)arg0 ;


@end


#endif