// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTSERIES_H
#define TSCHCHARTSERIES_H

@class TSUIntegerKeyDictionary, NSString, TSUFastReadInvalidatingCache;
@protocol TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSCHStyleActAlike;

#import <Foundation/Foundation.h>

#import "TSCHChartModel.h"
#import "TSCHDownsampleData.h"
#import "TSCHErrorBarData.h"
#import "TSCHChartGridAdapter.h"
#import "TSCHChartSeriesType.h"
#import "TSCHTrendLineData.h"

@interface TSCHChartSeries : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning>



@property (readonly, nonatomic) int adjustedNumberFormatType;
@property (retain, nonatomic) TSUIntegerKeyDictionary *axisTable; // ivar: _axisTable
@property (nonatomic) NSUInteger barGapIndex; // ivar: _barGapIndex
@property (weak, nonatomic) TSCHChartModel *chartModel; // ivar: _chartModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) TSCHDownsampleData *downsampleData;
@property (retain, nonatomic) TSUFastReadInvalidatingCache *downsampleDataCache; // ivar: _downsampleDataCache
@property (retain, nonatomic) TSCHErrorBarData *errorBarData; // ivar: _errorBarData
@property (readonly, nonatomic) int gridValueType;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDownsampled;
@property (nonatomic) BOOL isFakeSeriesForHiddenDataExport; // ivar: _isFakeSeriesForHiddenDataExport
@property (readonly, weak, nonatomic) TSCHChartModel *model; // ivar: _model
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TSCHChartGridAdapter *nameAdapter; // ivar: _nameAdapter
@property (retain, nonatomic) NSObject<TSCHStyleActAlike> *nonStyle; // ivar: _nonStyle
@property (readonly, nonatomic) NSUInteger numberOfGroups;
@property (readonly, nonatomic) NSUInteger numberOfValues;
@property (nonatomic) int seriesElementType;
@property (nonatomic) NSUInteger seriesIndex; // ivar: _seriesIndex
@property (retain, nonatomic) NSObject *seriesStorage; // ivar: _seriesStorage
@property (retain, nonatomic) TSCHChartSeriesType *seriesType; // ivar: _seriesType
@property (readonly, nonatomic) BOOL showTrendLineLegendText;
@property (retain, nonatomic) NSObject<TSCHStyleActAlike> *style; // ivar: _style
@property (nonatomic) BOOL styleIsPrivate; // ivar: _styleIsPrivate
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsNegativeStyle;
@property (retain, nonatomic) TSCHTrendLineData *trendLineData; // ivar: _trendLineData
@property (readonly, nonatomic) NSString *trendLineLegendText;
@property (readonly, nonatomic) unsigned int valueLabelPosition;


+(id)computableProperties;
+(id)computedFillOrStroke:(id)arg0 forSeriesIndex:(NSUInteger)arg1 numberOfThemeSeries:(NSUInteger)arg2 ;
+(id)defaultNumberFormat;
+(id)stackedPercentageNumberFormat;
-(BOOL)floatValueForLabelExplosion:(*float)arg0 ;
-(BOOL)hasCustomFormatForGridValueType:(int)arg0 ;
-(BOOL)hasFloatValueForProperty:(int)arg0 value:(*float)arg1 ;
-(BOOL)hasIntValueForProperty:(int)arg0 value:(*int)arg1 ;
-(BOOL)hasObjectValueForProperty:(int)arg0 value:(*id)arg1 ;
-(BOOL)isMultiData;
-(BOOL)renderSeriesForClass:(Class)arg0 ;
-(CGFloat)effectiveLabelExplosion;
-(NSUInteger)groupIndexOfValueIndex:(NSUInteger)arg0 ;
-(NSUInteger)multiDataSetIndex;
-(NSUInteger)multiDataSetIndexForAxis:(id)arg0 ;
-(NSUInteger)multiDataSetIndexForAxisID:(id)arg0 ;
-(NSUInteger)valueIndexAtGroupIndex:(NSUInteger)arg0 ;
-(float)floatValueForProperty:(int)arg0 defaultValue:(float)arg1 ;
-(id)axisForAxisType:(int)arg0 ;
-(id)axisIDForAxisType:(int)arg0 ;
-(id)axisTypesForValueLabelString;
-(id)chartInfo;
-(id)context;
-(id)customFormatForGridValueType:(int)arg0 ;
-(id)defaultProperties;
-(id)drawableInfo;
-(id)fillForSeries;
-(id)formattedValueLabelStringForGroupIndex:(NSUInteger)arg0 ;
-(id)g_genericToDefaultPropertyMap;
-(id)g_operationPropertyNameForGenericProperty:(int)arg0 ;
-(id)initWithChartModel:(id)arg0 index:(NSUInteger)arg1 ;
-(id)multiDataValueEnumeratorForAxisID:(id)arg0 ;
-(id)objectValueForProperty:(int)arg0 ;
-(id)operationPropertyNameFromGenericProperty:(int)arg0 ;
-(id)p_axisStorageForType:(int)arg0 create:(BOOL)arg1 ;
-(id)p_genericToDefaultPropertyMap;
-(id)p_representativeThemeSeries;
-(id)p_seriesNonStyleOrDefaultNonStyle;
-(id)seriesNameStringForGroupIndex:(NSUInteger)arg0 ;
-(id)swapTuplesForMutations:(id)arg0 forImport:(BOOL)arg1 ;
-(id)swapTuplesForParagraphStyleMutations:(id)arg0 forReferencingProperty:(int)arg1 ;
-(id)transformedTuplesWithTuple:(id)arg0 ;
-(id)valueForAxis:(id)arg0 groupIndex:(NSUInteger)arg1 ;
-(id)valueForAxis:(id)arg0 groupIndex:(NSUInteger)arg1 multiDataSetIndex:(NSUInteger)arg2 ;
-(id)valueForAxis:(id)arg0 valueIndex:(NSUInteger)arg1 ;
-(id)valueForAxis:(id)arg0 valueIndex:(NSUInteger)arg1 multiDataSetIndex:(NSUInteger)arg2 ;
-(id)valueForAxisID:(id)arg0 groupIndex:(NSUInteger)arg1 ;
-(id)valueForAxisID:(id)arg0 groupIndex:(NSUInteger)arg1 multiDataSetIndex:(NSUInteger)arg2 ;
-(id)valueForAxisID:(id)arg0 valueIndex:(NSUInteger)arg1 ;
-(id)valueForAxisID:(id)arg0 valueIndex:(NSUInteger)arg1 multiDataSetIndex:(NSUInteger)arg2 ;
-(id)valueForProperty:(int)arg0 ;
-(id)valueLabelStringForGroupIndex:(NSUInteger)arg0 ;
-(int)defaultPropertyForGeneric:(int)arg0 ;
-(int)intValueForProperty:(int)arg0 defaultValue:(int)arg1 ;
-(int)specificPropertyForGeneric:(int)arg0 ;
-(void)clearAxisIDs;
-(void)invalidateCacheDataForSynchronization;
-(void)modelSyncSetNonStyle:(id)arg0 ;
-(void)modelSyncSetStyle:(id)arg0 ;
-(void)p_generateComputedProperty:(int)arg0 objectValue:(*id)arg1 intValue:(*int)arg2 floatValue:(*float)arg3 ;
-(void)setAxisID:(id)arg0 forAxisType:(int)arg1 ;
-(void)setGridAdapter:(id)arg0 forAxisType:(int)arg1 ;
-(void)setGridAdapterForName:(id)arg0 ;
-(void)setValue:(id)arg0 forAxisID:(id)arg1 index:(NSUInteger)arg2 ;


@end


#endif