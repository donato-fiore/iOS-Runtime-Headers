// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICURLREQUEST_H
#define ICURLREQUEST_H

@class NSMutableArray, NSMutableDictionary, NSString, NSDictionary, AVURLAsset, NSURLRequest, NSError, NSProgress, NSMutableData, NSURL, NSData, NSURLSessionTask, NSURLResponse;
@protocol NSProgressReporting, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "ICURLPerformanceMetrics.h"
#import "ICRequestContext.h"
#import "ICURLResponseHandler.h"

@interface ICURLRequest : NSObject <NSProgressReporting>

 {
    NSMutableArray *_observers;
    NSMutableDictionary *_maxRetryCounts;
    NSMutableDictionary *_retryCounts;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSUInteger _signpostIdentifier;
    NSString *_loadURLMetricsRequestName;
}


@property (retain, nonatomic, setter=setAVDownloadOptions:) NSDictionary *avDownloadOptions; // ivar: _avDownloadOptions
@property (retain, nonatomic, setter=setAVURLAsset:) AVURLAsset *avURLAsset; // ivar: _avURLAsset
@property (nonatomic) BOOL cancelOnHTTPErrors; // ivar: _cancelOnHTTPErrors
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSURLRequest *currentURLRequest; // ivar: _currentURLRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSInteger handlingType; // ivar: _handlingType
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastProgressUpdateTime; // ivar: _lastProgressUpdateTime
@property (nonatomic) CGFloat lastUpdateTime; // ivar: _lastUpdateTime
@property (readonly, nonatomic) NSString *loadURLMetricsRequestName;
@property (nonatomic) NSUInteger maxRetryCount;
@property (retain, nonatomic) ICURLPerformanceMetrics *performanceMetrics; // ivar: _performanceMetrics
@property (nonatomic) BOOL prioritize; // ivar: _prioritize
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (nonatomic) NSUInteger redirectCount; // ivar: _redirectCount
@property (readonly, copy, nonatomic) ICRequestContext *requestContext; // ivar: _requestContext
@property (nonatomic) NSInteger requestState; // ivar: _requestState
@property (retain, nonatomic) NSMutableData *responseData; // ivar: _responseData
@property (retain, nonatomic) NSURL *responseDataURL; // ivar: _responseDataURL
@property (retain, nonatomic) ICURLResponseHandler *responseHandler; // ivar: _responseHandler
@property (readonly, copy, nonatomic) NSData *resumeData; // ivar: _resumeData
@property (readonly, nonatomic) NSUInteger retryCount;
@property (nonatomic) CGFloat retryDelay; // ivar: _retryDelay
@property (retain, nonatomic) NSString *retryReason; // ivar: _retryReason
@property (readonly, nonatomic) BOOL shouldReportLoadURLMetrics;
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURLSessionTask *task; // ivar: _task
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSURLRequest *urlRequest; // ivar: _urlRequest
@property (retain, nonatomic) NSURLResponse *urlResponse; // ivar: _urlResponse
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitSemaphore; // ivar: _waitSemaphore


+(Class)_responseClass;
+(NSUInteger)_defaultMaxRetryCountForReason:(id)arg0 ;
+(id)_nameForRequestType:(NSInteger)arg0 ;
-(NSUInteger)_maxRetryCountForReason:(id)arg0 ;
-(NSUInteger)_retryCountForReason:(id)arg0 ;
-(id)_analyticSignature;
-(id)initWithURL:(id)arg0 requestContext:(id)arg1 ;
-(id)initWithURL:(id)arg0 requestContext:(id)arg1 resumeData:(id)arg2 ;
-(id)initWithURLRequest:(id)arg0 requestContext:(id)arg1 ;
-(id)initWithURLRequest:(id)arg0 requestContext:(id)arg1 resumeData:(id)arg2 ;
-(void)_ensureValidRetryReason:(id)arg0 ;
-(void)_incrementRetryCountForReason:(id)arg0 ;
-(void)_updateSignpostsForNewState:(NSInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)buildURLRequestWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)enableLoadURLMetricsWithRequestName:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateState:(NSInteger)arg0 ;


@end


#endif