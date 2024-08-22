// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWWATCHLISTMANAGER_H
#define SCWWATCHLISTMANAGER_H

@class NSHashTable;
@protocol SCWDatabaseObserver, OS_dispatch_queue, SCWWatchlistDefaultsProviding, SCWWatchlistMetadataProviding;

#import <Foundation/Foundation.h>

#import "SCWDatabase.h"
#import "SCWStartupQueue.h"

@interface SCWWatchlistManager : NSObject <SCWDatabaseObserver>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) SCWDatabase *database; // ivar: _database
@property (retain, nonatomic) NSObject<SCWWatchlistDefaultsProviding> *defaultsProvider; // ivar: _defaultsProvider
@property (retain, nonatomic) NSObject<SCWWatchlistMetadataProviding> *metadataProvider; // ivar: _metadataProvider
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) SCWStartupQueue *startupQueue; // ivar: _startupQueue


+(id)supportedCommands;
+(id)zoneMergeHandler;
+(id)zoneSchema;
-(id)_sortedStocks:(id)arg0 withSymbolOrder:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 metadataProvider:(id)arg1 defaults:(id)arg2 ;
-(id)initWithDatabase:(id)arg0 metadataProvider:(id)arg1 defaultsProvider:(id)arg2 ;
-(void)_enqueueStartupSequence;
-(void)addObserver:(id)arg0 ;
-(void)addStock:(id)arg0 completion:(id)arg1 ;
-(void)addStock:(id)arg0 watchlist:(id)arg1 completion:(id)arg2 ;
-(void)addWatchlist:(id)arg0 identifier:(id)arg1 sortState:(id)arg2 sortOrderState:(id)arg3 displayState:(id)arg4 completion:(id)arg5 ;
-(void)addWatchlistToWatchlistOrder:(id)arg0 completion:(id)arg1 ;
-(void)database:(id)arg0 didChangeZone:(id)arg1 from:(id)arg2 to:(id)arg3 ;
-(void)fetchAllWatchlistsWithCompletion:(id)arg0 ;
-(void)fetchStocksFromWatchlist:(id)arg0 completion:(id)arg1 ;
-(void)fetchStocksWithCompletion:(id)arg0 ;
-(void)fetchWatchlistOrderWithCompletion:(id)arg0 ;
-(void)migrateToDefaultWatchlist:(id)arg0 sortState:(id)arg1 sortOrderState:(id)arg2 displayState:(id)arg3 completion:(id)arg4 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeStock:(id)arg0 completion:(id)arg1 ;
-(void)removeSymbol:(id)arg0 completion:(id)arg1 ;
-(void)removeSymbol:(id)arg0 watchlist:(id)arg1 completion:(id)arg2 ;
-(void)removeWatchlist:(id)arg0 completion:(id)arg1 ;
-(void)removeWatchlistFromWatchlistOrder:(id)arg0 completion:(id)arg1 ;
-(void)renameWatchlist:(id)arg0 newName:(id)arg1 completion:(id)arg2 ;
-(void)reorderStock:(id)arg0 toIndex:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)reorderSymbol:(id)arg0 afterSymbol:(id)arg1 completion:(id)arg2 ;
-(void)reorderSymbol:(id)arg0 afterSymbol:(id)arg1 watchlist:(id)arg2 completion:(id)arg3 ;
-(void)reorderSymbols:(id)arg0 watchlist:(id)arg1 completion:(id)arg2 ;
-(void)reorderWatchlist:(id)arg0 afterWatchlist:(id)arg1 completion:(id)arg2 ;
-(void)replaceSymbol:(id)arg0 withSymbol:(id)arg1 completion:(id)arg2 ;
-(void)replaceSymbol:(id)arg0 withSymbol:(id)arg1 watchlist:(id)arg2 completion:(id)arg3 ;
-(void)sc_synchronize;
-(void)synchronize;
-(void)updateDisplayState:(id)arg0 watchlist:(id)arg1 completion:(id)arg2 ;
-(void)updateSortState:(id)arg0 newSortOrderState:(id)arg1 watchlist:(id)arg2 completion:(id)arg3 ;


@end


#endif