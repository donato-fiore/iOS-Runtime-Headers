// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTSERIESTYPEPIE_H
#define TSCHCHARTSERIESTYPEPIE_H



#import "TSCHChartSeriesType.h"

@interface TSCHChartSeriesTypePie : TSCHChartSeriesType



-(BOOL)floatValueForLabelExplosion:(*float)arg0 series:(id)arg1 ;
-(BOOL)supportsCalloutLines;
-(BOOL)supportsValueLabelsSeriesName;
-(NSUInteger)valueDimensions;
-(id)axisTypesForValueLabels;
-(id)elementBuilder;
-(id)fillPropertyTypeName;
-(id)g_genericToSpecificPropertyMapPie;
-(id)genericToSpecificPropertyMap;
-(id)init;
-(id)inspectorLocalizedValueLabelsDisclosureTitle;
-(id)inspectorLocalizedValueLabelsTabName;
-(id)legalChartLabelPositions;
-(id)seriesFillLabelUIString;
-(id)supportedValueLabelsAxisCombinations;
-(id)userInterfaceName;
-(id)userInterfaceNameForLabelPosition:(id)arg0 ;
-(int)fillPropertyType;
-(int)legendBadgeType;
-(unsigned int)filterChartLabelPosition:(unsigned int)arg0 ;
-(unsigned int)filterChartLabelPosition:(unsigned int)arg0 forSeries:(id)arg1 ;


@end


#endif