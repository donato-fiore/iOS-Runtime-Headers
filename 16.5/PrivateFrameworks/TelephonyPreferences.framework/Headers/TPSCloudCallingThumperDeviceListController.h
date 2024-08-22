// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSCLOUDCALLINGTHUMPERDEVICELISTCONTROLLER_H
#define TPSCLOUDCALLINGTHUMPERDEVICELISTCONTROLLER_H

@class NSString;
@protocol TUCallCapabilitiesDelegatePrivate;


#import "TPSCloudCallingDeviceListController.h"
#import "TPSCloudCallingThumperProvisioningURLController.h"
#import "TPSCloudCallingThumperController.h"

@interface TPSCloudCallingThumperDeviceListController : TPSCloudCallingDeviceListController <TUCallCapabilitiesDelegatePrivate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TPSCloudCallingThumperProvisioningURLController *provisioningURLController; // ivar: _provisioningURLController
@property (readonly) Class superclass;
@property (readonly, nonatomic) TPSCloudCallingThumperController *thumperController; // ivar: _thumperController


-(id)init;
-(id)isDeviceSwitchOn:(id)arg0 ;
-(id)isMainSwitchOn:(id)arg0 ;
-(void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg0 ;
-(void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(id)arg0 ;
-(void)setDeviceSwitchOn:(id)arg0 specifier:(id)arg1 ;
-(void)setMainSwitchOn:(id)arg0 specifier:(id)arg1 ;


@end


#endif