// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUZIPFILEARCHIVE_H
#define TSUZIPFILEARCHIVE_H

@class NSURL;
@protocol OS_dispatch_queue, TSUReadChannel;


#import "TSUZipArchive.h"

@interface TSUZipFileArchive : TSUZipArchive {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSUInteger _archiveLength;
    id<TSUReadChannel> *_archiveReadChannel;
    NSURL *_temporaryDirectoryURL;
}




+(void)readArchiveFromURL:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(BOOL)copyToTemporaryLocationRelativeToURL:(id)arg0 ;
-(BOOL)openWithURL:(id)arg0 ;
-(BOOL)reopenWithTemporaryURL:(id)arg0 ;
-(NSUInteger)archiveLength;
-(id)debugDescription;
-(id)initWithURL:(id)arg0 ;
-(id)initWithWriter:(id)arg0 atURL:(id)arg1 ;
-(id)readChannel;
-(void)createTemporaryDirectoryRelativeToURL:(id)arg0 ;
-(void)dealloc;
-(void)removeTemporaryDirectory;


@end


#endif