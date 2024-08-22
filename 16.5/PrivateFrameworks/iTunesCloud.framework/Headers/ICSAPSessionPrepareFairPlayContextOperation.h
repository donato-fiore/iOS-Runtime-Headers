// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSAPSESSIONPREPAREFAIRPLAYCONTEXTOPERATION_H
#define ICSAPSESSIONPREPAREFAIRPLAYCONTEXTOPERATION_H



#import "ICAsyncOperation.h"
#import "ICSAPSession.h"

@interface ICSAPSessionPrepareFairPlayContextOperation : ICAsyncOperation

@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (retain, nonatomic) ICSAPSession *sapSession; // ivar: _sapSession


-(void)_exchangeDataWithSAPContext:(id)arg0 requestContext:(id)arg1 setupURL:(id)arg2 responseData:(id)arg3 completionHandler:(id)arg4 ;
-(void)execute;


@end


#endif