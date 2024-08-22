// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTSEARCHINGFINDSESSION_H
#define UITEXTSEARCHINGFINDSESSION_H

@class NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, NSString;
@protocol NSObject><NSCopying, UITextSearching;


#import "UIFindSession.h"
#import "UITextRange.h"
#import "UITextSearchOptions.h"
#import "_UITextSearchingFindSessionAggregator.h"
#import "UIFindInteraction.h"

@interface UITextSearchingFindSession : UIFindSession {
    BOOL _awaitingFirstResults;
    BOOL _readyToPerformDelayedSearchOperations;
    UITextRange *_highlightedTextRange;
    id<NSObject><NSCopying> *_highlightedDocument;
    NSMutableOrderedSet *_sortedDocumentIdentifiers;
    NSMutableDictionary *_sortedResultsByDocument;
    NSMutableArray *_blocksAwaitingSearchResults;
    NSString *_lastSearchQuery;
    UITextSearchOptions *_lastSearchOptions;
    _UITextSearchingFindSessionAggregator *_aggregator;
    UITextRange *_highlightedRangeBeforeSubsequentSearch;
    id<NSObject><NSCopying> *_highlightedDocumentBeforeSubsequentSearch;
    ? _searchableObjectConformsTo;
    UIFindInteraction *_parentInteraction;
}


@property (weak, nonatomic) NSObject<UITextSearching> *searchableObject; // ivar: _searchableObject
@property (readonly, nonatomic, getter=isSearching) BOOL searching; // ivar: _isSearching
@property (retain, nonatomic) NSObject<UITextSearching> *stronglyHeldSearchableObject; // ivar: _stronglyHeldSearchableObject


-(BOOL)_hasResults;
-(BOOL)_isCurrentSearchQueryValid;
-(BOOL)allowsReplacementForCurrentlyHighlightedResult;
-(BOOL)supportsReplacement;
-(NSInteger)highlightedResultIndex;
-(NSInteger)resultCount;
-(id)_allFoundRanges;
-(id)_documentComparator:(SEL)arg0 ;
-(id)_nearestRangeToSelectedRangeInDocument:(id)arg0 ;
// -(id)_nextItemInOrderedSet:(id)arg0 usingComparator:(id)arg1 fromItem:(unk)arg2 inDirection:(id)arg3 loopAround:(NSInteger)arg4  ;
-(id)_textRangeComparatorForDocument:(SEL)arg0 ;
-(id)initWithSearchableObject:(id)arg0 ;
-(id)initWithStronglyHeldSearchableObject:(id)arg0 ;
-(id)parentInteraction;
-(void)_finishedSearching;
-(void)_foundRange:(id)arg0 forSearchString:(id)arg1 inDocument:(id)arg2 ;
-(void)_invalidateAllFoundRanges;
-(void)_invalidateFoundRange:(id)arg0 inDocument:(id)arg1 ;
-(void)_nextResultRelativeToRange:(*id)arg0 document:(*id)arg1 inDirection:(NSInteger)arg2 ;
-(void)_performBlockWhenSearchResultsAreAvailable:(id)arg0 ;
-(void)_performDelayedSearchOperations;
-(void)_readilyHighlightNearestRangeToSelectedRangeIfNecessary;
-(void)_readilyHighlightNextResultInDirection:(NSInteger)arg0 ;
-(void)_replaceHighlightedTextRangeWithReplacementString:(id)arg0 ;
-(void)_setHighlightedRange:(id)arg0 inDocument:(id)arg1 ;
-(void)_setNeedsResultCountUpdate;
-(void)_setReadyToPerformDelayedSearchOperations;
-(void)_updateResultCountLabel;
-(void)_updateSearchableObjectProtocolConformance;
-(void)highlightNearestFoundRangeToSelectedRangeIfNecessary;
-(void)highlightNextResultInDirection:(NSInteger)arg0 ;
-(void)invalidateFoundResults;
-(void)performSearchWithQuery:(id)arg0 options:(id)arg1 ;
-(void)performSingleReplacementWithSearchQuery:(id)arg0 replacementString:(id)arg1 options:(id)arg2 ;
-(void)replaceAllInstancesOfSearchQuery:(id)arg0 withReplacementString:(id)arg1 options:(id)arg2 ;
-(void)reset;
-(void)setParentInteraction:(id)arg0 ;


@end


#endif