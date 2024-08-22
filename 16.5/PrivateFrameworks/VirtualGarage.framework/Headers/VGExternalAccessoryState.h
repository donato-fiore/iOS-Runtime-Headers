// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGEXTERNALACCESSORYSTATE_H
#define VGEXTERNALACCESSORYSTATE_H

@class NSString, NSNumber, NSMeasurement, NSDictionary;

#import <Foundation/Foundation.h>


@interface VGExternalAccessoryState : NSObject {
    NSString *_displayName;
    NSString *_mapsDisplayName;
}


@property (readonly, nonatomic) NSNumber *activeConnector; // ivar: _activeConnector
@property (retain, nonatomic) NSNumber *batteryCharge; // ivar: _batteryCharge
@property (retain, nonatomic) NSString *chargingArguments; // ivar: _chargingArguments
@property (retain, nonatomic) NSString *colorHex; // ivar: _colorHex
@property (retain, nonatomic) NSString *consumptionArguments; // ivar: _consumptionArguments
@property (retain, nonatomic) NSMeasurement *currentBatteryCapacity; // ivar: _currentBatteryCapacity
@property (retain, nonatomic) NSMeasurement *currentEVRange; // ivar: _currentEVRange
@property (readonly, nonatomic) BOOL isCharging; // ivar: _isCharging
@property (retain, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (retain, nonatomic) NSMeasurement *maxBatteryCapacity; // ivar: _maxBatteryCapacity
@property (retain, nonatomic) NSMeasurement *maxEVRange; // ivar: _maxEVRange
@property (retain, nonatomic) NSMeasurement *minBatteryCapacity; // ivar: _minBatteryCapacity
@property (retain, nonatomic) NSString *model; // ivar: _model
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSDictionary *powerByConnector; // ivar: _powerByConnector
@property (nonatomic) NSNumber *supportedConnectors; // ivar: _supportedConnectors
@property (retain, nonatomic) NSString *year; // ivar: _year


-(id)description;
-(void)_updateWithVehicleInfo:(id)arg0 ;


@end


#endif