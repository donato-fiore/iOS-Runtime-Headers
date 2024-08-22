// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCKDATABASEJSONSTORE_H
#define SCKDATABASEJSONSTORE_H

@class NSSet, NSString, NSFileCoordinator, NSMutableDictionary, NSDate, NSHashTable, NSOperationQueue, NSURL, CKServerChangeToken;
@protocol SCKOperationThrottlerDelegate, NSFilePresenter, SCKDatabaseStoreCoordinator, SCKDatabaseStore, OS_dispatch_queue, OS_dispatch_source, SCKOperationThrottler;

#import <Foundation/Foundation.h>


@interface SCKDatabaseJSONStore : NSObject <SCKOperationThrottlerDelegate, NSFilePresenter, SCKDatabaseStoreCoordinator, SCKDatabaseStore>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) NSSet *allowedCommandClasses; // ivar: _allowedCommandClasses
@property (retain, nonatomic) NSObject<OS_dispatch_source> *changeListenerSource; // ivar: _changeListenerSource
@property (nonatomic, getter=isCloudBackupEnabled) BOOL cloudBackupEnabled; // ivar: _cloudBackupEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger diskReadCount; // ivar: _diskReadCount
@property (readonly, nonatomic) NSUInteger diskWriteCount; // ivar: _diskWriteCount
@property (retain, nonatomic) NSFileCoordinator *fileCoordinator; // ivar: _fileCoordinator
@property (retain, nonatomic) NSMutableDictionary *foreignZoneDictsByName; // ivar: _foreignZoneDictsByName
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL havePendingChanges; // ivar: _havePendingChanges
@property (copy, nonatomic) NSDate *lastDirtyDate; // ivar: _lastDirtyDate
@property (nonatomic) unsigned int lastKnownStoreChangeTag; // ivar: _lastKnownStoreChangeTag
@property (copy, nonatomic) NSDate *lastSyncDate; // ivar: _lastSyncDate
@property (nonatomic) BOOL loadedFromDisk; // ivar: _loadedFromDisk
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue; // ivar: _presentedItemOperationQueue
@property (readonly, copy) NSURL *presentedItemURL; // ivar: _presentedItemURL
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (retain, nonatomic) NSObject<SCKOperationThrottler> *saveThrottler; // ivar: _saveThrottler
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken
@property (readonly, copy, nonatomic) NSURL *storeURL; // ivar: _storeURL
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SCKDatabaseStore> *underlyingStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (retain, nonatomic) NSMutableDictionary *zoneStoresByName; // ivar: _zoneStoresByName


+(id)preferredFileURLForSchema:(id)arg0 parentDirectoryURL:(id)arg1 ;
-(BOOL)_reloadIfNeededFromFileURL:(id)arg0 ;
-(BOOL)flushToDiskWithTimeout:(CGFloat)arg0 ;
-(id)_decodeCodableObjectOfClass:(Class)arg0 from:(id)arg1 error:(*id)arg2 ;
-(id)_decodeCodableObjectOfClasses:(id)arg0 from:(id)arg1 error:(*id)arg2 ;
-(id)_decodeDate:(id)arg0 ;
-(id)_encodeCodableObject:(id)arg0 ;
-(id)_encodeDate:(id)arg0 ;
-(id)initWithSchema:(id)arg0 fileURL:(id)arg1 ;
-(id)initWithSchema:(id)arg0 fileURL:(id)arg1 allowedCommands:(id)arg2 ;
-(id)initWithSchema:(id)arg0 parentDirectoryURL:(id)arg1 ;
-(id)initWithSchema:(id)arg0 parentDirectoryURL:(id)arg1 allowedCommands:(id)arg2 ;
-(id)zoneStoreForSchema:(id)arg0 ;
-(void)_applyCloudBackupEnabledPropertyToStoreURL;
-(void)_listenForChangesToFileURL:(id)arg0 ;
-(void)_loadFromFileURL:(id)arg0 ;
-(void)_saveIfNeededToFileURL:(id)arg0 ;
-(void)_saveToFileURL:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)operationThrottlerPerformOperation:(id)arg0 ;
-(void)readWithAccessor:(id)arg0 ;
-(void)readZone:(id)arg0 withAccessor:(id)arg1 ;
-(void)reloadWithAccessor:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)savePresentedItemChangesWithCompletionHandler:(id)arg0 ;
-(void)writeWithAccessor:(id)arg0 ;
-(void)writeZone:(id)arg0 withAccessor:(id)arg1 ;


@end


#endif