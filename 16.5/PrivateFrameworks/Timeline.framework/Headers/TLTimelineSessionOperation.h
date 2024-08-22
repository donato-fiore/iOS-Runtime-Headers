// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLTIMELINESESSIONOPERATION_H
#define TLTIMELINESESSIONOPERATION_H

@class NSOperation, NSOperationQueue, NSArray, NSError;
@protocol TLTimelineDataSourceProvider;



@interface TLTimelineSessionOperation : NSOperation

@property (copy) id *completionBlock;
@property (readonly, copy, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) CGFloat operationTimeout; // ivar: _operationTimeout
@property (readonly, copy, nonatomic) NSArray *operations; // ivar: _operations
@property (readonly, nonatomic) NSObject<TLTimelineDataSourceProvider> *provider; // ivar: _provider
@property (readonly, nonatomic) CGFloat providerTimeout; // ivar: _providerTimeout
@property (copy) id *sessionCompletionBlock; // ivar: _sessionCompletionBlock
@property (copy) NSError *sessionError; // ivar: _sessionError


-(id)initWithProvider:(id)arg0 operations:(id)arg1 providerTimeout:(CGFloat)arg2 operationTimeout:(CGFloat)arg3 ;
-(void)cancel;
-(void)main;


@end


#endif