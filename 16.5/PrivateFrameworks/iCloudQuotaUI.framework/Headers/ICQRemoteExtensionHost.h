// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQREMOTEEXTENSIONHOST_H
#define ICQREMOTEEXTENSIONHOST_H

@protocol _TtP13iCloudQuotaUI15HostXPCProtocol_;

#import <Foundation/Foundation.h>


@interface ICQRemoteExtensionHost : NSObject <_TtP13iCloudQuotaUI15HostXPCProtocol_>

 {
    ? presentedVC;
    ? flowCompletion;
}




-(id)init;
-(void)dismissViewControllerWithError:(id)arg0 ;
-(void)presentRemoteViewControllerWithContext:(id)arg0 presentingViewController:(id)arg1 completion:(id)arg2 ;


@end


#endif