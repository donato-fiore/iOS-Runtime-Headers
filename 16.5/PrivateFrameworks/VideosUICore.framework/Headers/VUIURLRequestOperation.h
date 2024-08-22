// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIURLREQUESTOPERATION_H
#define VUIURLREQUESTOPERATION_H

@class NSData, NSError, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionDataTask;


#import "VUIAsynchronousOperation.h"

@interface VUIURLRequestOperation : VUIAsynchronousOperation

@property (copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSUInteger elapsedTimeInMilliseconds;
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSURLRequest *request; // ivar: _request
@property (copy, nonatomic) NSURLResponse *response; // ivar: _response
@property (copy, nonatomic) NSURLSession *session; // ivar: _session
@property (copy, nonatomic) NSURLSessionDataTask *task; // ivar: _task
@property (nonatomic) NSUInteger taskStartTime; // ivar: _taskStartTime


-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 session:(id)arg1 ;
-(void)_handleResponse:(id)arg0 responseData:(id)arg1 error:(id)arg2 ;
-(void)cancel;
-(void)executionDidBegin;


@end


#endif