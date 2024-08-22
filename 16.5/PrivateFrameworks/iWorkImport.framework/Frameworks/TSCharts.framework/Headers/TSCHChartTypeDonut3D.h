// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTTYPEDONUT3D_H
#define TSCHCHARTTYPEDONUT3D_H



#import "TSCH3DChartType.h"

@interface TSCHChartTypeDonut3D : TSCH3DChartType



-(BOOL)approximatesTitleAccommodationUsingLegendSize;
-(BOOL)supportsBevels;
-(BOOL)supportsGroupedShadows;
-(NSInteger)userInterfaceTag;
-(id)categoryLabelPositioner;
-(id)defaultSeriesType:(NSUInteger)arg0 ;
-(id)imageWithPreset:(id)arg0 target:(int)arg1 imageSize:(struct CGSize )arg2 imageScale:(CGFloat)arg3 swatchFrame:(struct CGRect )arg4 documentRoot:(id)arg5 shouldCache:(*BOOL)arg6 ;
-(id)init;
-(id)userInterfaceName;
-(id)valueLabelPositioner;


@end


#endif