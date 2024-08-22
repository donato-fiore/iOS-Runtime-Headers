// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSTOREFRONTFILTER_H
#define VSSTOREFRONTFILTER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface VSStorefrontFilter : NSObject

@property (readonly, copy, nonatomic) NSArray *filteredStorefronts;
@property (copy, nonatomic) NSString *searchQuery; // ivar: _searchQuery
@property (copy, nonatomic) NSArray *storefronts; // ivar: _storefronts


+(id)keyPathsForValuesAffectingFilteredStorefronts;
-(id)init;


@end


#endif