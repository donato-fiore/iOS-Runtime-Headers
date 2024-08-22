// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVRCRMSDEVICEIMPL_H
#define _TVRCRMSDEVICEIMPL_H

@class NSString;
@protocol _TVRCRMSDeviceWrapperDelegate, _TVRCDeviceImpl;

#import <Foundation/Foundation.h>

#import "TVRXDevice.h"
#import "_TVRCRMSDeviceWrapper.h"

@interface _TVRCRMSDeviceImpl : NSObject <_TVRCRMSDeviceWrapperDelegate, _TVRCDeviceImpl>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) TVRXDevice *device; // ivar: _device
@property (retain, nonatomic) _TVRCRMSDeviceWrapper *deviceWrapper; // ivar: _deviceWrapper
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)implWithDevice:(id)arg0 ;
-(BOOL)isPaired;
-(BOOL)supportsTouchEvents;
-(NSInteger)connectionType;
-(NSUInteger)pairingCapability;
-(id)alternateIdentifiers;
-(id)identifier;
-(id)initWithDevice:(id)arg0 ;
-(id)keyboardController;
-(id)model;
-(id)name;
-(id)supportedButtons;
-(id)voiceRecorder;
-(void)connect;
-(void)connectedToDevice:(id)arg0 ;
-(void)deviceEncounteredAuthenticationChallenge:(id)arg0 ;
-(void)deviceUpdatedSupportedButtons:(id)arg0 ;
-(void)disconnect;
-(void)disconnectedFromDevice:(id)arg0 error:(id)arg1 ;
-(void)sendButtonEvent:(id)arg0 ;
-(void)sendGameControllerEvent:(id)arg0 ;
-(void)sendTouchEvent:(id)arg0 ;
-(void)setAuthenticationSupported:(BOOL)arg0 ;


@end


#endif