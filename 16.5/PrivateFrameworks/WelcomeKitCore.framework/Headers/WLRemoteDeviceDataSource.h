// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLREMOTEDEVICEDATASOURCE_H
#define WLREMOTEDEVICEDATASOURCE_H

@class NSOperationQueue, NSString, NSURLSession;
@protocol WLMigrationDataSource;

#import <Foundation/Foundation.h>


@interface WLRemoteDeviceDataSource : NSObject <WLMigrationDataSource>

 {
    NSOperationQueue *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *host; // ivar: _host
@property (nonatomic) unsigned short port; // ivar: _port
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)_requestSerialQueue;
-(BOOL)_shouldHandleHTTPErrorWithResponse:(id)arg0 expectedContentLength:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_shouldRetryLaterWithResponse:(id)arg0 error:(id)arg1 ;
-(BOOL)_shouldRetryWithData:(id)arg0 response:(id)arg1 error:(id)arg2 ;
-(BOOL)_shouldRetryWithPreventRetriesAfterTaskExceedsDuration:(BOOL)arg0 taskDurationLimit:(CGFloat)arg1 taskDuration:(CGFloat)arg2 ;
-(CGFloat)_maximumRetriableTaskDurationForLongServerOperations;
-(CGFloat)_taskDurationSinceStartDate:(id)arg0 ;
-(CGFloat)_urlRequestTimeout;
-(NSInteger)_retryLaterDelayInSeconds;
-(NSUInteger)_newNumberOfRetriesAllowed:(NSUInteger)arg0 startDate:(id)arg1 ;
-(id)_urlForAccountsWithMigrator:(id)arg0 ;
-(id)_urlForRecordForMigrator:(id)arg0 withSummaryIdentifier:(id)arg1 accountIdentifier:(id)arg2 segmentByteRange:(struct _NSRange *)arg3 ;
-(id)_urlForRecordSummariesForMigrator:(id)arg0 withAccountIdentifier:(id)arg1 ;
-(id)_urlScheme;
-(id)initWithHost:(id)arg0 port:(unsigned short)arg1 session:(id)arg2 ;
// -(void)_downloadTaskWithRequest:(id)arg0 expectedContentLength:(NSUInteger)arg1 numberOfRetriesAllowed:(NSUInteger)arg2 startDate:(id)arg3 fileAccessor:(id)arg4 completion:(unk)arg5  ;
// -(void)_performDownloadRequest:(id)arg0 expectedContentLength:(NSUInteger)arg1 numberOfRetriesAllowed:(NSUInteger)arg2 startDate:(id)arg3 fileAccessor:(id)arg4 completion:(unk)arg5  ;
-(void)_performRequest:(id)arg0 expectedContentLength:(NSUInteger)arg1 numberOfRetriesAllowed:(NSUInteger)arg2 preventRetriesAfterTaskExceedsDuration:(BOOL)arg3 taskDurationLimit:(CGFloat)arg4 startDate:(id)arg5 completionHandler:(id)arg6 ;
-(void)_runTaskWithRequest:(id)arg0 expectedContentLength:(NSUInteger)arg1 numberOfRetriesAllowed:(NSUInteger)arg2 preventRetriesAfterTaskExceedsDuration:(BOOL)arg3 taskDurationLimit:(CGFloat)arg4 startDate:(id)arg5 completionHandler:(id)arg6 ;
-(void)_willRetryPerformRequest;
-(void)accountsDataForMigrator:(id)arg0 completion:(id)arg1 ;
-(void)cancel;
-(void)dataForSummary:(id)arg0 migrator:(id)arg1 completion:(id)arg2 ;
-(void)dataSegmentForSummary:(id)arg0 byteRange:(struct _NSRange )arg1 migrator:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
// -(void)fileForSummary:(id)arg0 migrator:(id)arg1 fileAccessor:(id)arg2 completion:(unk)arg3  ;
-(void)itemSizeForSummary:(id)arg0 migrator:(id)arg1 completion:(id)arg2 ;
-(void)summariesDataForAccount:(id)arg0 migrator:(id)arg1 completion:(id)arg2 ;
-(void)updateUIWithProgress:(CGFloat)arg0 remainingTime:(CGFloat)arg1 logString:(id)arg2 completion:(id)arg3 ;


@end


#endif