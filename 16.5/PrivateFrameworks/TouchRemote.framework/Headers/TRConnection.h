// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRCONNECTION_H
#define TRCONNECTION_H


#import <Foundation/Foundation.h>


@interface TRConnection : NSObject

@property (copy, nonatomic) id *eventMessageHandler; // ivar: _eventMessageHandler
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *requestMessageHandler; // ivar: _requestMessageHandler


-(void)invalidate;
-(void)sendEvent:(id)arg0 ;
-(void)sendRequest:(id)arg0 ;
-(void)sendResponse:(id)arg0 ;


@end


#endif