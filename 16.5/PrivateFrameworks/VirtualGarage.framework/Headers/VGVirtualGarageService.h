// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGVIRTUALGARAGESERVICE_H
#define VGVIRTUALGARAGESERVICE_H

@class NSHashTable, geo_isolater, GEOObserverHashTable, NSString, NSXPCConnection;
@protocol VGVirtualGarageObserver, VGVirtualGarageActions, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VGVirtualGarageService : NSObject <VGVirtualGarageObserver, VGVirtualGarageActions>

 {
    NSHashTable *_clients;
    geo_isolater *_clientsIsolater;
    GEOObserverHashTable *_observers;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}


@property (copy) NSString *activeVehicleIdentifier; // ivar: _activeVehicleIdentifier
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


+(BOOL)canUseVirtualGarageXPCService;
+(id)sharedService;
-(id)init;
-(id)messageTargetWithErrorReply:(id)arg0 ;
-(void)_clearActiveVehicleIdentifierIfNeeded:(id)arg0 ;
-(void)_closeConnection;
-(void)_openConnection;
-(void)closeForClient:(id)arg0 ;
-(void)openForClient:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)virtualGarage:(id)arg0 didUpdateUnpairedVehicles:(id)arg1 ;
-(void)virtualGarageAddVehicle:(id)arg0 ;
-(void)virtualGarageDidUpdate:(id)arg0 ;
-(void)virtualGarageEndContinuousUpdates;
-(void)virtualGarageForceFetchAllVehicles;
-(void)virtualGarageGetGarageWithReply:(id)arg0 ;
-(void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)arg0 syncAcrossDevices:(BOOL)arg1 withReply:(id)arg2 ;
-(void)virtualGarageGetListOfUnpairedVehiclesWithReply:(id)arg0 ;
-(void)virtualGarageOnboardVehicle:(id)arg0 ;
-(void)virtualGarageRemoveVehicle:(id)arg0 ;
-(void)virtualGarageSaveVehicle:(id)arg0 ;
-(void)virtualGarageSelectVehicle:(id)arg0 ;
-(void)virtualGarageSetAssumesFullCharge:(BOOL)arg0 ;
-(void)virtualGarageStartContinuousUpdatesIfNeeded;


@end


#endif