// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCFETCHRECORDSWRAPPEROPERATION_H
#define BRCFETCHRECORDSWRAPPEROPERATION_H

@class BRCOperation, CKFetchRecordsOperation, NSString;
@protocol BRCOperationSubclass;


#import "BRCServerZone.h"

@interface BRCFetchRecordsWrapperOperation : BRCOperation <BRCOperationSubclass>

 {
    BRCServerZone *_serverZone;
    CKFetchRecordsOperation *_FetchRecordsOperation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithCKFetchRecordsOperation:(id)arg0 group:(id)arg1 serverZone:(id)arg2 isUserWaiting:(BOOL)arg3 ;
-(void)main;


@end


#endif