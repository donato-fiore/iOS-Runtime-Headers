// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICLOUDSHARINGCONTROLLER_H
#define UICLOUDSHARINGCONTROLLER_H

@class UIActivityViewController, CKContainer, CKContainerSetupInfo, NSString, NSDictionary, CKShare, CKSystemSharingUIObserver;
@protocol _UISharingPublicController, UIActionSheetPresentationControllerDelegate, _UIRemoteViewControllerContaining, OS_dispatch_semaphore, UICloudSharingControllerDelegate, _UICloudSharingControllerDelegate_Internal;


#import "UIViewController.h"
#import "_UIRemoteViewController.h"
#import "_UIResilientRemoteViewContainerViewController.h"
#import "UIImage.h"
#import "_UIShareInvitationRemoteViewController.h"

@interface UICloudSharingController : UIViewController <_UISharingPublicController, UIActionSheetPresentationControllerDelegate, _UIRemoteViewControllerContaining>

 {
    NSObject<OS_dispatch_semaphore> *_viewServiceValidSema;
    BOOL _shareNeedsDeletion;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (retain, nonatomic, getter=_activityViewController, setter=_setActivityViewController:) UIActivityViewController *activityViewController; // ivar: _activityViewController
@property (nonatomic) NSUInteger availablePermissions; // ivar: _availablePermissions
@property (retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController; // ivar: _childViewController
@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (retain, nonatomic) CKContainerSetupInfo *containerSetupInfo; // ivar: _containerSetupInfo
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UICloudSharingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic, getter=_folderSubitemName, setter=_setFolderSubitemName:) NSString *folderSubitemName; // ivar: _folderSubitemName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_headerPrimaryImage, setter=_setHeaderPrimaryImage:) UIImage *headerPrimaryImage; // ivar: _headerPrimaryImage
@property (retain, nonatomic, getter=_headerSecondaryImage, setter=_setHeaderSecondaryImage:) UIImage *headerSecondaryImage; // ivar: _headerSecondaryImage
@property (weak, nonatomic) NSObject<_UICloudSharingControllerDelegate_Internal> *internalDelegate; // ivar: _internalDelegate
@property (weak, nonatomic, getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:) UIViewController *originalPresentingViewController; // ivar: _originalPresentingViewController
@property (retain, nonatomic, getter=_participantDetails, setter=_setParticipantDetails:) NSDictionary *participantDetails; // ivar: _participantDetails
@property (copy, nonatomic) id *preparationHandler; // ivar: _preparationHandler
@property (nonatomic, getter=_primaryAuxiliarySwitchState, setter=_setPrimaryAuxiliarySwitchState:) BOOL primaryAuxiliarySwitchState; // ivar: _primaryAuxiliarySwitchState
@property (retain, nonatomic, getter=_primaryAuxiliarySwitchTitle, setter=_setPrimaryAuxiliarySwitchTitle:) NSString *primaryAuxiliarySwitchTitle; // ivar: _primaryAuxiliarySwitchTitle
@property (readonly, nonatomic, getter=_remoteViewController) _UIShareInvitationRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (retain, nonatomic, getter=_rootFolderTitle, setter=_setRootFolderTitle:) NSString *rootFolderTitle; // ivar: _rootFolderTitle
@property (nonatomic, getter=_secondaryAuxiliarySwitchState, setter=_setSecondaryAuxiliarySwitchState:) BOOL secondaryAuxiliarySwitchState; // ivar: _secondaryAuxiliarySwitchState
@property (retain, nonatomic, getter=_secondaryAuxiliarySwitchTitle, setter=_setSecondaryAuxiliarySwitchTitle:) NSString *secondaryAuxiliarySwitchTitle; // ivar: _secondaryAuxiliarySwitchTitle
@property (retain, nonatomic, getter=_sectionTitleForAuxiliarySwitches, setter=_setSectionTitleForAuxiliarySwitches:) NSString *sectionTitleForAuxiliarySwitches; // ivar: _sectionTitleForAuxiliarySwitches
@property (retain, nonatomic) CKShare *share; // ivar: _share
@property (retain, nonatomic, getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:) UIViewController *strongReferenceToOurself; // ivar: _strongReferenceToOurself
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_systemSharingUIObserver, setter=_setSystemSharingUIObserver:) CKSystemSharingUIObserver *systemSharingUIObserver; // ivar: _systemSharingUIObserver


+(id)allowedSharingOptionsFromPermissions:(NSUInteger)arg0 ;
-(BOOL)_requiresCustomPresentationController;
-(NSInteger)modalPresentationStyle;
-(id)_customPresentationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)_sharingViewPresentationController;
-(id)activityItemSource;
-(id)createActivityLinkMetadata;
-(id)excludedActivityTypes;
-(id)initWithPreparationHandler:(id)arg0 ;
-(id)initWithShare:(id)arg0 container:(id)arg1 ;
-(id)initWithShare:(id)arg0 preparationHandler:(id)arg1 ;
-(void)__viewControllerWillBePresented:(BOOL)arg0 ;
-(void)_callPreparationHandler:(id)arg0 ;
-(void)_cloudSharingControllerDidActivateAddPeopleWithRemoteSourceX:(CGFloat)arg0 y:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;
-(void)_cloudSharingControllerDidActivateShowActivityController;
-(void)_cloudSharingControllerDidActivateShowSharedFolder;
-(void)_cloudSharingControllerDidChooseTransport:(id)arg0 ;
-(void)_cloudSharingControllerDidModifyPrimarySwitch:(BOOL)arg0 ;
-(void)_cloudSharingControllerDidModifySecondarySwitch:(BOOL)arg0 ;
-(void)_cloudSharingControllerDidUpdateRootFolderURL:(id)arg0 ;
-(void)_deleteShareAfterDismissalWithoutSave:(id)arg0 ;
-(void)_didDismiss;
-(void)_dismissForActivityRepresentation:(id)arg0 ;
-(void)_dismissViewControllerWithError:(id)arg0 ;
-(void)_performAuxiliaryActionWithCompletion:(id)arg0 ;
-(void)_performHeaderActionWithCompletion:(id)arg0 ;
-(void)_representFullscreenAfterActivityDismissal:(id)arg0 ;
-(void)_requestSavedShareWithCompletion:(id)arg0 ;
-(void)_sendDidStopSharingDelegate;
-(void)_shareDidChange:(id)arg0 ;
-(void)addResizingChildViewController:(id)arg0 ;
-(void)dealloc;


@end


#endif