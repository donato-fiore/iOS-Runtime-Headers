// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTSERIESTYPEAREA_H
#define TSCHCHARTSERIESTYPEAREA_H



#import "TSCHChartSeriesType.h"

@interface TSCHChartSeriesTypeArea : TSCHChartSeriesType



-(BOOL)supportsDownsampling;
-(BOOL)supportsSymbolDrawing;
-(BOOL)supportsSymbolFillForSymbolType:(int)arg0 ;
-(NSUInteger)valueDimensions;
-(id)elementBuilder;
-(id)fillPropertyTypeName;
-(id)g_genericToSpecificPropertyMapArea;
-(id)genericToSpecificPropertyMap;
-(id)init;
-(id)userInterfaceName;
-(int)fillPropertyType;
-(int)legendBadgeType;
-(int)seriesElementType;
-(unsigned int)filterChartLabelPosition:(unsigned int)arg0 ;


@end


#endif