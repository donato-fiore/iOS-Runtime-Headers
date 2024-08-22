// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIP2PAWDLSTATEMONITOR_H
#define WIFIP2PAWDLSTATEMONITOR_H

@class NSMutableArray, NSString;
@protocol WiFiP2PAWDLStateMonitorXPCDelegate, WiFiP2PXPCConnectionDelegate;

#import <Foundation/Foundation.h>

#import "WiFiP2PXPCConnection.h"

@interface WiFiP2PAWDLStateMonitor : NSObject <WiFiP2PAWDLStateMonitorXPCDelegate, WiFiP2PXPCConnectionDelegate>

 {
    WiFiP2PXPCConnection *_xpcConnection;
    NSMutableArray *_interestedUniqueIdentifiers;
}


@property (copy, nonatomic) id *channelSequenceUpdatedEventHandler; // ivar: _channelSequenceUpdatedEventHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *lowLatencyStatisticsUpdatedHandler; // ivar: _lowLatencyStatisticsUpdatedHandler
@property (copy, nonatomic) id *realtimeModeUpdatedHandler; // ivar: _realtimeModeUpdatedHandler
@property (copy, nonatomic) id *serviceAvailabilityUpdatedHandler; // ivar: _serviceAvailabilityUpdatedHandler
@property (copy, nonatomic) id *softAPChannelChangedEventHandler; // ivar: _softAPChannelChangedEventHandler
@property (copy, nonatomic) id *stateUpdatedHandler; // ivar: _stateUpdatedHandler
@property (copy, nonatomic) id *statisticsUpdatedHandler; // ivar: _statisticsUpdatedHandler
@property (readonly) Class superclass;
@property (copy, nonatomic) id *threadCoexistenceEventHandler; // ivar: _threadCoexistenceEventHandler


-(id)copyActiveServiceUniqueIdentifiers;
-(id)copyLowLatencyStatistics;
-(id)copySidecarStatistics;
-(id)copyStatistics;
-(id)exportedInterface;
-(id)exportedObject;
-(id)init;
-(id)lowLatencyStatisticsDifferenceBetweenPrevious:(id)arg0 current:(id)arg1 ;
-(id)queryPeerDatabase;
-(int)queryAverageRSSIForPeer:(id)arg0 ;
-(void)availabilityUpdatedForService:(id)arg0 error:(id)arg1 ;
-(void)beginMonitoring;
-(void)channelSequenceChangedEvent:(id)arg0 ;
-(void)endMonitoring;
-(void)registerAvailabilityUpdatesForService:(id)arg0 ;
-(void)softAPChannelChangedEvent:(BOOL)arg0 channelNumber:(unsigned short)arg1 ;
-(void)startConnectionUsingProxy:(id)arg0 completionHandler:(id)arg1 ;
-(void)threadCoexistenceEvent:(id)arg0 ;
-(void)updatedAWDLState:(id)arg0 ;
-(void)updatedLowLatencyStatistics;
-(void)updatedRealtimeMode:(BOOL)arg0 ;
-(void)updatedStatistics;


@end


#endif