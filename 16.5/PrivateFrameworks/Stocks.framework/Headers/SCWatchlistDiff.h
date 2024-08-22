// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWATCHLISTDIFF_H
#define SCWATCHLISTDIFF_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface SCWatchlistDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *addedStocks; // ivar: _addedStocks
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSDictionary *indexesOfAddedStocks; // ivar: _indexesOfAddedStocks
@property (readonly, copy, nonatomic) NSDictionary *indexesOfReorderedStocks; // ivar: _indexesOfReorderedStocks
@property (readonly, copy, nonatomic) NSArray *removedStocks; // ivar: _removedStocks
@property (readonly, copy, nonatomic) NSArray *reorderedStocks; // ivar: _reorderedStocks
@property (readonly, copy, nonatomic) NSArray *stocksPostDiff; // ivar: _stocksPostDiff
@property (readonly, copy, nonatomic) NSArray *stocksPreDiff; // ivar: _stocksPreDiff


+(id)reorderedStocksFrom:(id)arg0 to:(id)arg1 ;
-(id)initWithOldStocks:(id)arg0 newStocks:(id)arg1 ;


@end


#endif