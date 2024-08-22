// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBTOUCHORDEREDTASKLIST_H
#define UIKBTOUCHORDEREDTASKLIST_H

@class NSMutableArray, NSValue, NSUUID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UIKBTouchOrderedTaskList : NSObject {
    NSObject<OS_dispatch_queue> *_touchStateTasksQueue;
    NSMutableArray *_touchStateTasks;
}


@property (readonly, nonatomic) NSValue *currentTouchPoint; // ivar: _currentTouchPoint
@property (readonly, nonatomic) BOOL hasTasks;
@property (nonatomic) BOOL ignoredOnBegin; // ivar: _ignoredOnBegin
@property (readonly, nonatomic) CGFloat originalStartTime; // ivar: _originalStartTime
@property (readonly, nonatomic) NSUInteger pathIndex; // ivar: _pathIndex
@property (readonly, nonatomic) NSUUID *touchUUID; // ivar: _touchUUID


+(id)taskListForTouchUUID:(id)arg0 withPathIndex:(NSUInteger)arg1 ;
-(BOOL)executeTasksInView:(id)arg0 withBlock:(id)arg1 ;
-(BOOL)isExecutingFirstTask;
-(id)firstTouchStateForUITouchPhase:(NSInteger)arg0 ;
-(id)initWithTouchUUID:(id)arg0 withPathIndex:(NSUInteger)arg1 ;
-(void)addTask:(id)arg0 ;
-(void)dealloc;
-(void)removeTasksMatchingFilter:(id)arg0 ;


@end


#endif