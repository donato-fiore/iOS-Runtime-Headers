// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKDRIVINGPOLYLINEPATH_H
#define VKDRIVINGPOLYLINEPATH_H



#import "VKPolylinePath.h"

@interface VKDrivingPolylinePath : VKPolylinePath {
    GradientTraffic _standardModeTraffic;
    vector<float, std::allocator<float>> _laneHalfWidths;
    vector<double, std::allocator<double>> _distances;
    vector<md::GradientTraffic, std::allocator<md::GradientTraffic>> _gradientTraffics;
}




+(void)updateDistances:(*void)arg0 forPath:(id)arg1 snap:(BOOL)arg2 ;
-(float)laneHalfWidthAtIndex:(unsigned int)arg0 ;
-(id)initWithOverlay:(id)arg0 section:(id)arg1 routeStartIndex:(unsigned int)arg2 routeEndIndex:(unsigned int)arg3 matchedPathSegments:(id)arg4 ;
-(struct GradientTraffic *)gradientTrafficAtIndex:(unsigned int)arg0 ;
-(void)assignPoints:(*void)arg0 count:(NSUInteger)arg1 ;
-(void)assignPoints:(*void)arg0 laneHalfWidths:(*float)arg1 gradientTraffics:(struct GradientTraffic *)arg2 polylineCoordinates:(struct PolylineCoordinate *)arg3 count:(NSUInteger)arg4 ;
-(void)assignTo:(id)arg0 withSegment:(struct TrafficSegment *)arg1 ;
-(void)setTrafficSpeed:(unsigned char)arg0 ;
-(void)splitGradientTrafficSegmentationAndAddTo:(id)arg0 with:(*void)arg1 shouldSnap:(BOOL)arg2 ;
-(void)splitTrafficSegmentationAndAddTo:(id)arg0 with:(*void)arg1 shouldSnap:(BOOL)arg2 isGradientTraffic:(BOOL)arg3 ;


@end


#endif