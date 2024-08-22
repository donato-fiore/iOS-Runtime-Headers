// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISHASHEDDOWNLOADPROVIDER_H
#define ISHASHEDDOWNLOADPROVIDER_H

@class NSArray, NSString;
@protocol NSCopying;


#import "ISDataProvider.h"
#import "ISHashError.h"

@interface ISHashedDownloadProvider : ISDataProvider <NSCopying>

 {
    int _fileDescriptor;
    CC_MD5state_st _md5Context;
}


@property (retain) NSArray *hashes; // ivar: _hashes
@property (copy) ISHashError *lastHashError; // ivar: _lastHashError
@property (retain) NSString *localFilePath; // ivar: _localFilePath
@property NSInteger numberOfBytesToHash; // ivar: _numberOfBytesToHash
@property BOOL shouldResumeFromLocalBytes; // ivar: _shouldResumeFromLocalBytes
@property NSInteger streamedBytes; // ivar: _totalBytesWritten
@property NSInteger validatedBytes; // ivar: _validatedBytes


-(BOOL)_checkHashForByteCount:(NSInteger)arg0 ;
-(BOOL)_openFile;
-(BOOL)_truncateToSize:(NSInteger)arg0 ;
-(BOOL)_writeDataWithHashing:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)_writeDataWithoutHashing:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)canStreamContentLength:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)isStream;
-(BOOL)parseData:(id)arg0 returningError:(*id)arg1 ;
-(NSInteger)_verifiedBytesByInitializingHashForFileSize:(NSInteger)arg0 ;
-(id)closeStream;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_closeFile;
-(void)dealloc;
-(void)resetStream;
-(void)setup;


@end


#endif