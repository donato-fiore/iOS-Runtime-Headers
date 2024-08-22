// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIAENTITYFETCHREQUEST_H
#define VUIMEDIAENTITYFETCHREQUEST_H

@class NSString, NSSet, NSDictionary, NSPredicate, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIMediaEntityFetchRequest : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL _isCollectionsFetch;
@property (readonly, nonatomic) BOOL _isItemsFetch;
@property (readonly, nonatomic) BOOL _isSeasonsFetch;
@property (readonly, nonatomic) BOOL _isShowsFetch;
@property (copy, nonatomic) NSString *groupingKeyPath; // ivar: _groupingKeyPath
@property (copy, nonatomic) id *groupingSortComparator; // ivar: _groupingSortComparator
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSSet *mediaEntityTypes; // ivar: _mediaEntityTypes
@property (copy, nonatomic) NSDictionary *options; // ivar: _options
@property (copy, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (copy, nonatomic) NSSet *properties; // ivar: _properties
@property (nonatomic) _NSRange range; // ivar: _range
@property (copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors


+(id)_HLSResolutionPredicateWithResolution:(id)arg0 ;
+(id)_addedDateSortDescriptor;
+(id)_addedToDateSortDescriptor;
+(id)_any4KResolutionPredicate;
+(id)_anyHDRColorCapabilityPredicate;
+(id)_episodeNumberSortDescriptor;
+(id)_episodesFetchRequestWithSeasonIdentifier:(id)arg0 showIdentifier:(id)arg1 ;
+(id)_finalizedSortDescriptorFromSortDescriptor:(id)arg0 mediaEntityKind:(id)arg1 ;
+(id)_finalizedSortDescriptorsFromSortDescriptors:(id)arg0 mediaEntityKind:(id)arg1 ;
+(id)_fractionalEpisodeNumberSortDescriptor;
+(id)_identifierPredicateWithIdentifier:(id)arg0 ;
+(id)_includeSortIndexesOptions;
+(id)_isEqualPredicateWithAdamId:(id)arg0 ;
+(id)_isInPredicateWithAdamId:(id)arg0 ;
+(id)_isLocalPredicate;
+(id)_minimalMovieRentalsPropertiesFetchRequest;
+(id)_minimalMoviesPropertiesFetchRequest;
+(id)_minimalPropertiesFetchRequestWithType:(id)arg0 ;
+(id)_minimalShowsPropertiesFetchRequest;
+(id)_predicateWithSubpredicates:(id)arg0 compoundPredicateType:(NSUInteger)arg1 ;
+(id)_releaseDateSortDescriptor;
+(id)_releaseYearSortDescriptor;
+(id)_resolutionPredicateWithResolution:(id)arg0 ;
+(id)_seasonIdentifierPredicateWithIdentifier:(id)arg0 ;
+(id)_seasonNumberSortDescriptor;
+(id)_seasonsFetchRequestWithSeasonIdentifier:(id)arg0 ;
+(id)_seasonsFetchRequestWithShowIdentifier:(id)arg0 ;
+(id)_showIdentifierPredicateWithIdentifier:(id)arg0 ;
+(id)_showTitleSortDescriptor;
+(id)_titleSortDescriptor;
+(id)episodesFetchRequest;
+(id)episodesFetchRequestWithSeasonIdentifier:(id)arg0 ;
+(id)episodesGroupedBySeasonIdentifierFetchRequestWithShowIdentifier:(id)arg0 ;
+(id)homeVideosFetchRequest;
+(id)mediaEntityFetchRequestWithIdentifier:(id)arg0 ;
+(id)movieRentalsFetchRequest;
+(id)moviesFetchRequest;
+(id)seasonsFetchRequest;
+(id)seasonsFetchRequestWithSeasonIdentifier:(id)arg0 ;
+(id)seasonsFetchRequestWithShowIdentifier:(id)arg0 ;
+(id)showsFetchRequest;
-(BOOL)_shouldGenerateGroupingSortIndexes;
-(BOOL)_shouldGenerateSortIndexes;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_manualSortDescriptorsWithMediaEntityKind:(id)arg0 propertiesRequiredForSort:(*id)arg1 ;
-(id)_sortIndexPropertyKeyWithMediaEntityKind:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMediaEntityType:(id)arg0 ;
-(id)initWithMediaEntityTypes:(id)arg0 ;
-(void)_addPredicate:(id)arg0 ;
-(void)_didUpdateRequestProperties;
-(void)add4KResolutionPredicate;
-(void)addAdamIdPredicate:(id)arg0 ;
-(void)addAdamIdsPredicate:(id)arg0 ;
-(void)addDownloadStatePredicateForStates:(NSUInteger)arg0 ;
-(void)addGroupingSortIndexesOption;
-(void)addHDRColorCapabilityOr4KResolutionPredicate;
-(void)addHDRColorCapabilityPredicate;
-(void)addHasItemsOption;
-(void)addIsLocalOrHasExpiredDownloadPredicate;
-(void)addIsLocalPredicate;
-(void)addRecentlyAddedSortDescriptorWithLimit:(NSUInteger)arg0 ;
-(void)addSortIndexesOption;


@end


#endif