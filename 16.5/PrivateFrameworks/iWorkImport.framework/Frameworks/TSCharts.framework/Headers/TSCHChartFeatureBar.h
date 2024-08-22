// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTFEATUREBAR_H
#define TSCHCHARTFEATUREBAR_H



#import "TSCHChartFeatureCategory.h"

@interface TSCHChartFeatureBar : TSCHChartFeatureCategory



-(BOOL)isHorizontal;
-(BOOL)supportsCategoryAxisSeriesNames;
-(BOOL)supportsColumnShape;
-(BOOL)supportsElementChunking;
-(BOOL)supportsGroupedShadows;
-(BOOL)supportsSeriesLabels;
-(CGFloat)maxDepthRatio;
-(CGFloat)sageMaxDepthRatio;
-(CGFloat)spiceMaxDepthRatio;
-(Class)presetImagerClass;
-(Class)stageClass;
-(Class)valueAxisClassForID:(id)arg0 scale:(NSInteger)arg1 ;
-(id)categoryLabelPositioner;
-(id)columnShapeUIName;
-(id)defaultDataFileName;
-(id)genericToSpecificPropertyMap;
-(id)initWithChartType:(id)arg0 ;
-(id)initialSceneWithChartInfo:(id)arg0 layoutSettings:(struct ? )arg1 ;
-(id)supportedAxisScales;
-(id)userInterfaceName;
-(id)valueLabelPositioner;
-(int)deprecated3DBevelEdgesSpecificProperty;
-(int)deprecated3DShadowSpecificProperty;
-(int)labelOrientation;
-(int)representativeGridValueAxisType;


@end


#endif