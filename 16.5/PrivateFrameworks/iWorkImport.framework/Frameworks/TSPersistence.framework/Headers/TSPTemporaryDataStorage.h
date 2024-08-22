// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPTEMPORARYDATASTORAGE_H
#define TSPTEMPORARYDATASTORAGE_H

@protocol TSPCryptoInfo;


#import "TSPFileDataStorage.h"
#import "TSPTemporaryDataStorageURL.h"

@interface TSPTemporaryDataStorage : TSPFileDataStorage {
    TSPTemporaryDataStorageURL *_temporaryDataStorageURL;
    BOOL _leakTemporaryFile;
    BOOL _isUnmaterializedDueToPartiallyDownloadedDocument;
    id<TSPCryptoInfo> *_decryptionInfo;
}


@property (readonly, nonatomic) BOOL isMissingData; // ivar: _isMissingData
@property (readonly, nonatomic) BOOL isMissingOriginalData; // ivar: _isMissingOriginalData


-(BOOL)isLengthPrecise;
-(BOOL)isUnmaterializedDueToPartiallyDownloadedDocument;
-(BOOL)linkOrCopyToURL:(id)arg0 encryptionInfo:(id)arg1 canLink:(BOOL)arg2 ;
-(NSUInteger)fileFormatVersion;
-(NSUInteger)length;
-(NSUInteger)materializedLength;
-(id)decryptionInfo;
-(id)init;
-(id)initWithTemporaryDataStorageURL:(id)arg0 decryptionInfo:(id)arg1 ;
-(id)initWithTemporaryDataStorageURL:(id)arg0 decryptionInfo:(id)arg1 isMissingOriginalData:(BOOL)arg2 isMissingData:(BOOL)arg3 isUnmaterializedDueToPartiallyDownloadedDocument:(BOOL)arg4 ;
-(id)writeData:(id)arg0 toPackageWriter:(id)arg1 infoMessage:(*void)arg2 preferredFilename:(id)arg3 shouldRemoveData:(BOOL)arg4 error:(*id)arg5 ;
-(void)dealloc;
-(void)leakTemporaryFile;
-(void)performIOChannelReadWithAccessor:(id)arg0 ;
-(void)performReadWithAccessor:(id)arg0 ;
-(void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(BOOL)arg0 ;


@end


#endif