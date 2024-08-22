// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WPMAGICSWITCH_H
#define WPMAGICSWITCH_H

@protocol WPMagicSwitchDelegate;


#import "WPClient.h"

@interface WPMagicSwitch : WPClient

@property (weak, nonatomic) NSObject<WPMagicSwitchDelegate> *delegate; // ivar: _delegate


-(id)clientAsString;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(struct ? )dutyCycleToScanningRates:(NSInteger)arg0 ;
-(void)advertisingFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg0 ;
-(void)advertisingStartedOfType:(unsigned char)arg0 ;
-(void)advertisingStoppedOfType:(unsigned char)arg0 withError:(id)arg1 ;
-(void)deviceDiscovered:(id)arg0 ;
-(void)invalidate;
-(void)scanningFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg0 ;
-(void)scanningStoppedOfType:(unsigned char)arg0 ;
-(void)startAdvertisingWithData:(id)arg0 ;
-(void)startScanningWithData:(id)arg0 ;
-(void)stateDidChange:(NSInteger)arg0 ;
-(void)stopAdvertising;
-(void)stopScanning;


@end


#endif