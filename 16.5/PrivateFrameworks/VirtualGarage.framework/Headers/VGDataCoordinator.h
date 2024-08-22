// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGDATACOORDINATOR_H
#define VGDATACOORDINATOR_H

@class NSArray, NSMutableArray, NSTimer, NSMutableSet, NSString;
@protocol VGOEMApplicationFinderUpdates, VGExternalAccessoryUpdating, VGOEMAppSOCStreaming, VGDataCoordinatorDelegate, OS_dispatch_queue, VGOEMApplicationFinding;

#import <Foundation/Foundation.h>

#import "VGExternalAccessory.h"

@interface VGDataCoordinator : NSObject <VGOEMApplicationFinderUpdates, VGExternalAccessoryUpdating, VGOEMAppSOCStreaming>

 {
    id<VGDataCoordinatorDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<VGOEMApplicationFinding> *_applicationFinder;
    NSArray *_applications;
    VGExternalAccessory *_accessory;
    NSMutableArray *_unpairedVehicles;
    NSTimer *_vehicleStateRefreshTimer;
    NSMutableSet *_observedVehicles;
    NSString *_deviceIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *unpairedVehicles;


-(BOOL)shouldUnpairVehicle:(id)arg0 ;
-(CGFloat)_vehicleStateRefreshInterval;
-(NSUInteger)_indexOfVehicleInUnpairedVehicles:(id)arg0 ;
-(id)_applicationForVehicle:(id)arg0 ;
-(id)_applicationRecordForVehicle:(id)arg0 ;
-(id)_oemAppForChargeStreamForVehicle:(id)arg0 ;
-(id)_vehicleStateProviderForVehicle:(id)arg0 ;
-(id)deviceIdentifier;
-(id)initWithApplicationFinder:(id)arg0 externalAccessory:(id)arg1 delegate:(id)arg2 ;
-(void)OEMAppsUpdated:(id)arg0 ;
-(void)_invalidateRefreshTimer;
-(void)_loadAllOEMVehiclesForApps:(id)arg0 completion:(id)arg1 ;
-(void)_loadIapVehicles;
-(void)_refreshStateForTrackedVehicles;
-(void)_removeUnpairedIapVehicleIfNeeded;
-(void)_saveOnboardingInfoForVehicle:(id)arg0 ;
-(void)_setupTimerIfNeeded;
-(void)_startChargeStreamForVehicle:(id)arg0 ;
-(void)_stopChargeStreamForVehicle:(id)arg0 ;
-(void)_updateGarageWithVehicle:(id)arg0 syncAcrossDevices:(BOOL)arg1 ;
-(void)_updateStateOfChargeForVehicle:(id)arg0 syncAcrossDevices:(BOOL)arg1 completion:(id)arg2 ;
-(void)accessoryUpdatedWithVehicle:(id)arg0 ;
-(void)dealloc;
-(void)endAllContinuousUpdates;
-(void)finishOnboardingVehicle:(id)arg0 ;
-(void)forceFetchAllVehicles;
-(void)getLatestStateOfVehicle:(id)arg0 withReply:(id)arg1 ;
-(void)startContinuousUpdatesForVehicle:(id)arg0 ;
-(void)unpairVehicle:(id)arg0 ;
-(void)vehicleStateUpdated:(id)arg0 ;


@end


#endif