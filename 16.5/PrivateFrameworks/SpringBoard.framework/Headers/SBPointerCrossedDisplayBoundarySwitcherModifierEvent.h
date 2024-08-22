// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPOINTERCROSSEDDISPLAYBOUNDARYSWITCHERMODIFIEREVENT_H
#define SBPOINTERCROSSEDDISPLAYBOUNDARYSWITCHERMODIFIEREVENT_H



#import "SBSwitcherModifierEvent.h"

@interface SBPointerCrossedDisplayBoundarySwitcherModifierEvent : SBSwitcherModifierEvent

@property (nonatomic) NSUInteger direction; // ivar: _direction
@property (nonatomic) unsigned int edge; // ivar: _edge


-(NSInteger)type;
-(id)initWithDirection:(NSUInteger)arg0 edge:(unsigned int)arg1 ;


@end


#endif