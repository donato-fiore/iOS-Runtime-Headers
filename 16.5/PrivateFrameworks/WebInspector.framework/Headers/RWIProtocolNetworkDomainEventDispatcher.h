// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLNETWORKDOMAINEVENTDISPATCHER_H
#define RWIPROTOCOLNETWORKDOMAINEVENTDISPATCHER_H


#import <Foundation/Foundation.h>


@interface RWIProtocolNetworkDomainEventDispatcher : NSObject {
    *AugmentableInspectorController _controller;
}




-(id)initWithController:(struct AugmentableInspectorController *)arg0 ;
-(void)dataReceivedWithRequestId:(id)arg0 timestamp:(CGFloat)arg1 dataLength:(int)arg2 encodedDataLength:(int)arg3 ;
-(void)loadingFailedWithRequestId:(id)arg0 timestamp:(CGFloat)arg1 errorText:(id)arg2 canceled:(*BOOL)arg3 ;
-(void)loadingFinishedWithRequestId:(id)arg0 timestamp:(CGFloat)arg1 sourceMapURL:(*id)arg2 metrics:(*id)arg3 ;
-(void)requestInterceptedWithRequestId:(id)arg0 request:(id)arg1 ;
-(void)requestServedFromMemoryCacheWithRequestId:(id)arg0 frameId:(id)arg1 loaderId:(id)arg2 documentURL:(id)arg3 timestamp:(CGFloat)arg4 initiator:(id)arg5 resource:(id)arg6 ;
-(void)requestWillBeSentWithRequestId:(id)arg0 frameId:(id)arg1 loaderId:(id)arg2 documentURL:(id)arg3 request:(id)arg4 timestamp:(CGFloat)arg5 walltime:(CGFloat)arg6 initiator:(id)arg7 redirectResponse:(*id)arg8 type:(*NSInteger)arg9 targetId:(*id)arg10 ;
-(void)responseInterceptedWithRequestId:(id)arg0 response:(id)arg1 ;
-(void)responseReceivedWithRequestId:(id)arg0 frameId:(id)arg1 loaderId:(id)arg2 timestamp:(CGFloat)arg3 type:(NSInteger)arg4 response:(id)arg5 ;
-(void)webSocketClosedWithRequestId:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)webSocketCreatedWithRequestId:(id)arg0 url:(id)arg1 ;
-(void)webSocketFrameErrorWithRequestId:(id)arg0 timestamp:(CGFloat)arg1 errorMessage:(id)arg2 ;
-(void)webSocketFrameReceivedWithRequestId:(id)arg0 timestamp:(CGFloat)arg1 response:(id)arg2 ;
-(void)webSocketFrameSentWithRequestId:(id)arg0 timestamp:(CGFloat)arg1 response:(id)arg2 ;
-(void)webSocketHandshakeResponseReceivedWithRequestId:(id)arg0 timestamp:(CGFloat)arg1 response:(id)arg2 ;
-(void)webSocketWillSendHandshakeRequestWithRequestId:(id)arg0 timestamp:(CGFloat)arg1 walltime:(CGFloat)arg2 request:(id)arg3 ;


@end


#endif