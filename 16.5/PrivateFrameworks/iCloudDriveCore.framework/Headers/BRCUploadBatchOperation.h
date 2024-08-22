// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCUPLOADBATCHOPERATION_H
#define BRCUPLOADBATCHOPERATION_H



#import "BRCTransferBatchOperation.h"
#import "BRCClientZone.h"

@interface BRCUploadBatchOperation : BRCTransferBatchOperation {
    BRCClientZone *_clientZone;
}


@property (copy) id *perUploadCompletionBlock; // ivar: _perUploadCompletionBlock


-(id)actionPrettyName;
-(id)createActivity;
-(id)initWithSyncContext:(id)arg0 clientZone:(id)arg1 ;
-(void)_publishUploadProgress:(id)arg0 ;
-(void)_uploadRecordsByID:(id)arg0 ;
-(void)addItem:(id)arg0 stageID:(id)arg1 record:(id)arg2 transferSize:(NSUInteger)arg3 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)mainWithTransfers:(id)arg0 ;
-(void)sendTransferCompletionCallBack:(id)arg0 error:(id)arg1 ;


@end


#endif