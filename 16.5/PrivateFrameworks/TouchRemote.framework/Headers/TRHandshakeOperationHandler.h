// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRHANDSHAKEOPERATIONHANDLER_H
#define TRHANDSHAKEOPERATIONHANDLER_H

@class NSString;
@protocol TROperationHandler;

#import <Foundation/Foundation.h>


@interface TRHandshakeOperationHandler : NSObject <TROperationHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handshakeHandler; // ivar: _handshakeHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithHandshakeHandler:(id)arg0 ;
-(void)_handleHandshakeRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)registerMessageHandlersForSession:(id)arg0 ;


@end


#endif