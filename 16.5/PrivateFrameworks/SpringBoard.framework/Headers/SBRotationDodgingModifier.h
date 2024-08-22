// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBROTATIONDODGINGMODIFIER_H
#define SBROTATIONDODGINGMODIFIER_H

@class NSUUID;


#import "SBDodgingModifier.h"

@interface SBRotationDodgingModifier : SBDodgingModifier

@property (nonatomic) NSInteger fromOrientation; // ivar: _fromOrientation
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger phase; // ivar: _phase
@property (nonatomic) NSInteger toOrientation; // ivar: _toOrientation


-(NSInteger)animationBehaviorModeForIdentifier:(id)arg0 ;
-(id)handleRotationEvent:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 fromOrientation:(NSInteger)arg1 toOrientation:(NSInteger)arg2 ;


@end


#endif