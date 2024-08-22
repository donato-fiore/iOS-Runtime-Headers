// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBROTATIONDODGINGMODIFIEREVENT_H
#define SBROTATIONDODGINGMODIFIEREVENT_H

@class NSUUID;


#import "SBDodgingModifierEvent.h"

@interface SBRotationDodgingModifierEvent : SBDodgingModifierEvent

@property (readonly, nonatomic) NSInteger fromOrientation; // ivar: _fromOrientation
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger phase; // ivar: _phase
@property (readonly, nonatomic) NSInteger toOrientation; // ivar: _toOrientation


-(NSUInteger)type;
-(id)initWithIdentifier:(id)arg0 fromOrientation:(NSInteger)arg1 toOrientation:(NSInteger)arg2 phase:(NSUInteger)arg3 ;


@end


#endif