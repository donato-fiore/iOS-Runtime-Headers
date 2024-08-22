// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTAPAPPLAYOUTSWITCHERMODIFIEREVENT_H
#define SBTAPAPPLAYOUTSWITCHERMODIFIEREVENT_H



#import "SBSwitcherModifierEvent.h"
#import "SBAppLayout.h"

@interface SBTapAppLayoutSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) NSInteger layoutRole; // ivar: _layoutRole
@property (readonly, nonatomic) NSInteger modifierFlags; // ivar: _modifierFlags
@property (readonly, nonatomic) NSInteger source; // ivar: _source


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 layoutRole:(NSInteger)arg1 modifierFlags:(NSInteger)arg2 ;
-(id)initWithAppLayout:(id)arg0 layoutRole:(NSInteger)arg1 modifierFlags:(NSInteger)arg2 source:(NSInteger)arg3 ;


@end


#endif