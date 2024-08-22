// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WPDZONEMANAGER_H
#define WPDZONEMANAGER_H

@class CBCentralManager, NSString, NSDate, NSMutableDictionary, NSNumber;
@protocol CBCentralManagerDelegate, OS_dispatch_source;


#import "WPDManager.h"

@interface WPDZoneManager : WPDManager <CBCentralManagerDelegate>



@property (retain) CBCentralManager *centralManager; // ivar: _centralManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<OS_dispatch_source> *exitTimer; // ivar: _exitTimer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastTimeScannerStarted; // ivar: _lastTimeScannerStarted
@property (readonly, nonatomic) BOOL scanAllowlisted; // ivar: _scanAllowlisted
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *trackRequests; // ivar: _trackRequests
@property (retain, nonatomic) NSMutableDictionary *trackedZones; // ivar: _trackedZones
@property (retain, nonatomic) NSNumber *zoneExitTimeout; // ivar: _zoneExitTimeout


-(BOOL)updateScanner;
-(id)addZoneTrackingRequest:(id)arg0 forClient:(id)arg1 ;
-(id)generateStateDumpStrings;
-(id)getAllZones;
-(id)initWithServer:(id)arg0 ;
-(void)addSingleZoneTrackingRequest:(id)arg0 forClient:(id)arg1 ;
-(void)cancelExitTimer;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManager:(id)arg0 didLoseZone:(id)arg1 mask:(id)arg2 ;
-(void)cleanup;
-(void)printTrackedZones;
-(void)startExitTimer;
-(void)unregisterAllZones;
-(void)unregisterZones:(id)arg0 forClient:(id)arg1 ;
-(void)unregisterZonesForClient:(id)arg0 ;
-(void)unregisterZonesForClient:(id)arg0 updateScanner:(BOOL)arg1 ;
-(void)update;


@end


#endif