// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHLIBRARYCATEGORYMAPPROVIDER_H
#define SBHLIBRARYCATEGORYMAPPROVIDER_H

@class NSHashTable, NSString, NSMutableSet, NSMutableArray, NSArray;
@protocol SBHLibraryCategoryMapProviderSourceDelegate, OS_dispatch_queue, SBHLibraryCategoryMapProviderSource;

#import <Foundation/Foundation.h>

#import "SBHLibraryCategoryMap.h"

@interface SBHLibraryCategoryMapProvider : NSObject <SBHLibraryCategoryMapProviderSourceDelegate>

 {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id<SBHLibraryCategoryMapProviderSource> *_libraryCategoryMapProviderSource;
    NSString *_cacheFilePath;
    NSMutableSet *_forbiddenApplicationIdentifiers;
    NSMutableArray *_pendingRefreshRequests;
    NSArray *_inflightRefreshRequests;
    BOOL _refreshIsScheduled;
    BOOL _isCategoryMapOverriddenForTesting;
    NSInteger _sessionIdentifier;
    id *_localeNotificationHandle;
    id *_clearCacheNotificationHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHLibraryCategoryMap *libraryCategoryMap; // ivar: _libraryCategoryMap
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(NSUInteger)derivedOptionsFromArrayOfRequests:(id)arg0 ;
+(id)baseFilePath;
+(id)cacheDirectory;
+(id)categoryMapCacheFilePathForVersion:(id)arg0 source:(id)arg1 ;
+(id)categoryMapFromURL:(id)arg0 error:(*id)arg1 ;
+(void)clearCachesForReason:(id)arg0 ;
-(BOOL)_workQueue_updateLibraryCategoryMap:(id)arg0 withSessionId:(NSUInteger)arg1 shouldPersist:(BOOL)arg2 reason:(id)arg3 ;
-(BOOL)forbidApplicationIdentifier:(id)arg0 ;
-(BOOL)hasCachedLibraryCategoryMapOnFileSystem;
-(BOOL)unforbidApplicationIdentifier:(id)arg0 ;
-(NSUInteger)_nextSessionIdentifier;
-(id)_copyOfObservers;
-(id)initWithSource:(id)arg0 ;
-(id)requestLibraryCategoryMapRefreshWithOptions:(NSUInteger)arg0 reason:(id)arg1 ;
-(void)_callbackQueue_notifyObserverCategoryMapWasRefreshedWithOptions:(NSUInteger)arg0 refreshedCategoryMap:(id)arg1 ;
-(void)_callbackQueue_notifyObserversBeginningRefreshSession:(NSInteger)arg0 requests:(id)arg1 ;
-(void)_callbackQueue_notifyObserversCategoryMapDidntNeedRefresh;
-(void)_callbackQueue_notifyObserversCategoryMapRefreshFailedWithError:(id)arg0 ;
-(void)_callbackQueue_notifyObserversFinishedRefreshSession:(NSInteger)arg0 requests:(id)arg1 ;
-(void)_callbackQueue_notifyObserversWillReEnqueueFailedRequests:(id)arg0 ;
-(void)_callbackQueue_notifyObserversWillRefresh:(NSInteger)arg0 options:(NSUInteger)arg1 ;
-(void)_callbackQueue_notifyObserversWillSunsetFailedRequests:(id)arg0 ;
-(void)_kickoffInitialHydration;
-(void)_setupClearCacheNotification;
-(void)_setupLocaleNotification;
-(void)_workQueue_queueUpNextRequests:(id)arg0 runNow:(BOOL)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)clearOverride;
-(void)overrideCategoryMapForTesting:(id)arg0 ;
-(void)overrideCategoryMapForTestingAtURL:(id)arg0 error:(*id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)requestLibraryCategoryMapUpdateWithRefreshOptions:(NSUInteger)arg0 source:(id)arg1 ;
-(void)resetForbiddenApplicationIdentifiers;


@end


#endif