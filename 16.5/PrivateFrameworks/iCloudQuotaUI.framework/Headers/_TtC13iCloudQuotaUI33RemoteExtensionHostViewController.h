// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13ICLOUDQUOTAUI33REMOTEEXTENSIONHOSTVIEWCONTROLLER_H
#define _TTC13ICLOUDQUOTAUI33REMOTEEXTENSIONHOSTVIEWCONTROLLER_H

@class UIViewController;
@protocol _EXHostViewControllerDelegate;



@interface _TtC13iCloudQuotaUI33RemoteExtensionHostViewController : UIViewController <_EXHostViewControllerDelegate>

 {
    ? host;
    ? $__lazy_storage_$_hostViewController;
    ? appExtension;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)hostViewControllerDidActivate:(id)arg0 ;
-(void)hostViewControllerWillDeactivate:(id)arg0 error:(id)arg1 ;
-(void)loadView;


@end


#endif