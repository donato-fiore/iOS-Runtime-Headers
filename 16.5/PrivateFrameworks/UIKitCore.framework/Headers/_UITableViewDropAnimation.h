// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITABLEVIEWDROPANIMATION_H
#define _UITABLEVIEWDROPANIMATION_H

@class NSMutableArray, NSString;
@protocol UIDragAnimating;

#import <Foundation/Foundation.h>

#import "UIDragItem.h"

@interface _UITableViewDropAnimation : NSObject <UIDragAnimating>



@property (retain, nonatomic) NSMutableArray *animationsBlocks; // ivar: _animationsBlocks
@property (retain, nonatomic) NSMutableArray *completionBlocks; // ivar: _completionBlocks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_didBeginAnimation, setter=_setDidBeginAnimation:) BOOL didBeginAnimation; // ivar: _didBeginAnimation
@property (retain, nonatomic) UIDragItem *dragItem; // ivar: _dragItem
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDragItem:(id)arg0 ;
-(void)_addClientBlocksToAnimator:(id)arg0 ;
-(void)_executeCompletionBlocks;
-(void)addAnimations:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;


@end


#endif