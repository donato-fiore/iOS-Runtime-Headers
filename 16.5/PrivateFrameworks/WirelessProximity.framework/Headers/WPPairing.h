// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WPPAIRING_H
#define WPPAIRING_H

@class NSMutableSet;
@protocol WPPairingDelegate;


#import "WPClient.h"

@interface WPPairing : WPClient

@property BOOL allowScreenOffScanning; // ivar: _allowScreenOffScanning
@property (weak, nonatomic) NSObject<WPPairingDelegate> *delegate; // ivar: _delegate
@property (retain) NSMutableSet *ignoredDevices; // ivar: _ignoredDevices


-(id)clientAsString;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 machName:(id)arg2 ;
-(void)deviceDiscovered:(id)arg0 ;
-(void)ignoreDeviceUntilNextUnlock:(id)arg0 ignoreDevice:(BOOL)arg1 ;
-(void)invalidate;
-(void)scanningFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg0 ;
-(void)scanningStoppedOfType:(unsigned char)arg0 ;
-(void)startProximityPairingServiceScanning;
-(void)startProximityPairingServiceScanningWithRSSI:(id)arg0 duplicates:(BOOL)arg1 ;
-(void)startProximityPairingServiceScanningWithRSSI:(id)arg0 duplicates:(BOOL)arg1 scanMode:(NSInteger)arg2 ;
-(void)stateDidChange:(NSInteger)arg0 ;
-(void)stopProximityPairingServiceScanning;


@end


#endif