// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WPTRANSFER_H
#define WPTRANSFER_H

@class NSUUID, NSMutableSet, NSMutableData;
@protocol WPTransferDelegate;


#import "WPClient.h"

@interface WPTransfer : WPClient

@property BOOL advertiserConnected; // ivar: _advertiserConnected
@property BOOL advertising; // ivar: _advertising
@property BOOL connectedToPeripheral; // ivar: _connectedToPeripheral
@property (retain) NSUUID *currentPeripheralUUID; // ivar: _currentPeripheralUUID
@property (retain) NSUUID *currentlySubscribedCentral; // ivar: _currentlySubscribedCentral
@property (weak) NSObject<WPTransferDelegate> *delegate; // ivar: _delegate
@property (retain) NSMutableSet *ignoredDevices; // ivar: _ignoredDevices
@property NSInteger lockScanTimer; // ivar: _lockScanTimer
@property (retain) NSMutableData *notificationData; // ivar: _notificationData
@property BOOL scanning; // ivar: _scanning
@property BOOL sendingTransferComplete; // ivar: _sendingTransferComplete
@property BOOL sentEOM; // ivar: _sentEOM
@property BOOL unsubscribeComing; // ivar: _unsubscribeComing


-(id)clientAsString;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 machName:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 machName:(id)arg2 options:(id)arg3 ;
-(void)advertisingFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg0 ;
-(void)advertisingStartedOfType:(unsigned char)arg0 ;
-(void)advertisingStoppedOfType:(unsigned char)arg0 withError:(id)arg1 ;
-(void)central:(id)arg0 subscribed:(BOOL)arg1 toCharacteristic:(id)arg2 inService:(id)arg3 ;
-(void)connectedDevice:(id)arg0 withError:(id)arg1 shouldDiscover:(BOOL)arg2 ;
-(void)dealloc;
-(void)deviceDiscovered:(id)arg0 ;
-(void)disconnectedDevice:(id)arg0 withError:(id)arg1 ;
-(void)discoveredCharacteristicsAndServices:(id)arg0 forPeripheral:(id)arg1 ;
-(void)ignoreDevice;
-(void)invalidate;
-(void)populateClientGATT:(id)arg0 ;
-(void)receivedData:(id)arg0 ;
-(void)receivedData:(id)arg0 forCharacteristic:(id)arg1 inService:(id)arg2 forPeripheral:(id)arg3 ;
-(void)scanningFailedToStart:(id)arg0 ofType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg0 ;
-(void)scanningStoppedOfType:(unsigned char)arg0 ;
-(void)sentData:(id)arg0 forCharacteristic:(id)arg1 inService:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4 ;
-(void)sentData:(id)arg0 toEndpoint:(id)arg1 forPeripheral:(id)arg2 withError:(id)arg3 ;
-(void)startAdvertising;
-(void)startScan;
-(void)stateDidChange:(NSInteger)arg0 ;
-(void)stopAdvertising;
-(void)stopScan;
-(void)transferFailed:(id)arg0 ;
-(void)updatedNotificationState:(BOOL)arg0 forCharacteristic:(id)arg1 inService:(id)arg2 withPeripheral:(id)arg3 ;


@end


#endif