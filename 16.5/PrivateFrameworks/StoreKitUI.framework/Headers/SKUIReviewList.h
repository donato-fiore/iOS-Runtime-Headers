// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIREVIEWLIST_H
#define SKUIREVIEWLIST_H

@class NSDictionary, NSMutableDictionary, NSString, NSArray, NSURL;
@protocol SKUICacheCoding;

#import <Foundation/Foundation.h>


@interface SKUIReviewList : NSObject <SKUICacheCoding>

 {
    NSDictionary *_dictionary;
}


@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger fiveStarRatingCount;
@property (readonly, nonatomic) NSInteger fourStarRatingCount;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfPages;
@property (readonly, nonatomic) NSInteger oneStarRatingCount;
@property (readonly, nonatomic) NSInteger ratingCount;
@property (readonly, nonatomic) NSArray *reviews; // ivar: _reviews
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger threeStarRatingCount;
@property (readonly, nonatomic) NSInteger twoStarRatingCount;
@property (readonly, nonatomic) float userRating;
@property (readonly, nonatomic) NSURL *writeReviewURL;


-(id)initWithCacheRepresentation:(id)arg0 ;
-(id)initWithReviewListDictionary:(id)arg0 ;
-(void)addReviews:(id)arg0 ;


@end


#endif