// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STMSIZECACHE_H
#define STMSIZECACHE_H

@class NSMutableDictionary, NSMutableArray, NSDate, NSArray, NSLock;
@protocol OS_dispatch_source, STMSizeCacheDelegate;

#import <Foundation/Foundation.h>


@interface STMSizeCache : NSObject {
    *__CFString _prefsKey;
    NSMutableDictionary *_itemsByPath;
    NSMutableArray *_eventsToProcess;
    NSObject<OS_dispatch_source> *_cacheFlushTimer;
}


@property (retain) NSDate *cacheEventDate; // ivar: _cacheEventDate
@property NSUInteger cacheEventID; // ivar: _cacheEventID
@property (weak) NSObject<STMSizeCacheDelegate> *delegate; // ivar: _delegate
@property (readonly) NSArray *items;
@property (retain) NSLock *itemsLock; // ivar: _itemsLock


-(NSUInteger)processCacheEvents:(id)arg0 ;
-(id)initWithPrefsKey:(id)arg0 ;
-(id)itemForPath:(id)arg0 ;
-(id)itemsContainedByPath:(id)arg0 ;
-(id)itemsContainingPath:(id)arg0 ;
-(id)sizeOfItemForPath:(id)arg0 ;
-(id)updatedSizeOfItemForPath:(id)arg0 ;
-(void)_flushCache;
-(void)_writeCache;
-(void)addItem:(id)arg0 ;
-(void)addItem:(id)arg0 andComputeSizeSynchronously:(BOOL)arg1 ;
-(void)addItems:(id)arg0 ;
-(void)dealloc;
-(void)flushCacheToPref;
-(void)loadCacheFromPref;
-(void)notifyItemsAdded:(id)arg0 ;
-(void)notifySizesChanged:(id)arg0 ;
-(void)pruneCache;
-(void)removeItem:(id)arg0 ;
-(void)removeItemForPath:(id)arg0 ;
-(void)updateLastCacheEventID:(NSUInteger)arg0 ;
-(void)updateSizeOfItem:(id)arg0 synchronous:(BOOL)arg1 ;
-(void)writeCacheToPref;


@end


#endif