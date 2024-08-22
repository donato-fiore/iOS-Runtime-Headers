// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRCRAPPORTDEVICEIMPL_H
#define TVRCRAPPORTDEVICEIMPL_H

@class NSString;
@protocol _TVRCDeviceImpl, _TVRCCompanionLinkClientWrapperDelegate;

#import <Foundation/Foundation.h>

#import "TVRXDevice.h"
#import "TVRCRPCompanionLinkClientWrapper.h"
#import "TVRXKeyboardController.h"
#import "TVRCRapportRemoteTextInputKeyboardImpl.h"

@interface TVRCRapportDeviceImpl : NSObject <_TVRCDeviceImpl, _TVRCCompanionLinkClientWrapperDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) TVRXDevice *device; // ivar: _device
@property (retain, nonatomic) TVRCRPCompanionLinkClientWrapper *deviceWrapper; // ivar: _deviceWrapper
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TVRXKeyboardController *keyboardController; // ivar: _keyboardController
@property (retain, nonatomic) TVRCRapportRemoteTextInputKeyboardImpl *keyboardImpl; // ivar: _keyboardImpl
@property (readonly) Class superclass;


+(id)implWithDevice:(id)arg0 ;
-(BOOL)isPaired;
-(BOOL)supportsTouchEvents;
-(NSInteger)connectionType;
-(NSUInteger)pairingCapability;
-(id)alternateIdentifiers;
-(id)identifier;
-(id)initWithDevice:(id)arg0 ;
-(id)model;
-(id)name;
-(id)supportedButtons;
-(id)voiceRecorder;
-(void)_setupKeyboardController;
-(void)connect;
-(void)connectedToDevice:(id)arg0 ;
-(void)deviceEncounteredAuthenticationChallenge:(id)arg0 ;
-(void)deviceUpdatedSupportedButtons:(id)arg0 ;
-(void)disconnect;
-(void)disconnectedFromDevice:(id)arg0 error:(id)arg1 ;
-(void)sendButtonEvent:(id)arg0 ;
-(void)sendEvent:(id)arg0 options:(id)arg1 response:(id)arg2 ;
-(void)sendGameControllerEvent:(id)arg0 ;
-(void)sendTouchEvent:(id)arg0 ;
-(void)setAuthenticationSupported:(BOOL)arg0 ;


@end


#endif