// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICAVASSETDOWNLOADURLSESSION_H
#define ICAVASSETDOWNLOADURLSESSION_H

@class NSString;
@protocol AVAssetDownloadDelegate;


#import "ICURLSession.h"

@interface ICAVAssetDownloadURLSession : ICURLSession <AVAssetDownloadDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_createURLSessionTaskForRequest:(id)arg0 usingSession:(id)arg1 ;
-(id)_createURLSessionWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 maxConcurrentRequests:(NSUInteger)arg1 qualityOfService:(NSInteger)arg2 ;
-(void)URLSession:(id)arg0 aggregateAssetDownloadTask:(id)arg1 didLoadTimeRange:(struct ? )arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(struct ? )arg4 forMediaSelection:(id)arg5 ;
-(void)dealloc;
-(void)enqueueAVDownloadRequest:(id)arg0 toDestination:(id)arg1 withAVURLAsset:(id)arg2 options:(id)arg3 completionHandler:(id)arg4 ;
-(void)enqueueAVDownloadRequest:(id)arg0 toDestination:(id)arg1 withOptions:(id)arg2 completionHandler:(id)arg3 ;
-(void)enqueueAVDownloadRequest:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)enqueueAggregateAssetDownloadRequest:(id)arg0 toDestination:(id)arg1 withAVURLAsset:(id)arg2 options:(id)arg3 completionHandler:(id)arg4 ;
-(void)enqueueAggregateAssetDownloadRequest:(id)arg0 toDestination:(id)arg1 withOptions:(id)arg2 completionHandler:(id)arg3 ;
-(void)enqueueAggregateAssetDownloadRequest:(id)arg0 toDestination:(id)arg1 withOptions:(id)arg2 resourceLoaderDelegate:(id)arg3 completionHandler:(id)arg4 ;
-(void)mediaServicesWereLost:(id)arg0 ;
-(void)mediaServicesWereReset:(id)arg0 ;


@end


#endif