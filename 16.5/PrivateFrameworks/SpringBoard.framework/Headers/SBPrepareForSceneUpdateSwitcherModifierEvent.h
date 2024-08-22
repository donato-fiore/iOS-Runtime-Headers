// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPREPAREFORSCENEUPDATESWITCHERMODIFIEREVENT_H
#define SBPREPAREFORSCENEUPDATESWITCHERMODIFIEREVENT_H

@class NSArray;


#import "SBSwitcherModifierEvent.h"

@interface SBPrepareForSceneUpdateSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) NSArray *liveAppLayouts; // ivar: _liveAppLayouts


-(NSInteger)type;
-(id)initWithLiveAppLayouts:(id)arg0 ;


@end


#endif