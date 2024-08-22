// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUDOWNLOADSESSION_H
#define TSUDOWNLOADSESSION_H

@class TSUDownloadManager, NSMutableSet, NSMutableDictionary, NSError, NSString;
@protocol TSUDownloadSessionDelegate, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSUProgress.h"

@interface TSUDownloadSession : NSObject {
    TSUDownloadManager *_manager;
    id<TSUDownloadSessionDelegate> *_delegate;
    BOOL _didFinishInitialization;
    NSObject<OS_dispatch_group> *_initializationGroup;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableSet *_remainingTasks;
    NSMutableDictionary *_taskProgress;
    CGFloat _lastProgressValue;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSError *_error;
}


@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly, nonatomic) TSUProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSString *sessionDescription; // ivar: _sessionDescription
@property (readonly, nonatomic) NSInteger totalBytesDownloaded; // ivar: _totalBytesDownloaded
@property (readonly, nonatomic) NSInteger totalBytesExpectedToBeDownloaded; // ivar: _totalBytesExpectedToBeDownloaded


-(BOOL)hasActiveTaskWithDescription:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithManager:(id)arg0 downloadItems:(id)arg1 description:(id)arg2 willRequestDownload:(BOOL)arg3 delegate:(id)arg4 ;
-(id)waitUntilTimeout:(NSUInteger)arg0 ;
-(void)cancel;
-(void)cancelRemainingTasksNotifyingDelegate:(BOOL)arg0 ;
-(void)dealloc;
-(void)didFinishInitialization;
-(void)headRequestForDownloadItem:(id)arg0 taskProgress:(id)arg1 ;
-(void)notifyCompletionWithQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)taskWithDescription:(id)arg0 didCompleteWithError:(id)arg1 totalBytesWritten:(NSInteger)arg2 totalBytesExpectedToWrite:(NSInteger)arg3 ;
-(void)taskWithDescription:(id)arg0 didWriteData:(NSInteger)arg1 totalBytesWritten:(NSInteger)arg2 totalBytesExpectedToWrite:(NSInteger)arg3 ;
-(void)updateProgressAndNotifyDelegate;
-(void)updateTaskProgress:(id)arg0 withTotalBytesWritten:(NSInteger)arg1 totalBytesExpectedToWrite:(NSInteger)arg2 ;


@end


#endif