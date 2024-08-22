// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWINDOWDRAGSWITCHERMODIFIEREVENT_H
#define SBWINDOWDRAGSWITCHERMODIFIEREVENT_H



#import "SBGestureSwitcherModifierEvent.h"

@interface SBWindowDragSwitcherModifierEvent : SBGestureSwitcherModifierEvent

@property (nonatomic, getter=isDraggingFromContinuousExposeStrips) BOOL draggingFromContinuousExposeStrips; // ivar: _draggingFromContinuousExposeStrips
@property (nonatomic) CGPoint locationInSelectedDisplayItem; // ivar: _locationInSelectedDisplayItem
@property (nonatomic) CGSize sizeOfSelectedDisplayItem; // ivar: _sizeOfSelectedDisplayItem


-(BOOL)isWindowDragGestureEvent;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif