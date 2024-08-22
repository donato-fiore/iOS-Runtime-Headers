// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIAAPIREQUESTFACTORY_H
#define VUIMEDIAAPIREQUESTFACTORY_H


#import <Foundation/Foundation.h>


@interface VUIMediaAPIRequestFactory : NSObject



+(id)_URLAddAdditionalParameter:(id)arg0 ;
+(id)_URLParameterFilterWithShowIdentifier:(id)arg0 ;
+(id)_URLParameterForAdditionalParameters;
+(id)_URLParameterForExtend:(id)arg0 ;
+(id)_URLParameterForInclude:(id)arg0 ;
+(id)_URLParameterForIncludeType:(id)arg0 includeRelationship:(id)arg1 ;
+(id)_URLParameterForLimit:(id)arg0 ;
+(id)_URLParameterForSort:(id)arg0 ;
+(id)_URLParameterTypeFilterWithTypes:(id)arg0 ;
+(id)_URLParameterWithGenreFilter:(id)arg0 ;
+(id)_URLParameterWithGenreIDsFilter:(id)arg0 ;
+(id)_URLParameterWithOwnerIdentifier:(id)arg0 ;
+(id)_URLParameterWithSharedPurchases;
+(id)_URLRequestWithURLString:(id)arg0 ;
+(id)_purchasesEpisodesEndpoint;
+(id)episodesRequestWithShowIdentifier:(id)arg0 withOwnerIdentifier:(id)arg1 ;
+(id)familyMembersRequest;
+(id)genresRequestForVUIFamilySharingGenre:(id)arg0 withOwnerIdentifier:(id)arg1 ;
+(id)genresRequestForVUIFamilySharingGenreIDsFilter:(id)arg0 withOwnerIdentifier:(id)arg1 ;
+(id)genresRequestWithOwnerIdentifier:(id)arg0 ;
+(id)moviesPurchasesRequestWithOwnerIdentifier:(id)arg0 ;
+(id)recentPurchasesRequestWithOwnerIdentifier:(id)arg0 ;
+(id)seasonsRequestWithShowIdentifier:(id)arg0 withOwnerIdentifier:(id)arg1 ;
+(id)showsPurchasesRequestWithOwnerIdentifier:(id)arg0 ;
+(void)_addTypeFilterToURL:(*id)arg0 forRequest:(id)arg1 ;


@end


#endif