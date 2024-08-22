// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUPDATELAYOUTSWITCHEREVENTRESPONSE_H
#define SBUPDATELAYOUTSWITCHEREVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"

@interface SBUpdateLayoutSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSInteger updateMode; // ivar: _updateMode


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 updateMode:(NSInteger)arg1 ;


@end


#endif