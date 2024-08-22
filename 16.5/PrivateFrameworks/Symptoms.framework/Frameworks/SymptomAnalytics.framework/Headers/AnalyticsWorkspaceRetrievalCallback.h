// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANALYTICSWORKSPACERETRIEVALCALLBACK_H
#define ANALYTICSWORKSPACERETRIEVALCALLBACK_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AnalyticsWorkspaceRetrievalCallback : NSObject

@property (retain) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (copy) id *workspaceCallback; // ivar: _workspaceCallback




@end


#endif