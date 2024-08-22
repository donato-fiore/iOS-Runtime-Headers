// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISDEVICE_H
#define ISDEVICE_H

@class NSString;
@protocol ISSingleton, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ISDevice : NSObject <ISSingleton>

 {
    NSInteger _biometricStyle;
    NSUInteger _daemonLaunchCount;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_guid;
    CGFloat _lastFreeSpaceRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *deviceName;
@property (readonly) NSString *guid;
@property (readonly) NSString *hardwareName;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *serialNumber;
@property (readonly) Class superclass;
@property (readonly) NSString *systemName;


+(id)sharedInstance;
+(void)setSharedInstance:(id)arg0 ;
-(BOOL)checkCapabilities:(id)arg0 withMismatches:(*id)arg1 ;
-(BOOL)releasePowerAssertion:(id)arg0 ;
-(BOOL)takePowerAssertion:(id)arg0 ;
-(NSInteger)deviceBiometricStyle;
-(id)copyProtocolConditionalContext;
-(id)init;
-(id)supportedOfferDeviceForDevices:(id)arg0 ;
-(int)_deviceClass;
-(void)dealloc;
-(void)requestFreeSpace:(NSUInteger)arg0 atPath:(id)arg1 withOptions:(id)arg2 completionBlock:(id)arg3 ;
-(void)resetLocationAndPrivacy;


@end


#endif