// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPDISTRIBUTABLEARCHIVE_H
#define TSPDISTRIBUTABLEARCHIVE_H

@class SFUFileDataRepresentation, SFUMemoryDataRepresentation, SFUZipEntry;

#import <Foundation/Foundation.h>


@interface TSPDistributableArchive : NSObject {
    *void _entries;
    SFUFileDataRepresentation *_archiveFileRep;
    SFUMemoryDataRepresentation *_archiveMemoryRep;
    SFUZipEntry *_archiveZipEntryRep;
    ? _archivedVersions;
}




+(BOOL)_checkFileHeader:(char *)arg0 length:(NSUInteger)arg1 dffVersion:(*unsigned short)arg2 archivedVersions:(struct ? *)arg3 defaultObjectVersion:(*unsigned int)arg4 hasDescriptors:(*BOOL)arg5 hasToc:(*BOOL)arg6 otherDataLength:(*unsigned int)arg7 closedCleanly:(*BOOL)arg8 ;
+(BOOL)readArchivedVersionsFromStream:(id)arg0 versions:(struct ? *)arg1 error:(*id)arg2 ;
+(BOOL)readCheckCrcFromArchiveInputStream:(id)arg0 crc:(*unsigned int)arg1 error:(*id)arg2 ;
+(BOOL)streamDistributableArchive:(id)arg0 estimatedDataLength:(NSInteger)arg1 toUnarchiver:(id)arg2 supplementalDataBundle:(id)arg3 closedCleanly:(*BOOL)arg4 context:(id)arg5 error:(*id)arg6 ;
+(id)_newStringFromUtf8DataInStream:(id)arg0 length:(NSUInteger)arg1 ;
+(void)cancelStreaming;
-(BOOL)_readEntriesFromToc:(id)arg0 error:(*id)arg1 ;
-(BOOL)containsObjectWithIdentifier:(NSInteger)arg0 ;
-(NSInteger)lengthOfObject:(NSInteger)arg0 ;
-(id)_createInputStreamWithOffset:(NSInteger)arg0 length:(NSInteger)arg1 ;
-(id)createStreamForObject:(NSInteger)arg0 length:(*NSInteger)arg1 ;
-(id)initWithDffData:(id)arg0 error:(*id)arg1 ;
-(struct ? )archivedVersions;
-(void)dealloc;


@end


#endif