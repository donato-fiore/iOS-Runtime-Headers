// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUZIPARCHIVE_H
#define SFUZIPARCHIVE_H

@class NSMutableDictionary, SFUDataRepresentation<SFUZipArchiveDataRepresentation>, NSData, NSString;

#import <Foundation/Foundation.h>

#import "SFUCryptoKey.h"

@interface SFUZipArchive : NSObject {
    NSMutableDictionary *mEntries;
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mDataRepresentation;
    NSData *mPassphraseVerifier;
    NSString *mPassphraseHint;
    SFUCryptoKey *mCryptoKey;
    NSData *mEncryptedDocumentUuid;
}




+(BOOL)isZipArchiveAtPath:(id)arg0 ;
-(BOOL)decompressAtPath:(id)arg0 ;
-(BOOL)decompressAtPath:(id)arg0 wasEmpty:(*BOOL)arg1 ;
-(BOOL)isEncrypted;
-(char *)searchForEndOfCentralDirectoryFromInputStream:(id)arg0 offset:(*NSInteger)arg1 ;
-(id)allEntryNames;
-(id)commonRootDirectoryIgnoringCase:(BOOL)arg0 ;
-(id)encryptedDocumentUuid;
-(id)entryWithName:(id)arg0 ;
-(id)entryWithName:(id)arg0 dataLength:(NSInteger)arg1 ;
-(id)initWithData:(id)arg0 collapseCommonRootDirectory:(BOOL)arg1 ;
-(id)initWithData:(id)arg0 collapseCommonRootDirectory:(BOOL)arg1 ignoreCase:(BOOL)arg2 ;
-(id)initWithPath:(id)arg0 collapseCommonRootDirectory:(BOOL)arg1 ;
-(id)initWithPath:(id)arg0 collapseCommonRootDirectory:(BOOL)arg1 ignoreCase:(BOOL)arg2 ;
-(id)passphraseHint;
-(id)passphraseVerifier;
-(id)readFilenameFromBuffer:(char *)arg0 size:(NSUInteger)arg1 ;
-(struct SFUZipEndOfCentralDirectory )readEndOfCentralDirectoryFromInputStream:(id)arg0 ;
-(struct SFUZipEndOfCentralDirectory )readZip64EndOfCentralDirectoryFromInputStream:(id)arg0 eocdOffset:(NSInteger)arg1 ;
-(struct SFUZipEndOfCentralDirectory )readZip64EndOfCentralDirectoryFromInputStream:(id)arg0 offset:(NSInteger)arg1 ;
-(void)collapseCommonRootDirectoryIgnoreCase:(BOOL)arg0 ;
-(void)dealloc;
-(void)readEntries;
-(void)readExtraFieldFromBuffer:(char *)arg0 size:(NSUInteger)arg1 entry:(id)arg2 ;
-(void)setCryptoKey:(id)arg0 ;


@end


#endif