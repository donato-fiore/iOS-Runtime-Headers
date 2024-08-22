// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSHTTPSERVERREQUESTHANDLER_H
#define SSHTTPSERVERREQUESTHANDLER_H

@class NSMutableData, NSInputStream, NSOutputStream, NSMutableURLRequest, NSString;
@protocol NSStreamDelegate, OS_dispatch_queue, SSHTTPServerRequestHandlerDelegate;

#import <Foundation/Foundation.h>


@interface SSHTTPServerRequestHandler : NSObject <NSStreamDelegate>

 {
    BOOL _incommingHeadersComplete;
    *__CFHTTPMessage _incommingMessage;
    NSMutableData *_incommingMessageBody;
    NSInputStream *_input;
    NSOutputStream *_output;
    NSMutableURLRequest *_request;
    NSObject<OS_dispatch_queue> *_requestQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SSHTTPServerRequestHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) int downloadSpeed; // ivar: _downloadSpeed
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_handleReceivedDataWithError:(*id)arg0 ;
-(BOOL)_shouldKeepRunning;
-(NSInteger)_throttledWriteSpeed;
-(NSInteger)_writeResponseData:(id)arg0 error:(*id)arg1 ;
-(id)_errorResponseDataWithStatus:(short)arg0 message:(id)arg1 ;
-(id)initWithReadStream:(id)arg0 writeStream:(id)arg1 runLoop:(id)arg2 ;
-(void)_close;
-(void)_respondWithRequest:(id)arg0 error:(id)arg1 ;
-(void)close;
-(void)dealloc;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif