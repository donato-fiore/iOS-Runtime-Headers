// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WPAWDL_H
#define WPAWDL_H

@protocol WPAWDLDelegate;


#import "WPClient.h"

@interface WPAWDL : WPClient

@property (weak, nonatomic) NSObject<WPAWDLDelegate> *delegate; // ivar: _delegate
@property BOOL useSmallerAirDrop; // ivar: _useSmallerAirDrop


+(id)generateDataFromEmails:(id)arg0 ;
+(id)hashEmail:(id)arg0 ;
-(id)clientAsString;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 machName:(id)arg2 ;
-(void)advertisingFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg0 ;
-(void)advertisingStartedOfType:(unsigned char)arg0 ;
-(void)advertisingStoppedOfType:(unsigned char)arg0 withError:(id)arg1 ;
-(void)deviceDiscovered:(id)arg0 ;
-(void)invalidate;
-(void)scanningFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg0 ;
-(void)scanningStoppedOfType:(unsigned char)arg0 ;
-(void)startConnectionlessAWDLServiceAdvertisingWithData:(id)arg0 ;
-(void)startConnectionlessAWDLServiceScanning;
-(void)stateDidChange:(NSInteger)arg0 ;
-(void)stopConnectionlessAWDLServiceAdvertising;
-(void)stopConnectionlessAWDLServiceScanning;
-(void)updateAdvertisingRequest:(id)arg0 withUpdate:(id)arg1 ;


@end


#endif