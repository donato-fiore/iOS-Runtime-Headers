// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICHTTPARCHIVE_H
#define ICHTTPARCHIVE_H

@class NSMutableArray, NSString, NSDateFormatter, NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ICHTTPArchive : NSObject {
    NSMutableArray *_loggedEvents;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_source> *_flushTimer;
    NSString *_currentArchiveFileName;
    NSDateFormatter *_dateFormatter;
    NSDictionary *_creatorDictionary;
    NSString *_archiveDirectoryPath;
    NSMutableArray *_archiveFilePaths;
    BOOL _hasValidArchiveDirectory;
    NSInteger _maxArchiveFiles;
    NSInteger _maxArchiveBodyLength;
    NSInteger _flushDelaySeconds;
}




+(id)sharedArchive;
-(id)_archiveCreator;
-(id)_archiveForRequest:(id)arg0 ;
-(id)_archiveForResponse:(id)arg0 responseData:(id)arg1 ;
-(id)_arrayFromHeaderDictionary:(id)arg0 ;
-(id)init;
-(id)initUnboundedArchiveWithDirectoryPath:(id)arg0 ;
-(id)initWithArchiveDirectoryPath:(id)arg0 maxArchiveFiles:(NSInteger)arg1 maxArchiveBodyLength:(NSInteger)arg2 flushDelaySeconds:(NSInteger)arg3 ;
-(void)_loadExistingArchivePaths;
-(void)_onQueueFlush;
-(void)_pruneOldArchives;
-(void)archiveRequest:(id)arg0 withResponse:(id)arg1 responseData:(id)arg2 ;
-(void)dealloc;
-(void)flush;


@end


#endif