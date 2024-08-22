// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFRUNNINGWORKFLOWMANAGER_H
#define WFRUNNINGWORKFLOWMANAGER_H

@class NSMutableOrderedSet, NSArray, NSHashTable;
@protocol WFApplicationStateObserver;

#import <Foundation/Foundation.h>


@interface WFRunningWorkflowManager : NSObject <WFApplicationStateObserver>



@property (copy, nonatomic) id *demoResetBlock; // ivar: _demoResetBlock
@property (readonly, nonatomic) NSMutableOrderedSet *runningWorkflowControllerSet; // ivar: _runningWorkflowControllerSet
@property (readonly, nonatomic) NSArray *runningWorkflowControllers;
@property (readonly, nonatomic) NSArray *runningWorkflows;
@property (readonly, nonatomic) NSHashTable *workflowControllerAssertionTable; // ivar: _workflowControllerAssertionTable


+(id)sharedManager;
-(id)init;
-(void)applicationContext:(id)arg0 applicationStateDidChange:(NSInteger)arg1 ;
-(void)dealloc;
-(void)updateAssertions;
-(void)updateRunningWorkflowCount;
-(void)workflowControllerDidStart:(id)arg0 ;
-(void)workflowControllerDidStop:(id)arg0 ;


@end


#endif