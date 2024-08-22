// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIREVIEW_H
#define SKUIREVIEW_H

@class NSString, NSMutableDictionary;
@protocol SKUICacheCoding;

#import <Foundation/Foundation.h>


@interface SKUIReview : NSObject <SKUICacheCoding>



@property (readonly, nonatomic) NSString *body; // ivar: _body
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly, nonatomic) NSString *dateString; // ivar: _dateString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float rating; // ivar: _rating
@property (readonly, nonatomic) NSString *reviewer; // ivar: _reviewer
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)formattedBylineWithClientContext:(id)arg0 ;
-(id)initWithCacheRepresentation:(id)arg0 ;
-(id)initWithReviewDictionary:(id)arg0 ;


@end


#endif