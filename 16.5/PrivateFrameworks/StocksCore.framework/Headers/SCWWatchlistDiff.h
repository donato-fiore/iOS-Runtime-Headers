// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWWATCHLISTDIFF_H
#define SCWWATCHLISTDIFF_H

@class NSArray, NSDictionary, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface SCWWatchlistDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *addedSymbols; // ivar: _addedSymbols
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSDictionary *indexesOfAddedSymbols; // ivar: _indexesOfAddedSymbols
@property (readonly, copy, nonatomic) NSDictionary *indexesOfReorderedSymbols; // ivar: _indexesOfReorderedSymbols
@property (readonly, copy, nonatomic) NSArray *removedSymbols; // ivar: _removedSymbols
@property (readonly, copy, nonatomic) NSArray *reorderedSymbols; // ivar: _reorderedSymbols
@property (readonly, copy, nonatomic) NSArray *symbolsPostDiff; // ivar: _symbolsPostDiff
@property (readonly, copy, nonatomic) NSArray *symbolsPreDiff; // ivar: _symbolsPreDiff
@property (readonly, copy, nonatomic) NSNumber *updatedDisplayState; // ivar: _updatedDisplayState
@property (readonly, copy, nonatomic) NSString *updatedName; // ivar: _updatedName
@property (readonly, copy, nonatomic) NSNumber *updatedSortOrderState; // ivar: _updatedSortOrderState
@property (readonly, copy, nonatomic) NSNumber *updatedSortState; // ivar: _updatedSortState


+(id)reorderedSymbolsFrom:(id)arg0 to:(id)arg1 ;
-(id)initWithOldSymbols:(id)arg0 newSymbols:(id)arg1 updatedName:(id)arg2 updatedSortState:(id)arg3 updatedSortOrderState:(id)arg4 updatedDisplayState:(id)arg5 ;


@end


#endif