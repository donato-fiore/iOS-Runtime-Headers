// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWINDOWDRAGGESTUREWORKSPACETRANSACTION_H
#define SBWINDOWDRAGGESTUREWORKSPACETRANSACTION_H



#import "SBFluidSwitcherGestureWorkspaceTransaction.h"

@interface SBWindowDragGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction

@property (readonly, nonatomic, getter=isDraggingFromContinuousExposeStrips) BOOL draggingFromContinuousExposeStrips; // ivar: _draggingFromContinuousExposeStrips
@property (readonly, nonatomic) CGPoint locationInSelectedDisplayItem; // ivar: _locationInSelectedDisplayItem
@property (readonly, nonatomic) CGSize sizeOfSelectedDisplayItem; // ivar: _sizeOfSelectedDisplayItem


-(NSInteger)_gestureType;
-(void)_beginWithGesture:(id)arg0 ;
-(void)_finishWithGesture:(id)arg0 ;


@end


#endif