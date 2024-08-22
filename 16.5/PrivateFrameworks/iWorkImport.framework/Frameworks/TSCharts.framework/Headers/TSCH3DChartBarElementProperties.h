// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DCHARTBARELEMENTPROPERTIES_H
#define TSCH3DCHARTBARELEMENTPROPERTIES_H

@class NSMutableArray;
@protocol TSCH3DBarChartAppearance;


#import "TSCH3DChartBasicElementProperties.h"
#import "TSCH3DBarChartDefaultAppearance.h"
#import "TSCH3DLabelResources.h"

@interface TSCH3DChartBarElementProperties : TSCH3DChartBasicElementProperties {
    vector<float, std::allocator<float>> _maxValues;
    vector<TSCH3D::BarElementInfo, std::allocator<TSCH3D::BarElementInfo>> _elementInfos;
    BOOL _stacked;
    float _barWidth;
    float _elementsXOffset;
    float _seriesOffset;
    float _setWidth;
    array<TSCH3D::BarExtrusionDetails, 2UL> _extrusionDetails;
    TSCH3DBarChartDefaultAppearance *_appearance;
    NSMutableArray *_rangeCache;
}


@property (readonly, nonatomic) NSObject<TSCH3DBarChartAppearance> *appearance;
@property (readonly, nonatomic) int barShape; // ivar: _barShape
@property (readonly, nonatomic) BOOL hasBevelEdges; // ivar: _bevelEdges
@property (retain, nonatomic) TSCH3DLabelResources *seriesLabels; // ivar: _seriesLabels


-(BOOL)applyElementTransform:(*void)arg0 series:(id)arg1 index:(struct tvec2<int> )arg2 propertyAccessor:(id)arg3 ;
-(BOOL)beveledAtIndex:(*void)arg0 ;
-(NSInteger)flatIndex:(*void)arg0 ;
-(float)barWidth;
-(float)chartInitialDepthOffset;
-(float)elementTransformDepthFromPropertyAccessor:(id)arg0 ;
-(float)interceptValueForSeries:(id)arg0 ;
-(float)maxValueForSeries:(NSInteger)arg0 ;
-(id)boundsGeometryForSeries:(id)arg0 index:(*void)arg1 ;
-(id)calculateInterceptForSeries:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)geometryForSeries:(id)arg0 index:(*void)arg1 ;
-(id)init;
-(id)normalsForSeries:(id)arg0 index:(*void)arg1 ;
-(id)p_barResourceCacheItemAtIndex:(*void)arg0 ;
-(id)p_calculateRangeForSeries:(id)arg0 index:(*void)arg1 intercept:(id)arg2 ;
-(id)rangeForSeries:(id)arg0 index:(*void)arg1 ;
-(id)texcoordsForSeries:(id)arg0 index:(*void)arg1 ;
-(struct BarElementInfo )barElementInfoAtIndex:(*void)arg0 ;
-(struct BarElementInfo *)elementInfoAtIndex:(*void)arg0 ;
-(struct BarExtrusionDetails *)extrusionDetailsForShape:(int)arg0 ;
-(void)calculateLayout;
-(void)createResources;
-(void)dealloc;
-(void)p_createAppearance;
-(void)p_resetExtrusionDetails;
-(void)p_updateAppearance;
-(void)p_updateRangeCache;
-(void)releaseAndClearAppearance;
-(void)reset;
-(void)setBeveledAtIndex:(*void)arg0 ;
-(void)setElementInfo:(struct BarElementInfo *)arg0 atIndex:(*void)arg1 ;
-(void)setExtrusionDetails:(struct BarExtrusionDetails *)arg0 forShape:(int)arg1 ;
-(void)setMaxValueForSeries:(NSInteger)arg0 value:(float)arg1 ;
-(void)updateLabels;
-(void)updateMaxValuesAndBevels;


@end


#endif