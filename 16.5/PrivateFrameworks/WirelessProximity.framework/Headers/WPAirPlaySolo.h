// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WPAIRPLAYSOLO_H
#define WPAIRPLAYSOLO_H

@protocol WPAirPlaySoloDelegate;


#import "WPClient.h"

@interface WPAirPlaySolo : WPClient

@property (weak, nonatomic) NSObject<WPAirPlaySoloDelegate> *delegate; // ivar: _delegate


+(id)puckTypeToString:(unsigned char)arg0 ;
+(unsigned char)puckStringToType:(id)arg0 ;
-(id)clientAsString;
-(id)init;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)advertisingFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg0 ;
-(void)advertisingStartedOfType:(unsigned char)arg0 ;
-(void)advertisingStoppedOfType:(unsigned char)arg0 withError:(id)arg1 ;
-(void)deviceDiscovered:(id)arg0 ;
-(void)failedToStartTrackingPeer:(id)arg0 error:(id)arg1 ;
-(void)foundPeer:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)invalidate;
-(void)lostPeer:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)peerTrackingAvailable;
-(void)peerTrackingFull;
-(void)scanningFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg0 ;
-(void)scanningStoppedOfType:(unsigned char)arg0 ;
-(void)startConnectionlessAdvertisingWithData:(id)arg0 ;
-(void)startConnectionlessScanningWithData:(id)arg0 ;
-(void)startTrackingPeer:(id)arg0 withData:(id)arg1 ;
-(void)startedTrackingPeer:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)stateDidChange:(NSInteger)arg0 ;
-(void)stopConnectionlessAdvertising;
-(void)stopConnectionlessAdvertising:(id)arg0 ;
-(void)stopConnectionlessScanningWithData:(id)arg0 ;
-(void)stopTrackingPeer:(id)arg0 withData:(id)arg1 ;
-(void)stoppedTrackingPeer:(id)arg0 ofType:(unsigned char)arg1 ;


@end


#endif