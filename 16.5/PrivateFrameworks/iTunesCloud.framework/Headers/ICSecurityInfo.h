// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSECURITYINFO_H
#define ICSECURITYINFO_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICSecurityInfo : NSObject {
    BOOL _hasLoadedDeviceClassCUnlocked;
    BOOL _hasLoadedContentProtectionEnabled;
    int _firstUnlockNotificationToken;
    NSMutableArray *_pendingFirstUnlockBlocks;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}


@property (readonly, nonatomic, getter=isContentProtectionEnabled) BOOL contentProtectionEnabled; // ivar: _isContentProtectionEnabled
@property (readonly, nonatomic, getter=isDeviceClassCUnlocked) BOOL deviceClassCUnlocked; // ivar: _isDeviceClassCUnlocked
@property (readonly, nonatomic, getter=isDeviceUnlocked) BOOL deviceUnlocked;


+(id)sharedSecurityInfo;
-(id)init;
-(void)_getContentProtectionEnabled:(*BOOL)arg0 isDeviceClassCUnlocked:(*BOOL)arg1 ;
-(void)_loadContentProtectionEnabled:(BOOL)arg0 isDeviceClassCUnlocked:(BOOL)arg1 ;
-(void)_processFirstUnlockNotification;
-(void)dealloc;
-(void)performBlockAfterFirstUnlock:(id)arg0 ;


@end


#endif