// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWWATCHLISTORDERDIFF_H
#define SCWWATCHLISTORDERDIFF_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface SCWWatchlistOrderDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *addedWatchlistIDs; // ivar: _addedWatchlistIDs
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSDictionary *indexesOfAddedWatchlistIDs; // ivar: _indexesOfAddedWatchlistIDs
@property (readonly, copy, nonatomic) NSDictionary *indexesOfReorderedWatchlistIDs; // ivar: _indexesOfReorderedWatchlistIDs
@property (readonly, copy, nonatomic) NSArray *removedWatchlistIDs; // ivar: _removedWatchlistIDs
@property (readonly, copy, nonatomic) NSArray *reorderedWatchlistIDs; // ivar: _reorderedWatchlistIDs
@property (readonly, copy, nonatomic) NSArray *watchlistIDsPostDiff; // ivar: _watchlistIDsPostDiff
@property (readonly, copy, nonatomic) NSArray *watchlistIDsPreDiff; // ivar: _watchlistIDsPreDiff


+(id)reorderedWatchlistIDsFrom:(id)arg0 to:(id)arg1 ;
-(id)initWithOldWatchlistIDs:(id)arg0 newWatchlistIDs:(id)arg1 ;


@end


#endif