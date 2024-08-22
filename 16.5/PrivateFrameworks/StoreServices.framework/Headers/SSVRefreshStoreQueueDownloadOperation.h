// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVREFRESHSTOREQUEUEDOWNLOADOPERATION_H
#define SSVREFRESHSTOREQUEUEDOWNLOADOPERATION_H

@class NSString, NSNumber;


#import "SSVLoadDownloadQueueOperation.h"

@interface SSVRefreshStoreQueueDownloadOperation : SSVLoadDownloadQueueOperation {
    NSString *_downloadTrasactionID;
    NSNumber *_accountID;
}


@property (readonly) NSNumber *accountID;
@property (readonly) NSString *downloadTransactionID; // ivar: _downloadTransactionID


-(BOOL)_refreshDownloadWithTransactionID:(id)arg0 accountID:(id)arg1 bagKey:(id)arg2 error:(*id)arg3 ;
-(id)initWithDownloadTransactionIdentifier:(id)arg0 accountID:(id)arg1 ;
-(id)isDownloadTransactionID;
-(void)main;


@end


#endif