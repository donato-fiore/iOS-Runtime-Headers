// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSBLUETOOTHCHECKER_H
#define TPSBLUETOOTHCHECKER_H

@class BluetoothManager, CBCentralManager, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TPSBluetoothChecker : NSObject

@property (retain, nonatomic) BluetoothManager *bluetoothManager; // ivar: _bluetoothManager
@property (retain, nonatomic) CBCentralManager *centralManager; // ivar: _centralManager
@property (readonly, nonatomic) NSArray *pairedDevices;
@property (readonly, nonatomic) NSArray *pairedPeers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *peersAccessQueue; // ivar: _peersAccessQueue


+(BOOL)bluetoothPairedForProductID:(unsigned int)arg0 minimumVersion:(id)arg1 withPairedDevices:(id)arg2 ;
+(BOOL)bluetoothPairedForProductID:(unsigned int)arg0 withPairedDevices:(id)arg1 ;
+(BOOL)bluetoothPairedWithTag:(id)arg0 withPairedPeers:(id)arg1 ;
+(id)bluetoothPairedForProductIDs:(id)arg0 minimumVersion:(id)arg1 withPairedDevices:(id)arg2 ;
+(id)bluetoothPairedForProductIDs:(id)arg0 withPairedDevices:(id)arg1 ;
+(id)sharedInstance;
-(BOOL)bluetoothPairedForProductID:(unsigned int)arg0 ;
-(BOOL)bluetoothPairedForProductID:(unsigned int)arg0 minimumVersion:(id)arg1 ;
-(BOOL)bluetoothPairedWithTag:(id)arg0 ;
-(id)devicesAccessQueue;
-(id)init;
-(void)initializeBTManager;


@end


#endif