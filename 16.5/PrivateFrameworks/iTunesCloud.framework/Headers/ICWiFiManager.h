// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICWIFIMANAGER_H
#define ICWIFIMANAGER_H

@class NSString;
@protocol ICEnvironmentMonitorObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICWiFiManager : NSObject <ICEnvironmentMonitorObserver>

 {
    *__SCPreferences _wifiPreferences;
    NSObject<OS_dispatch_queue> *_accessQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isWiFiAssociated) BOOL wiFiAssociated; // ivar: _wiFiAssociated
@property (nonatomic, getter=isWiFiEnabled) BOOL wiFiEnabled; // ivar: _wiFiEnabled


+(id)sharedWiFiManager;
-(BOOL)_getWiFiAssociated;
-(BOOL)_getWiFiEnabledFromPrefs;
-(id)_processIdentifier;
-(id)init;
-(void)_wifiCallBack:(unsigned int)arg0 ;
-(void)dealloc;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;


@end


#endif