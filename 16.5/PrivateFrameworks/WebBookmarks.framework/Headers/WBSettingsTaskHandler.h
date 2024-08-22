// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSETTINGSTASKHANDLER_H
#define WBSETTINGSTASKHANDLER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSettingsTask.h"
#import "WebBookmarksSettingsGateway.h"

@interface WBSettingsTaskHandler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_tasks;
    WBSettingsTask *_currentTask;
    NSInteger _currentRetryCount;
    WebBookmarksSettingsGateway *_settingsGateway;
    id *_backgroundTaskAssertionToken;
}


@property (copy, nonatomic) id *finishBackgroundTaskAssertionBlock; // ivar: _finishBackgroundTaskAssertionBlock
@property (copy, nonatomic) id *startBackgroundTaskAssertionBlock; // ivar: _startBackgroundTaskAssertionBlock


-(BOOL)_shouldEnqueueTask:(id)arg0 ;
-(id)init;
-(void)_attemptCurrentTask;
-(void)_currentTaskAttemptDidFinishWithError:(id)arg0 ;
-(void)_enqueueTask:(id)arg0 ;
-(void)_finishCurrentTask;
-(void)_performNextTask;
-(void)enqueueTask:(id)arg0 ;


@end


#endif