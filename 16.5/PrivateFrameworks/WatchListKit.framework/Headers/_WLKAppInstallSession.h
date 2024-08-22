// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WLKAPPINSTALLSESSION_H
#define _WLKAPPINSTALLSESSION_H

@class NSString, AMSLookupItemOffer;
@protocol LSApplicationWorkspaceObserverProtocol, OS_dispatch_queue, WLKInstallable;

#import <Foundation/Foundation.h>


@interface _WLKAppInstallSession : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    id *_completion;
    NSObject<OS_dispatch_queue> *_queue;
    id *_progressHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<WLKInstallable> *installable; // ivar: _installable
@property (readonly, nonatomic) AMSLookupItemOffer *offer; // ivar: _offer
@property (readonly) Class superclass;


+(id)_matchingAppProxyFromProxies:(id)arg0 forInstallable:(id)arg1 ;
-(BOOL)_canOpenAppWithBundleID:(id)arg0 ;
-(id)initWithInstallable:(id)arg0 offer:(id)arg1 ;
-(void)_doPurchaseWithAppAdamID:(id)arg0 offer:(id)arg1 ;
-(void)_sendCompletionWithError:(id)arg0 ;
-(void)applicationInstallsDidChange:(id)arg0 ;
-(void)applicationInstallsDidStart:(id)arg0 ;
-(void)applicationsDidFailToInstall:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsWillInstall:(id)arg0 ;
// -(void)beginInstallationWithProgressHandler:(id)arg0 completion:(unk)arg1  ;
-(void)dealloc;


@end


#endif