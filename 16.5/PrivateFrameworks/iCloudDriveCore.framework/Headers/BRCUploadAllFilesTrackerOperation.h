// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCUPLOADALLFILESTRACKEROPERATION_H
#define BRCUPLOADALLFILESTRACKEROPERATION_H

@class BRCFrameworkOperation, NSMutableArray, NSMutableDictionary, NSString;
@protocol BRCAllItemsDidUploadTracker, BRCOperationSubclass;


#import "BRCAccountSessionFPFS.h"

@interface BRCUploadAllFilesTrackerOperation : BRCFrameworkOperation <BRCAllItemsDidUploadTracker, BRCOperationSubclass>

 {
    BRCAccountSessionFPFS *_session;
    NSMutableArray *_zonesStillUploading;
    NSMutableArray *_hiddenZoneWithError;
    NSMutableDictionary *_perContainerIDError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)initWithSession:(id)arg0 appLibraries:(id)arg1 ;
-(void)cancel;
-(void)clientZone:(id)arg0 didFinishUploadingAllItemsWithError:(id)arg1 ;
-(void)main;


@end


#endif