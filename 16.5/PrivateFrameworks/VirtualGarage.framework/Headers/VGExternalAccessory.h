// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGEXTERNALACCESSORY_H
#define VGEXTERNALACCESSORY_H

@class NSMutableDictionary, NSString;
@protocol VGExternalAccessory, OS_dispatch_queue, VGExternalAccessoryUpdating;

#import <Foundation/Foundation.h>

#import "VGExternalAccessoryState.h"
#import "VGVehicleState.h"
#import "VGVehicle.h"
#import "VGExternalAccessoryModelFilter.h"

@interface VGExternalAccessory : NSObject <VGExternalAccessory>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_trackedAccessoriesByConnectionId;
    VGExternalAccessoryState *_accessoryState;
    VGVehicleState *_currentVehicleState;
    VGVehicle *_currentVehicle;
    VGExternalAccessoryModelFilter *_modelFilter;
}


@property (weak, nonatomic) NSObject<VGExternalAccessoryUpdating> *accessoryUpdateDelegate; // ivar: _accessoryUpdateDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_currentStatePassesEVRoutingRequirements;
-(BOOL)_isAccessoryTracked:(id)arg0 ;
-(BOOL)_isConnectedToCarPlayAccessory;
-(BOOL)_isConnectedToElectricVehicle;
-(BOOL)_isConnectedVehicleAllowlisted;
-(BOOL)isConnectedToAccessoryWithIdentifier:(id)arg0 ;
-(BOOL)isConnectedToVehicle:(id)arg0 ;
-(id)_bluetoothIdentifier;
-(id)_firmwareId;
-(id)_identifier;
-(id)_modelIdFromArguments:(id)arg0 ;
-(id)_vehicleForCurrentState;
-(id)_vehicleStateForCurrentState;
-(id)init;
-(void)_accessoryDidConnect:(id)arg0 ;
-(void)_accessoryDidDisconnect:(id)arg0 ;
-(void)_accessoryDidUpdateVehicle:(id)arg0 ;
-(void)_addNewCarPlayAccessory:(id)arg0 ;
-(void)_checkAvailableAccessoriesAndAttachIfNeeded;
-(void)_notifyDelegateWithCurrentVehicle;
-(void)_removeCarPlayAccessory:(id)arg0 ;
-(void)_updateFromVehicleInfo:(id)arg0 ;
-(void)dealloc;
-(void)getStateOfChargeForVehicle:(id)arg0 completion:(id)arg1 ;
-(void)listCarsWithCompletion:(id)arg0 ;


@end


#endif