// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDYNAMICITEMOBSERVINGBEHAVIOR_H
#define _UIDYNAMICITEMOBSERVINGBEHAVIOR_H



#import "UIDynamicItemBehavior.h"

@interface _UIDynamicItemObservingBehavior : UIDynamicItemBehavior

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) CGFloat completionHandlerInvocationDelay; // ivar: _completionHandlerInvocationDelay
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) NSInteger frameCount; // ivar: _frameCount
@property (nonatomic) CGVector targetVelocity; // ivar: _targetVelocity


-(void)cancel;
-(void)willMoveToAnimator:(id)arg0 ;


@end


#endif