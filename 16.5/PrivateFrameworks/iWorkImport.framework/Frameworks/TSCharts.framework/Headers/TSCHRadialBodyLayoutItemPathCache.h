// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHRADIALBODYLAYOUTITEMPATHCACHE_H
#define TSCHRADIALBODYLAYOUTITEMPATHCACHE_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface TSCHRadialBodyLayoutItemPathCache : NSObject

@property (readonly, copy, nonatomic) NSNumber *innerRadius; // ivar: innerRadius
@property (readonly, nonatomic) *CGPath pathLayoutRelative; // ivar: pathLayoutRelative
@property (readonly, copy, nonatomic) NSArray *pathSelectionKnobs; // ivar: pathSelectionKnobs
@property (readonly, nonatomic) *CGPath pathTransformRelative; // ivar: pathTransformRelative
@property (readonly, nonatomic) CGRect rootedLayoutRect; // ivar: rootedLayoutRect
@property (readonly, nonatomic) NSUInteger seriesIndex; // ivar: seriesIndex
@property (readonly, nonatomic) CGPoint wedgeCenterPoint; // ivar: wedgeCenterPoint


-(id)initWithSeriesIndex:(NSUInteger)arg0 rootedLayoutRect:(struct CGRect )arg1 wedgeCenterPoint:(struct CGPoint )arg2 pathLayoutRelative:(struct CGPath *)arg3 pathTransformRelative:(struct CGPath *)arg4 pathSelectionKnobs:(id)arg5 innerRadius:(id)arg6 ;
-(void)dealloc;


@end


#endif