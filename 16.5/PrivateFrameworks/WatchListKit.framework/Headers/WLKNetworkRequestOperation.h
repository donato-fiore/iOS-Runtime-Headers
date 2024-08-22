// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKNETWORKREQUESTOPERATION_H
#define WLKNETWORKREQUESTOPERATION_H

@class NSNumber, NSData, AMSURLRequestEncoder, NSError, NSHTTPURLResponse, NSString, NSURLRequest, AMSURLSession, NSDate, NSURLSessionDataTask;


#import "WLKAsyncOperation.h"

@interface WLKNetworkRequestOperation : WLKAsyncOperation

@property (copy, nonatomic) NSNumber *DSID; // ivar: _DSID
@property (weak, nonatomic) id *authenticationDelegate; // ivar: _authenticationDelegate
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) AMSURLRequestEncoder *encoder; // ivar: _encoder
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSHTTPURLResponse *httpResponse; // ivar: _httpResponse
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (copy, nonatomic) NSURLRequest *request; // ivar: _request
@property (nonatomic) NSInteger resourceFetchType; // ivar: _resourceFetchType
@property (nonatomic) NSInteger responseStatusCode; // ivar: _responseStatusCode
@property (retain, nonatomic) AMSURLSession *session; // ivar: _session
@property (nonatomic) NSUInteger signpostIdentifier; // ivar: _signpostIdentifier
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSURLSessionDataTask *task; // ivar: _task


-(NSInteger)_statusCodeForAMSResult:(id)arg0 error:(id)arg1 ;
-(id)httpHeaderMaxAge;
-(id)httpHeaderResponseDate;
-(id)init;
-(id)initWithURLRequest:(id)arg0 options:(NSInteger)arg1 ;
-(id)originalExpirationDate;
-(id)shortDescription;
-(void)_finishExecutionIfPossibleWithError:(id)arg0 ;
-(void)_startNetworkRequest;
-(void)cancel;
-(void)configureSession;
-(void)executionDidBegin;
-(void)finishExecutionIfPossible;
-(void)handleResult:(id)arg0 error:(id)arg1 ;
-(void)prepareAndStartNetworkRequest;
-(void)prepareURLRequest:(id)arg0 ;
-(void)processResponse;


@end


#endif