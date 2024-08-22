// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGVEHICLE_H
#define VGVEHICLE_H

@class NSString, NSDate, NSData, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VGVehicleState.h"

@interface VGVehicle : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *colorHex; // ivar: _colorHex
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) VGVehicleState *currentVehicleState; // ivar: _currentVehicleState
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *headUnitBluetoothIdentifier; // ivar: _headUnitBluetoothIdentifier
@property (readonly, copy, nonatomic) NSString *headUnitIdentifier; // ivar: _headUnitIdentifier
@property (retain, nonatomic) NSString *iapIdentifier; // ivar: _iapIdentifier
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isPureElectricVehicle;
@property (readonly, copy, nonatomic) NSDate *lastStateUpdateDate; // ivar: _lastStateUpdateDate
@property (copy, nonatomic) NSString *licensePlate; // ivar: _licensePlate
@property (copy, nonatomic) NSString *lprPowerType; // ivar: _lprPowerType
@property (copy, nonatomic) NSString *lprVehicleType; // ivar: _lprVehicleType
@property (readonly, copy, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (readonly, copy, nonatomic) NSString *model; // ivar: _model
@property (retain, nonatomic) NSString *pairedAppIdentifier; // ivar: _pairedAppIdentifier
@property (retain, nonatomic) NSString *pairedAppInstallDeviceIdentifier; // ivar: _pairedAppInstallDeviceIdentifier
@property (retain, nonatomic) NSData *pairedAppInstallSessionIdentifier; // ivar: _pairedAppInstallSessionIdentifier
@property (readonly, copy, nonatomic) NSDictionary *powerByConnector; // ivar: _powerByConnector
@property (retain, nonatomic) NSString *siriIntentsIdentifier; // ivar: _siriIntentsIdentifier
@property (nonatomic) NSUInteger supportedConnectors; // ivar: _supportedConnectors
@property (readonly, copy, nonatomic) NSString *year; // ivar: _year


+(BOOL)supportsSecureCoding;
-(BOOL)_canBeUpdatedFromState:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)batteryPercentageBasedOfCapacity;
-(NSUInteger)displayedBatteryPercentage;
-(id)_identifierForVehicleStateOrigin:(NSInteger)arg0 ;
-(id)_vehicleByUpdatingWithVehicle:(id)arg0 ;
-(id)combinedDisplayName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayName:(id)arg0 year:(id)arg1 manufacturer:(id)arg2 model:(id)arg3 colorHex:(id)arg4 headUnitIdentifier:(id)arg5 headUnitBluetoothIdentifier:(id)arg6 supportedConnectors:(NSUInteger)arg7 powerByConnector:(id)arg8 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 year:(id)arg2 manufacturer:(id)arg3 model:(id)arg4 colorHex:(id)arg5 licensePlate:(id)arg6 lprVehicleType:(id)arg7 lprPowerType:(id)arg8 ;
-(id)initWithLicensePlate:(id)arg0 lprVehicleType:(id)arg1 lprPowerType:(id)arg2 ;
-(id)initWithMapsSyncVehicle:(id)arg0 ;
-(void)_setVehicleState:(id)arg0 ;
-(void)_updateWithVehicleState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)pairToIapIdentifier:(id)arg0 bluetoothIdentifier:(id)arg1 ;


@end


#endif