// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSURLCONNECTIONREQUEST_H
#define SSURLCONNECTIONREQUEST_H

@class NSURL, NSURLRequest, NSString;
@protocol SSXPCCoding, SSURLConnectionRequestDelegate;


#import "SSRequest.h"
#import "SSURLRequestProperties.h"
#import "SSAuthenticationContext.h"
#import "SSVURLDataConsumer.h"
#import "SSVFairPlaySAPSession.h"
#import "SSVSAPSignaturePolicy.h"
#import "SSURLBag.h"
#import "SSVURLBagInterpreter.h"

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding>

 {
    SSURLRequestProperties *_requestProperties;
    SSAuthenticationContext *_authenticationContext;
    SSVURLDataConsumer *_dataConsumer;
    NSURL *_destinationFileURL;
    BOOL _runsInProcess;
    SSVFairPlaySAPSession *_sapSession;
    SSVSAPSignaturePolicy *_sapSignaturePolicy;
    BOOL _sendsResponseForHTTPFailures;
    BOOL _shouldMescalSign;
    SSURLBag *_urlBag;
    SSVURLBagInterpreter *_urlBagInterpreter;
}


@property (retain) SSVFairPlaySAPSession *SAPSession;
@property (copy) SSVSAPSignaturePolicy *SAPSignaturePolicy;
@property (readonly) NSURLRequest *URLRequest;
@property (copy) SSAuthenticationContext *authenticationContext;
@property (retain) SSVURLDataConsumer *dataConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SSURLConnectionRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy) NSURL *destinationFileURL;
@property (readonly) NSUInteger hash;
@property (readonly) SSURLRequestProperties *requestProperties;
@property BOOL runsInProcess;
@property BOOL sendsResponseForHTTPFailures;
@property BOOL shouldMescalSign;
@property (readonly) Class superclass;


-(BOOL)_canRunInProcess;
-(BOOL)start;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithRequestProperties:(id)arg0 ;
-(id)initWithURLRequest:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)configureWithURLBag:(id)arg0 ;
-(void)configureWithURLBagDictionary:(id)arg0 ;
-(void)dealloc;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithConnectionResponseBlock:(id)arg0 ;


@end


#endif