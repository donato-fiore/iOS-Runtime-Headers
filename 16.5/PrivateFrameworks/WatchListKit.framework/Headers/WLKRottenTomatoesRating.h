// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKROTTENTOMATOESRATING_H
#define WLKROTTENTOMATOESRATING_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface WLKRottenTomatoesRating : NSObject

@property (readonly, nonatomic) NSUInteger freshness; // ivar: _freshness
@property (readonly, copy, nonatomic) NSNumber *freshnessPercentage; // ivar: _freshnessPercentage


+(NSUInteger)freshnessForString:(id)arg0 ;
-(id)init;
-(id)initWithFreshness:(NSUInteger)arg0 freshnessPercentage:(id)arg1 ;


@end


#endif