// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUISTORAGEUSEDCONTROLLER_H
#define ICQUISTORAGEUSEDCONTROLLER_H

@class UINavigationController, NSString, ACAccount, PSSpecifier;
@protocol DelayedPushDelegate;

#import <Foundation/Foundation.h>

#import "ICQPreferencesRemoteUIDelegate.h"
#import "ICQUIPreferencesLiftUIDelegate.h"

@interface ICQUIStorageUsedController : NSObject <DelayedPushDelegate>

 {
    UINavigationController *_navigationController;
    NSString *_appBundleID;
    ACAccount *_account;
    ICQPreferencesRemoteUIDelegate *_ruiDelegate;
    ICQUIPreferencesLiftUIDelegate *_liftUIDelegate;
    PSSpecifier *_activeSpecifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAppBundleID:(id)arg0 account:(id)arg1 navigationController:(id)arg2 ;
-(void)_beginLiftUIFlowWithURL:(id)arg0 ;
-(void)_beginRUIFlowWithURL:(id)arg0 ;
-(void)_startSpinnerInSpecifier:(id)arg0 ;
-(void)_stopSpinnerInSpecifier:(id)arg0 ;
-(void)beginLoading;
-(void)beginLoadingForSpecifier:(id)arg0 ;
-(void)loadFailed:(id)arg0 withError:(id)arg1 ;
-(void)loadFinished:(id)arg0 ;
-(void)loadStarted:(id)arg0 ;


@end


#endif