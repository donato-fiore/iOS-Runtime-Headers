// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMPMEDIAENTITIESSINGLEFETCHOPERATION_H
#define VUIMPMEDIAENTITIESSINGLEFETCHOPERATION_H

@class VUIAsynchronousOperation, NSError, MPMediaPredicate, NSDictionary, NSArray, NSMutableSet;


#import "VUIMediaEntityType.h"
#import "VUIMediaEntityKind.h"
#import "VUIMPMediaLibrary.h"
#import "VUIMediaEntityFetchRequest.h"
#import "VUIMediaEntityFetchResponse.h"

@interface VUIMPMediaEntitiesSingleFetchOperation : VUIAsynchronousOperation

@property (retain, nonatomic) VUIMediaEntityType *currentFetchMediaEntityType; // ivar: _currentFetchMediaEntityType
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) VUIMediaEntityKind *mediaEntityKind; // ivar: _mediaEntityKind
@property (retain, nonatomic) VUIMPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (retain, nonatomic) MPMediaPredicate *mediaQueryPredicate; // ivar: _mediaQueryPredicate
@property (retain, nonatomic) NSDictionary *mediaQuerySortOrderingDirectionMappings; // ivar: _mediaQuerySortOrderingDirectionMappings
@property (retain, nonatomic) NSArray *mediaQuerySortOrderingProperties; // ivar: _mediaQuerySortOrderingProperties
@property (retain, nonatomic) NSArray *postFetchSortDescriptors; // ivar: _postFetchSortDescriptors
@property (retain, nonatomic) NSMutableSet *prefetchProperties; // ivar: _prefetchProperties
@property (nonatomic) BOOL processPredicateAfterFetch; // ivar: _processPredicateAfterFetch
@property (nonatomic) BOOL processRangeAfterFetch; // ivar: _processRangeAfterFetch
@property (retain, nonatomic) VUIMediaEntityFetchRequest *request; // ivar: _request
@property (copy, nonatomic) VUIMediaEntityFetchResponse *response; // ivar: _response


+(id)_sortIndexesWithMediaQuerySection:(id)arg0 ;
-(BOOL)_isSortingBeingPerformedByMediaQuery;
-(BOOL)_shouldSortUsingMediaQuery;
-(id)_baseMediaQuery;
-(id)_bitTestMediaQueryPropertyPredicateWithKeyPathBitTestExpression:(id)arg0 operatorType:(NSUInteger)arg1 constantExpression:(id)arg2 ;
-(id)_coalesceResponses:(id)arg0 ;
-(id)_collectionsFetchResponseWithMediaQuery:(id)arg0 ;
-(id)_fetchResponseWithMediaEntities:(id)arg0 mediaQuerySections:(id)arg1 ;
-(id)_itemsFetchResponseWithMediaQuery:(id)arg0 ;
-(id)_keyPathMediaQueryPropertyPredicateWithKeyPathExpression:(id)arg0 operatorType:(NSUInteger)arg1 constantExpression:(id)arg2 ;
-(id)_mediaEntities:(id)arg0 subarrayWithRange:(struct _NSRange )arg1 ;
-(id)_mediaEntityPropertyDescriptorForFilteringWithKeyPath:(id)arg0 ;
-(id)_mediaQuery;
-(id)_mediaQueryPredicateForCompoundPredicate:(id)arg0 ;
-(id)_mediaQueryPredicateForPredicate:(id)arg0 ;
-(id)_mediaQueryPropertyPredicateForComparisonPredicate:(id)arg0 ;
-(id)_processFetchedMediaEntities:(id)arg0 ;
-(id)init;
-(id)initWithMediaLibrary:(id)arg0 request:(id)arg1 ;
-(void)_addEntityLimitToMediaQuery:(id)arg0 ;
-(void)_addPredicateToMediaQuery:(id)arg0 ;
-(void)_addPrefetchPropertiesToMediaQuery:(id)arg0 ;
-(void)_addSortingPropertiesToMediaQuery:(id)arg0 ;
-(void)_populatePrefetchProperties;
-(void)_processPredicate;
-(void)_processRange;
-(void)_processSortDescriptors;
-(void)executionDidBegin;


@end


#endif