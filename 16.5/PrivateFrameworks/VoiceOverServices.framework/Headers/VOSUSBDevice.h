// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VOSUSBDEVICE_H
#define VOSUSBDEVICE_H

@class NSString;
@protocol VOSBluetoothConnectableDevice;

#import <Foundation/Foundation.h>


@interface VOSUSBDevice : NSObject <VOSBluetoothConnectableDevice>



@property (retain, nonatomic) NSString *address; // ivar: _address
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(BOOL)connected;
-(BOOL)connecting;
-(BOOL)paired;
-(void)connect;
-(void)disconnect;
-(void)unpair;


@end


#endif