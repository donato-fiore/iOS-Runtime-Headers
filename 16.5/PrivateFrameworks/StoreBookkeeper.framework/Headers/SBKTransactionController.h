// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBKTRANSACTIONCONTROLLER_H
#define SBKTRANSACTIONCONTROLLER_H

@class SSAccount, MSVTaskAssertion, NSString, NSNumber, NSOperationQueue, NSMutableArray, NSURL;
@protocol SBKTransactionURLOperationDelegate, SBKTransactionControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBKStoreAuthenticationController.h"
#import "SBKTransaction.h"

@interface SBKTransactionController : NSObject <SBKTransactionURLOperationDelegate>



@property (readonly, nonatomic) SSAccount *account; // ivar: _account
@property (retain, nonatomic) SBKStoreAuthenticationController *authenticationController; // ivar: _authenticationController
@property (retain, nonatomic) MSVTaskAssertion *backgroundTaskAssertion; // ivar: _backgroundTaskAssertion
@property (nonatomic) NSInteger conflictResolutionAttempts; // ivar: _conflictResolutionAttempts
@property (retain, nonatomic) SBKTransaction *currentTransaction; // ivar: _currentTransaction
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBKTransactionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIdle) BOOL idle;
@property (nonatomic) BOOL isResolvingError; // ivar: _isResolvingError
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (weak, nonatomic) id *networkTypeObserver; // ivar: _networkTypeObserver
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSMutableArray *pendingTransactions; // ivar: _pendingTransactions
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSURL *requestURL; // ivar: _requestURL
@property (nonatomic) BOOL shouldAuthenticateIfNecessary; // ivar: _shouldAuthenticateIfNecessary
@property (readonly) Class superclass;


-(BOOL)_delegateShouldScheduleTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)_delegateTransactionDidFail:(id)arg0 withError:(id)arg1 ;
-(BOOL)_onQueue_authenticationCanProcessTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)_onQueue_canScheduleTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)_onQueue_clampsCanScheduleTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)_onQueue_isEnabledForTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)_sendFinishedBlockForTransaction:(id)arg0 success:(BOOL)arg1 cancelled:(BOOL)arg2 error:(id)arg3 handledAsFinishedBlock:(*BOOL)arg4 ;
-(id)_onQueue_clampsController;
-(id)initWithDomain:(id)arg0 requestURL:(id)arg1 ;
-(id)initWithDomain:(id)arg0 requestURL:(id)arg1 forAccount:(id)arg2 ;
-(void)_beginBackgroundTask;
-(void)_delegateTransactionDidCancel:(id)arg0 withError:(id)arg1 ;
-(void)_delegateTransactionDidFinish:(id)arg0 ;
-(void)_endBackgroundTask;
-(void)_enqueueStoreOperation:(id)arg0 ;
-(void)_networkTypeChangedNotification:(id)arg0 ;
-(void)_onQueue_addPendingTransaction:(id)arg0 ;
-(void)_onQueue_assertIsTransactionValid:(id)arg0 error:(*id)arg1 ;
-(void)_onQueue_beginBackgroundTask;
-(void)_onQueue_cancelAllPendingTransactions:(id)arg0 ;
-(void)_onQueue_cancelTransaction:(id)arg0 error:(id)arg1 ;
-(void)_onQueue_endBackgroundTask;
-(void)_onQueue_performCancelErrorHandlingForError:(id)arg0 ;
-(void)_onQueue_performDefaultErrorHandlingForError:(id)arg0 ;
-(void)_onQueue_performRetryErrorHandlingForError:(id)arg0 ;
-(void)_onQueue_processCurrentTransaction;
-(void)_onQueue_processOperationOutput:(id)arg0 operation:(id)arg1 operationAuthenticated:(BOOL)arg2 ;
-(void)_onQueue_processPendingTransactions;
-(void)_onQueue_resolveError:(id)arg0 resolution:(int)arg1 ;
-(void)_onQueue_scheduleTransaction:(id)arg0 isRetry:(BOOL)arg1 ;
-(void)_onQueue_transactionDidCancel:(id)arg0 withError:(id)arg1 ;
-(void)_onQueue_transactionDidFail:(id)arg0 withError:(id)arg1 ;
-(void)_processDataInResponse:(id)arg0 ;
-(void)_resolveError:(id)arg0 resolution:(int)arg1 ;
-(void)_storeOperationDidComplete:(id)arg0 ;
-(void)cancelAllTransactions;
-(void)cancelAllTransactionsCancelCode:(NSInteger)arg0 ;
-(void)cancelScheduledTransaction:(id)arg0 ;
-(void)dealloc;
-(void)operation:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithOutput:(id)arg1 ;
-(void)scheduleTransaction:(id)arg0 ;
-(void)scheduleTransaction:(id)arg0 withTransactionFinishedBlock:(id)arg1 ;


@end


#endif