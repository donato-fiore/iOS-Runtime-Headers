// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WPHOMEKIT_H
#define WPHOMEKIT_H

@class CBDiscovery;
@protocol WPHomeKitDelegate;


#import "WPClient.h"

@interface WPHomeKit : WPClient {
    CBDiscovery *_homeKitCBDiscovery;
}


@property (weak, nonatomic) NSObject<WPHomeKitDelegate> *delegate; // ivar: _delegate


-(BOOL)discoveryFlagsContains:(NSInteger)arg0 ;
-(BOOL)isHomeKitScanActive:(NSUInteger)arg0 ;
-(BOOL)isWHBSupported;
-(NSInteger)homeKitTypeFromCBDiscoveryFlag:(NSUInteger)arg0 ;
-(NSInteger)homeKitTypeFromClientType:(unsigned char)arg0 ;
-(NSUInteger)homeKitTypeToCBDiscoveryFlag:(NSInteger)arg0 ;
-(id)clientAsString;
-(id)homeKitCBDiscovery;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)startCBDiscoveryScan:(id)arg0 forType:(NSInteger)arg1 ;
-(struct ? )dutyCycleToScanningRates:(NSInteger)arg0 ;
-(struct ? )homeKitScanTypeToCBDiscoveryScanRates:(NSInteger)arg0 ;
-(unsigned char)clientTypeFromHomeKitType:(NSInteger)arg0 ;
-(void)checkAllowDuplicate;
-(void)deviceDiscovered:(id)arg0 ;
-(void)deviceFoundHandler:(id)arg0 cached:(BOOL)arg1 ;
-(void)deviceLostHandler:(id)arg0 ;
-(void)invalidate;
-(void)invalidateWHBScanSession;
-(void)scanningFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg0 ;
-(void)scanningStoppedOfType:(unsigned char)arg0 ;
-(void)setHomeKitCBDiscovery:(id)arg0 ;
-(void)setStartScanParametersfor:(id)arg0 withValues:(id)arg1 forType:(NSInteger)arg2 ;
-(void)setStopScanParametersforType:(NSInteger)arg0 ;
-(void)startScanningWithData:(id)arg0 forType:(NSInteger)arg1 ;
-(void)stateDidChange:(NSInteger)arg0 ;
-(void)stopCBDiscoveryScan:(NSInteger)arg0 ;
-(void)stopScanningForType:(NSInteger)arg0 ;
-(void)tearDownCBDiscovery;


@end


#endif