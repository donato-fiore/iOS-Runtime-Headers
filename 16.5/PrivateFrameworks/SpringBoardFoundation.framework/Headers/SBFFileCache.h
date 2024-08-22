// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFFILECACHE_H
#define SBFFILECACHE_H

@class NSMutableArray;
@protocol OS_dispatch_queue, SBFFileCacheDelegate, SBFFileCacheFaultHandler, SBFFileCacheStore;

#import <Foundation/Foundation.h>


@interface SBFFileCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_manifest;
}


@property CGFloat accessDateTimeAdjustment; // ivar: _accessDateTimeAdjustment
@property (weak) NSObject<SBFFileCacheDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<SBFFileCacheFaultHandler> *faultHandler; // ivar: _faultHandler
@property CGFloat maxAllowedTimeSinceGeneration; // ivar: _maxAllowedTimeSinceGeneration
@property CGFloat maxAllowedTimeSinceLastAccess; // ivar: _maxAllowedTimeSinceLastAccess
@property NSUInteger maxTotalFileCount; // ivar: _maxTotalFileCount
@property NSUInteger maxTotalFileSize; // ivar: _maxTotalFileSize
@property (readonly, nonatomic) NSObject<SBFFileCacheStore> *store; // ivar: _store


-(id)callbackQueue;
-(id)description;
-(id)fileNameForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithStore:(id)arg0 faultHandler:(id)arg1 ;
-(void)_queue_createManifestEntryForGeneratedFileWrapper:(id)arg0 filename:(id)arg1 usingStore:(id)arg2 ;
-(void)_queue_evictFileWithInfo:(id)arg0 usingStore:(id)arg1 ;
-(void)_queue_evictFilesAtManifestIndexes:(id)arg0 usingStore:(id)arg1 ;
-(void)_queue_evictIfNeededUsingStore:(id)arg0 ;
-(void)_queue_loadManifestUsingStore:(id)arg0 ;
-(void)_queue_removeManifestEntryForFilename:(id)arg0 usingStore:(id)arg1 ;
-(void)_queue_resetManifestUsingStore:(id)arg0 ;
-(void)_queue_saveManifestUsingStore:(id)arg0 ;
-(void)_queue_updateManifestForLoadedFileWrapper:(id)arg0 filename:(id)arg1 usingStore:(id)arg2 ;
-(void)loadFileWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)performOnWorkQueueUsingBlock:(id)arg0 ;
-(void)removeAllFiles;
-(void)removeFileWithIdentifier:(id)arg0 ;


@end


#endif