// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCFILEPROVIDINGREQUESTOPERATION_H
#define BRCFILEPROVIDINGREQUESTOPERATION_H

@class BRCFrameworkOperation, NSString, NSMutableSet, NSSet, NSMutableArray, NSError;
@protocol BRCDownloadTracking, BRCReachabilityDelegate, BRCListOperationDelegate, BRCOperationSubclass;


#import "BRCAccountSessionFPFS.h"
#import "BRCXPCClient.h"
#import "BRCDocumentItem.h"

@interface BRCFileProvidingRequestOperation : BRCFrameworkOperation <BRCDownloadTracking, BRCReachabilityDelegate, BRCListOperationDelegate, BRCOperationSubclass>

 {
    NSString *_etagIfLoser;
    NSString *_stageFileName;
    BRCAccountSessionFPFS *_session;
    BRCXPCClient *_client;
    NSMutableSet *_trackerFileObjects;
    NSMutableSet *_appLibrariesMonitored;
    BRCDocumentItem *_documentItem;
    NSSet *_trackedVersionsToCancel;
    NSMutableArray *_callbacks;
    NSError *_lastDownloadError;
    BOOL _isFinished;
    BOOL _isMonitoringReachability;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *trackedFileObjects;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)initWithDocumentItem:(id)arg0 client:(id)arg1 session:(id)arg2 ;
-(id)initWithDocumentItem:(id)arg0 client:(id)arg1 session:(id)arg2 etagIfLoser:(id)arg3 stageFileName:(id)arg4 ;
-(id)initWithName:(id)arg0 session:(id)arg1 ;
-(void)_detachAllTrackedDocID:(id)arg0 error:(id)arg1 ;
-(void)_finishAfterWaitingForDocumentsWithID:(id)arg0 withEtagIfLoser:(id)arg1 error:(id)arg2 ;
-(void)_provideDocument:(id)arg0 ;
-(void)_provideItem;
-(void)addCompletionCallback:(id)arg0 ;
-(void)cancel;
-(void)downloadTrackedForFileObjectID:(id)arg0 withEtagIfLoser:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)listOperation:(id)arg0 wasReplacedByOperation:(id)arg1 ;
-(void)main;
-(void)networkReachabilityChanged:(BOOL)arg0 ;


@end


#endif