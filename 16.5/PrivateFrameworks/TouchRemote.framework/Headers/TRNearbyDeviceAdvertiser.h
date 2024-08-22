// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRNEARBYDEVICEADVERTISER_H
#define TRNEARBYDEVICEADVERTISER_H

@class SFService, NSMapTable;
@protocol OS_dispatch_queue, TRNearbyDeviceAdvertiserDelegate;

#import <Foundation/Foundation.h>


@interface TRNearbyDeviceAdvertiser : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *advertiserQ; // ivar: _advertiserQ
@property (weak) NSObject<TRNearbyDeviceAdvertiserDelegate> *delegate; // ivar: _delegate
@property NSUInteger requestedService; // ivar: _requestedService
@property (retain, nonatomic) SFService *service; // ivar: _service
@property (retain, nonatomic) NSMapTable *sessionsTable; // ivar: _sessionsTable
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionsTableQ; // ivar: _sessionsTableQ
@property (nonatomic) NSUInteger state; // ivar: _state


+(void)initialize;
-(id)init;
-(void)_handleActivationWithError:(id)arg0 ;
-(void)_handleEventMessage:(id)arg0 ;
-(void)_handleInterruption;
-(void)_handleInvalidation;
-(void)_handleNewConnectionFromPeerDevice:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_handleRequestMessage:(id)arg0 ;
-(void)_requestSessionForMessage:(id)arg0 withCallback:(id)arg1 ;
-(void)_respondToRequest:(id)arg0 withError:(id)arg1 ;
-(void)pauseAdvertising;
-(void)resumeAdvertising;
-(void)startAdvertisingWithService:(NSUInteger)arg0 ;
-(void)stopAdvertising;


@end


#endif