// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISHAREINVITATIONREMOTEVIEWCONTROLLER_H
#define _UISHAREINVITATIONREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString, UIViewController<_UISharingPublicController>;
@protocol _UIShareInvitationViewControllerHost;



@interface _UIShareInvitationRemoteViewController : UIRemoteViewController <_UIShareInvitationViewControllerHost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController<_UISharingPublicController> *publicController; // ivar: _publicController
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)_cloudSharingControllerDidActivateAddPeopleWithRemoteSourceX:(CGFloat)arg0 y:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;
-(void)_cloudSharingControllerDidActivateShowActivityController;
-(void)_cloudSharingControllerDidActivateShowSharedFolder;
-(void)_cloudSharingControllerDidChooseTransport:(id)arg0 ;
-(void)_cloudSharingControllerDidModifyPrimarySwitch:(BOOL)arg0 ;
-(void)_cloudSharingControllerDidModifySecondarySwitch:(BOOL)arg0 ;
-(void)_cloudSharingControllerDidUpdateRootFolderURL:(id)arg0 ;
-(void)_dismissAndRepresentForActivity:(id)arg0 ;
-(void)_dismissForActivityRepresentation:(id)arg0 ;
-(void)_dismissViewController;
-(void)_dismissViewControllerWithError:(id)arg0 ;
-(void)_performAuxiliaryActionWithCompletion:(id)arg0 ;
-(void)_performHeaderActionWithCompletion:(id)arg0 ;
-(void)_representFullscreenAfterActivityDismissal:(id)arg0 ;
-(void)_requestContentSize:(struct CGSize )arg0 ;
-(void)_requestSavedShareWithCompletion:(id)arg0 ;
-(void)_shareDidChange:(id)arg0 ;
-(void)_shareWasMadePrivate;
-(void)_tintColorDidChangeToColor:(id)arg0 ;
-(void)_updateTraitCollectionForPopoverStatus;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif