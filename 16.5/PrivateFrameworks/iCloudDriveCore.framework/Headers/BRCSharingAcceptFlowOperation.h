// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSHARINGACCEPTFLOWOPERATION_H
#define BRCSHARINGACCEPTFLOWOPERATION_H

@class BRCOperation, NSArray, NSURL, CKRecordID, CKShareMetadata, BRFileObjectID, NSString, NSError;
@protocol LSOpenResourceOperationDelegate, BRCForegroundClient, BRCOperationSubclass, BRCUserNotifier, OS_dispatch_group, OS_dispatch_queue;


#import "BRCAccountSessionFPFS.h"
#import "BRCItemID.h"
#import "BRCClientZone.h"
#import "BRCAppLibrary.h"
#import "BRCAcceptShareOperation.h"
#import "BRCXPCClient.h"

@interface BRCSharingAcceptFlowOperation : BRCOperation <LSOpenResourceOperationDelegate, BRCForegroundClient, BRCOperationSubclass>

 {
    id<BRCUserNotifier> *_userNotification;
    BRCAccountSessionFPFS *_session;
    NSArray *_acceptationFlow;
    NSUInteger _stepIndex;
    NSURL *_shareURL;
    CKRecordID *_shareID;
    CKShareMetadata *_shareMetadata;
    CKRecordID *_linkItemRecordID;
    BRCItemID *_linkItemID;
    BRCItemID *_rootItemID;
    BRFileObjectID *_linkFileObjectID;
    NSString *_unsaltedBookmarkData;
    BRCClientZone *_clientZone;
    BRCAppLibrary *_appLibrary;
    BOOL _needsZoneAndAppLibraryActivation;
    BRCAcceptShareOperation *_acceptOperation;
    BOOL _allowsDirectoryFaults;
    NSURL *_liveFileURL;
    BOOL _accessedSecurityScope;
    NSObject<OS_dispatch_group> *_shareAcceptGroup;
    NSString *_rootFilename;
    NSString *_linkFilename;
    BRCXPCClient *_xpcClient;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_shareAcceptationError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL skipOpenInApp; // ivar: _skipOpenInApp
@property (readonly) Class superclass;


+(Class)userNotificationClass;
+(id)_runningShareIDs;
+(void)_openAppStoreForShareURL:(id)arg0 ;
+(void)_openShareURLInWebBrowser:(id)arg0 withReason:(id)arg1 ;
+(void)_openiCloudSettings;
-(BOOL)_isDirectoryLinkInsideFolderShare;
-(BOOL)_isDocumentLinkInsideFolderShare;
-(BOOL)_isFolderShare;
-(BOOL)_isLinkInsideFolderShare;
-(BOOL)_isOwner;
-(BOOL)_isOwnerOrShareAlreadyAccepted;
-(BOOL)_isiWorkLinkInsideFolderShare;
-(BOOL)_isiWorkShare;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)_stepNameAtIndex:(NSUInteger)arg0 withPrefix:(id)arg1 ;
-(id)createActivity;
-(id)initWithShareMetadata:(id)arg0 client:(id)arg1 session:(id)arg2 ;
-(id)subclassableDescriptionWithContext:(id)arg0 ;
-(void)_activateSharedZoneIfNeeded;
-(void)_checkIfShouldWaitUntilDownloadCompletion;
-(void)_createServerFaultIfPossibleWithCompletion:(id)arg0 ;
-(void)_createSideFaultOnDisk;
-(void)_endAcceptationFlow;
-(void)_fetchOpenInfoOnFileObjectID:(id)arg0 completion:(id)arg1 ;
-(void)_finishShareAccept;
-(void)_isAccountRestricted;
-(void)_isAppInstalled;
-(void)_isFolderSharingSupported;
-(void)_isUserSignedInToiCloudDrive;
-(void)_jumpToSelector:(SEL)arg0 ;
-(void)_jumpToSelectorInQueue:(SEL)arg0 ;
-(void)_locateSharedItemOnDisk;
-(void)_locateSharedItemOnOwner;
-(void)_locateSharedItemOnRecipient;
-(void)_openDocumentInDocumentsAppIfInstalled:(id)arg0 ;
-(void)_openSharedItemIfStillNeeded;
-(void)_openSharedSideFaultFile;
-(void)_openSharedSideFaultFileWithAppID:(id)arg0 ;
-(void)_openiWorkAppPreemptively;
-(void)_parseShareMetadata;
-(void)_performNextStep;
-(void)_performNextStepInQueue;
-(void)_prepareToDownloadSharedDocument;
-(void)_setSpotlightAttribute;
-(void)_showGenericErrorAndFinish:(id)arg0 ;
-(void)_showSharingJoinDialog;
-(void)_startShareAccept;
-(void)_waitForSharedItemToBeOnDiskOnOwner;
-(void)_waitForSharedItemToBeOnDiskOnRecipient;
-(void)_waitForSharedItemToSyncDownOnOwner;
-(void)_waitForSharedItemToSyncDownOnRecipient;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;
-(void)moveDialogToFront;
-(void)openResourceOperation:(id)arg0 didFailWithError:(id)arg1 ;
-(void)openResourceOperationDidComplete:(id)arg0 ;


@end


#endif