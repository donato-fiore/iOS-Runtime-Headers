// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIREFINEREGIONRESULT_H
#define VIREFINEREGIONRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VIRefineRegionResult : NSObject

@property (readonly, copy, nonatomic) NSArray *refinedRegions; // ivar: _refinedRegions
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


-(id)initWithRefinedRegions:(id)arg0 version:(NSUInteger)arg1 ;


@end


#endif