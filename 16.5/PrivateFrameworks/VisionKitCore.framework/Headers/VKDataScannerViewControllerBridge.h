// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKDATASCANNERVIEWCONTROLLERBRIDGE_H
#define VKDATASCANNERVIEWCONTROLLERBRIDGE_H

@class NSDate;
@protocol VKDataScannerViewControllerBridgeDelegate;

#import <Foundation/Foundation.h>


@interface VKDataScannerViewControllerBridge : NSObject {
    *MGNotificationTokenStruct _notificationToken;
    BOOL _isScanningForText;
    BOOL _isScanningForBarcodes;
    NSDate *_sessionStartDate;
}


@property (weak, nonatomic) NSObject<VKDataScannerViewControllerBridgeDelegate> *delegate; // ivar: _delegate


+(BOOL)isCameraRestricted;
+(BOOL)isSupported;
-(id)init;
-(void)beginSessionForText:(BOOL)arg0 barcodes:(BOOL)arg1 ;
-(void)dealloc;
-(void)endSession;


@end


#endif