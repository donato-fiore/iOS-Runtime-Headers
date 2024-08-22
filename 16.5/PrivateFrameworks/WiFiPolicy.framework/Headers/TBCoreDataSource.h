// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TBCOREDATASOURCE_H
#define TBCOREDATASOURCE_H

@class NSManagedObjectContext, NSString;
@protocol TBCacheProvider;


#import "TBDataSource.h"
#import "TBCoreDataStoreDescriptor.h"
#import "TBPersistenceManager.h"

@interface TBCoreDataSource : TBDataSource <TBCacheProvider>



@property (nonatomic) NSUInteger cacheExpirationInDays; // ivar: _cacheExpirationInDays
@property (retain, nonatomic) NSManagedObjectContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TBCoreDataStoreDescriptor *descriptor; // ivar: _descriptor
@property (nonatomic) BOOL hasStorageError; // ivar: _hasStorageError
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TBPersistenceManager *persistenceManager; // ivar: _persistenceManager
@property (readonly) Class superclass;


-(BOOL)_canSupportRequest:(id)arg0 ;
-(NSUInteger)type;
-(id)initWithStoreDescriptor:(id)arg0 ;
-(void)_createNewNetwork:(id)arg0 tile:(id)arg1 withMOC:(id)arg2 ;
-(void)_createNewNetworkFromDictionary:(id)arg0 withMOC:(id)arg1 ;
-(void)_executeFetchRequest:(id)arg0 ;
-(void)_executePreferLocalFetchRequest:(id)arg0 ;
-(void)cacheFetchResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)executeFetchRequest:(id)arg0 ;
-(void)importObjectsWithArray:(id)arg0 completionHandler:(id)arg1 ;
-(void)prune3BarsNetworks:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)removeAllWithCompletionHandler:(id)arg0 ;
-(void)removeWithFetchRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif