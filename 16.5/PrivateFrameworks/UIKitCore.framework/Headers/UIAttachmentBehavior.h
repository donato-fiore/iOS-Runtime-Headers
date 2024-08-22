// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIATTACHMENTBEHAVIOR_H
#define UIATTACHMENTBEHAVIOR_H

@class PKPhysicsJoint, NSArray;


#import "UIDynamicBehavior.h"
#import "PKExtendedPhysicsBody.h"

@interface UIAttachmentBehavior : UIDynamicBehavior {
    CGPoint _anchorPoint;
    CGPoint _anchorPointA;
    CGPoint _anchorPointB;
    PKExtendedPhysicsBody *_anchorBody;
    PKPhysicsJoint *_joint;
    CGFloat _damping;
    CGFloat _frequency;
    CGFloat _length;
    CGVector _axis;
    NSUInteger _attachmentType;
    NSInteger _type;
    ? _stateFlags;
}


@property (nonatomic) CGPoint anchorPoint;
@property (readonly, nonatomic) NSInteger attachedBehaviorType; // ivar: _attachedBehaviorType
@property (nonatomic) ? attachmentRange; // ivar: _attachmentRange
@property (nonatomic) CGFloat damping;
@property (nonatomic) CGFloat frequency;
@property (nonatomic) CGFloat frictionTorque; // ivar: _frictionTorque
@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) CGFloat length;


+(BOOL)_isPrimitiveBehavior;
+(id)fixedAttachmentWithItem:(id)arg0 attachedToItem:(id)arg1 attachmentAnchor:(struct CGPoint )arg2 ;
+(id)limitAttachmentWithItem:(id)arg0 offsetFromCenter:(struct UIOffset )arg1 attachedToItem:(id)arg2 offsetFromCenter:(struct UIOffset )arg3 ;
+(id)pinAttachmentWithItem:(id)arg0 attachedToItem:(id)arg1 attachmentAnchor:(struct CGPoint )arg2 ;
+(id)slidingAttachmentWithItem:(id)arg0 attachedToItem:(id)arg1 attachmentAnchor:(struct CGPoint )arg2 axisOfTranslation:(struct CGVector )arg3 ;
+(id)slidingAttachmentWithItem:(id)arg0 attachmentAnchor:(struct CGPoint )arg1 axisOfTranslation:(struct CGVector )arg2 ;
-(NSInteger)type;
-(id)description;
-(id)init;
-(id)initWithItem:(id)arg0 attachedToAnchor:(struct CGPoint )arg1 ;
-(id)initWithItem:(id)arg0 attachedToItem:(id)arg1 ;
-(id)initWithItem:(id)arg0 offsetFromCenter:(struct UIOffset )arg1 attachedToAnchor:(struct CGPoint )arg2 ;
-(id)initWithItem:(id)arg0 offsetFromCenter:(struct UIOffset )arg1 attachedToItem:(id)arg2 offsetFromCenter:(struct UIOffset )arg3 ;
-(id)initWithItem:(id)arg0 point:(struct CGPoint )arg1 attachedToAnchor:(struct CGPoint )arg2 ;
-(id)initWithItem:(id)arg0 point:(struct CGPoint )arg1 attachedToItem:(id)arg2 point:(struct CGPoint )arg3 ;
-(void)_associate;
-(void)_changedParameter;
-(void)_dissociate;
-(void)_reevaluateJoint;
-(void)_updateJointWithRange:(struct ? )arg0 ;


@end


#endif