// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHREFERENCELINESTYLE_H
#define TSCHREFERENCELINESTYLE_H



#import "TSCHBaseStyle.h"

@interface TSCHReferenceLineStyle : TSCHBaseStyle



+(NSUInteger)p_valueAxisLabelParagraphStyleIndexWithValueAxisStyle:(id)arg0 paragraphStyles:(id)arg1 ;
+(float)defaultFloatValueForProperty:(int)arg0 ;
+(id)defaultStyleForPresetFromChartStyle:(id)arg0 seriesStyle:(id)arg1 paragraphStyles:(id)arg2 valueAxisStyle:(id)arg3 ;
+(id)defaultStyleWithContext:(id)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)identifierForRoleIndex:(NSUInteger)arg0 ordinal:(NSUInteger)arg1 ;
+(id)imageFillProperties;
+(id)overrideMapFromChartStyle:(id)arg0 seriesStyle:(id)arg1 paragraphStyles:(id)arg2 valueAxisStyle:(id)arg3 ;
+(id)p_outsideSeriesLabelColorOfSeriesStyle:(id)arg0 paragraphStyles:(id)arg1 ;
+(id)presetStyleDescriptorForOrdinal:(NSUInteger)arg0 ;
+(id)properties;
+(int)defaultIntValueForProperty:(int)arg0 ;
+(int)muxDefaultPropertyForSpecificProperty:(int)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif