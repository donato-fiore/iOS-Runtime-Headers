// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKACCOUNTMONITOR_H
#define WLKACCOUNTMONITOR_H

@class ACAccount, NSString, ACMonitoredAccountStore;
@protocol ACMonitoredAccountStoreDelegateProtocol;

#import <Foundation/Foundation.h>


@interface WLKAccountMonitor : NSObject <ACMonitoredAccountStoreDelegateProtocol>



@property (readonly, nonatomic) ACAccount *activeAccount; // ivar: _activeAccount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ACMonitoredAccountStore *monitoredAccountStore; // ivar: _monitoredAccountStore
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_shouldNotifyAccountChange:(id)arg0 newAccount:(id)arg1 ;
-(BOOL)_shouldNotifyStoreFrontChange:(id)arg0 newAccount:(id)arg1 ;
-(id)init;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif