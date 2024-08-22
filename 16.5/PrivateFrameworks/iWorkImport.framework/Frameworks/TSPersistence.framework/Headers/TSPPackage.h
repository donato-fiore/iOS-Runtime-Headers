// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPPACKAGE_H
#define TSPPACKAGE_H

@class TSUZipFileArchive, NSError, NSHashTable, SFUCryptoKey, NSString, NSData;
@protocol OS_dispatch_queue, TSPFileCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "TSPDocumentProperties.h"

@interface TSPPackage : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSPDocumentProperties *_documentProperties;
    TSUZipFileArchive *_zipArchive;
    NSUInteger _additionalZipArchiveOptions;
    NSError *_lastReloadError;
    NSHashTable *_packageDatas;
    id<TSPFileCoordinatorDelegate> *_fileCoordinatorDelegate;
    ? _flags;
}


@property (readonly) TSUZipFileArchive *componentZipArchive;
@property (readonly, nonatomic) SFUCryptoKey *decryptionKey; // ivar: _decryptionKey
@property (readonly, nonatomic) TSPDocumentProperties *documentProperties;
@property (readonly, nonatomic) NSUInteger documentReadVersion; // ivar: _documentReadVersion
@property (readonly, nonatomic) NSObject<TSPFileCoordinatorDelegate> *fileCoordinatorDelegate;
@property (readonly, nonatomic) NSUInteger fileFormatVersion; // ivar: _fileFormatVersion
@property (readonly, nonatomic) BOOL isClosed; // ivar: _isClosed
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property (readonly) NSError *lastReloadError;
@property (readonly, nonatomic) unsigned char packageIdentifier; // ivar: _packageIdentifier
@property (readonly, nonatomic) NSInteger packageType;
@property (readonly, nonatomic) NSString *passwordHint;
@property (readonly, nonatomic) NSData *passwordVerifier;
@property (readonly) TSUZipFileArchive *zipArchive;


+(BOOL)hasZipArchive;
+(BOOL)isValidPackageAtURL:(id)arg0 ;
+(BOOL)isZeroLengthFileOrEmptyDirectory:(id)arg0 isDirectory:(*BOOL)arg1 ;
+(id)dataEntryPathForFilename:(id)arg0 ;
+(id)newLazyPackageWithURL:(id)arg0 packageIdentifier:(unsigned char)arg1 decryptionKey:(id)arg2 fileCoordinatorDelegate:(id)arg3 ;
+(id)newPackageWithURL:(id)arg0 options:(NSUInteger)arg1 packageIdentifier:(unsigned char)arg2 decryptionKey:(id)arg3 fileCoordinatorDelegate:(id)arg4 error:(*id)arg5 ;
+(id)objectArchiveEntryPathForPackageLocator:(id)arg0 ;
+(id)zipArchiveURLFromPackageURL:(id)arg0 ;
-(BOOL)checkPassword:(id)arg0 ;
-(BOOL)didReloadZipArchive:(id)arg0 packageURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)hasDataAtRelativePath:(id)arg0 ;
-(BOOL)reloadZipArchiveIfNeededWithURLImpl:(id)arg0 isLazyLoading:(BOOL)arg1 forceReload:(BOOL)arg2 error:(*id)arg3 ;
-(id)dataAtRelativePath:(id)arg0 allowDecryption:(BOOL)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithPackageIdentifier:(unsigned char)arg0 documentProperties:(id)arg1 fileFormatVersion:(NSUInteger)arg2 decryptionKey:(id)arg3 fileCoordinatorDelegate:(id)arg4 isLazyLoading:(BOOL)arg5 ;
-(id)initWithURL:(id)arg0 zipArchiveOrNil:(id)arg1 zipArchiveOptions:(NSUInteger)arg2 packageIdentifier:(unsigned char)arg3 documentProperties:(id)arg4 decryptionKey:(id)arg5 fileCoordinatorDelegate:(id)arg6 error:(*id)arg7 ;
-(id)keyFromPassword:(id)arg0 ;
-(id)keyFromPassword:(id)arg0 passwordVerifier:(id)arg1 ;
-(id)newCompressionReadChannelWithReadChannel:(id)arg0 compressionAlgorithm:(NSInteger)arg1 ;
-(id)newDataStorageAtRelativePath:(id)arg0 decryptionInfo:(id)arg1 materializedLength:(NSUInteger)arg2 packageURL:(id)arg3 lastModificationDate:(*id)arg4 ;
// -(id)newDocumentPropertiesWithURL:(id)arg0 zipProvider:(id)arg1 error:(unk)arg2  ;
-(id)newRawDataReadChannelAtRelativePath:(id)arg0 ;
-(id)newRawReadChannelForComponentLocator:(id)arg0 isStoredOutsideObjectArchive:(BOOL)arg1 error:(*id)arg2 ;
-(id)newReadChannelForComponentLocator:(id)arg0 compressionAlgorithm:(NSInteger)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 error:(*id)arg3 ;
-(id)newZipArchiveFromPackageURL:(id)arg0 isLazyLoading:(BOOL)arg1 error:(*id)arg2 ;
-(id)packageEntryInfoAtRelativePath:(id)arg0 error:(*id)arg1 ;
-(id)packageEntryInfoForComponentLocator:(id)arg0 isStoredOutsideObjectArchive:(BOOL)arg1 ;
-(void)copyComponent:(id)arg0 toPackageURL:(id)arg1 packageLocator:(id)arg2 zipFileWriter:(id)arg3 encryptionKey:(id)arg4 canLink:(BOOL)arg5 completion:(id)arg6 ;
-(void)didCloseDocument;
-(void)didReadDocumentReadVersion:(NSUInteger)arg0 ;
-(void)didReadFileFormatVersion:(NSUInteger)arg0 ;
-(void)didReferenceData:(id)arg0 ;
-(void)didRetrieveDecryptionKey:(id)arg0 ;
-(void)enumerateDataUsingBlock:(id)arg0 ;
-(void)peformSynchronousAccessToZipArchive:(id)arg0 ;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg0 forSafeSave:(BOOL)arg1 originalURL:(id)arg2 ;


@end


#endif