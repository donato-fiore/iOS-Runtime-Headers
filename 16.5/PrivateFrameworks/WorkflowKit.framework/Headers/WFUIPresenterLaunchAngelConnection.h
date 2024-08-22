// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFUIPRESENTERLAUNCHANGELCONNECTION_H
#define WFUIPRESENTERLAUNCHANGELCONNECTION_H

@class BSServiceConnection<BSServiceConnectionClient>, NSString;
@protocol WFUIPresenterConnection, WFUIPresenterHostInterface;

#import <Foundation/Foundation.h>


@interface WFUIPresenterLaunchAngelConnection : NSObject <WFUIPresenterConnection>



@property (readonly, nonatomic) BSServiceConnection<BSServiceConnectionClient> *connection; // ivar: _connection
@property (nonatomic) BOOL connectionInterrupted; // ivar: _connectionInterrupted
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<WFUIPresenterHostInterface> *host; // ivar: _host
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly) Class superclass;


-(id)presenterWithErrorHandler:(id)arg0 ;
-(void)cleanUpWithReason:(id)arg0 ;
-(void)dealloc;
-(void)prepareConnectionIfNecessary;


@end


#endif