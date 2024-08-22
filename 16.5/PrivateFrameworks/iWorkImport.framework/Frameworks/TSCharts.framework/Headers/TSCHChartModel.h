// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHCHARTMODEL_H
#define TSCHCHARTMODEL_H

@class NSDictionary, NSMutableDictionary, NSArray;
@protocol TSCHNotifyOnModify, TSDMixing, NSCopying;

#import <Foundation/Foundation.h>

#import "TSCHChartInfo.h"
#import "TSCHChartGrid.h"

@interface TSCHChartModel : NSObject <TSCHNotifyOnModify, TSDMixing, NSCopying>

 {
    BOOL _modelInvalid;
    NSDictionary *_axisIDToDataFormatterPersistableStyleObjectsMap;
    NSDictionary *_seriesIndexToDataFormatterPersistableStyleObjectsMap;
    BOOL _disableCachingMediatorData;
    int _cachedChartMediatorGridDirection;
    NSMutableDictionary *_modelManagedCaches;
}


@property (readonly, nonatomic) NSUInteger analyticsDataSize;
@property (readonly, copy, nonatomic) NSArray *axisList; // ivar: _axisList
@property (readonly, copy, nonatomic) NSArray *categoryAxisList;
@property (weak, nonatomic) TSCHChartInfo *chart;
@property (weak, nonatomic) TSCHChartInfo *chartInfo; // ivar: _chartInfo
@property (retain, nonatomic) TSCHChartGrid *grid; // ivar: _grid
@property (retain, nonatomic) NSMutableDictionary *gridIndexesBySeriesDimension; // ivar: _gridIndexesBySeriesDimension
@property (readonly, nonatomic) BOOL isMultiData;
@property (readonly, nonatomic) BOOL isTransient; // ivar: _isTransient
@property (readonly, nonatomic) NSUInteger maxNumberOfReferenceLines;
@property (nonatomic) NSUInteger multiDataSetIndex; // ivar: _multiDataSetIndex
@property (readonly, nonatomic) NSUInteger numberOfChunkableMultiDataSets;
@property (readonly, nonatomic) NSUInteger numberOfGroupsInAllSeries;
@property (readonly, nonatomic) NSUInteger numberOfMultiDataSetCategories;
@property (readonly, nonatomic) NSUInteger numberOfMultiDataSets;
@property (readonly, nonatomic) NSUInteger numberOfSeries;
@property (readonly, nonatomic) NSUInteger numberOfSeriesForCalculatingBarWidth; // ivar: _numberOfSeriesForCalculatingBarWidth
@property (readonly, nonatomic) NSUInteger numberOfValues;
@property (readonly, copy, nonatomic) NSDictionary *referenceLinesMap; // ivar: _referenceLinesMap
@property (nonatomic) int scatterFormat; // ivar: _scatterFormat
@property (retain, nonatomic) NSMutableDictionary *seriesDimensionsByGridIndex; // ivar: _seriesDimensionsByGridIndex
@property (readonly, copy, nonatomic) NSArray *seriesList; // ivar: _seriesList
@property (readonly, nonatomic) id *syncRoot;
@property (readonly, copy, nonatomic) NSArray *valueAxisList;


-(BOOL)hasReferenceLines;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0 ;
-(BOOL)p_disableCachingMediatorData;
-(BOOL)p_shouldLoadDefaultData;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)archivedMultiDataSetIndex;
-(NSUInteger)categoryForMultiDataSetCategoryIndex:(NSUInteger)arg0 ;
-(NSUInteger)defaultOrdinalForAxisType:(int)arg0 seriesIndex:(NSUInteger)arg1 ;
-(NSUInteger)gridIndexForSeriesDimension:(id)arg0 ;
-(NSUInteger)multiDataSetCategoryIndexForCategory:(NSUInteger)arg0 ;
-(NSUInteger)numberOfGridValues;
-(NSUInteger)numberOfGroupsInSeries:(id)arg0 ;
-(NSUInteger)numberOfGroupsInSeriesAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)p_lastMultiDataSetIndex;
-(NSUInteger)p_multiDataSetCategoryIndexForCategory:(NSUInteger)arg0 ;
-(NSUInteger)p_numberOfGroupsInSeries:(id)arg0 ;
-(NSUInteger)styleSwapIndexForReferenceLine:(id)arg0 ;
-(id)addAxisOfClass:(Class)arg0 forIDForPresetImport:(id)arg1 ;
-(id)addSeriesAtIndexForPresetImport:(NSUInteger)arg0 ;
-(id)allGroupsIndexSetForSeries:(id)arg0 ;
-(id)axisForID:(id)arg0 ;
-(id)barModelCacheForSeries:(NSUInteger)arg0 ;
-(id)cachedDataFormatterPersistableStyleObjectAtSeriesIndex:(NSUInteger)arg0 ;
-(id)cachedDataFormatterPersistableStyleObjectForID:(id)arg0 ;
-(id)cachedObjectForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataSetNameForMultiDataModel;
-(id)init;
-(id)initForPresetImportWithChartInfo:(id)arg0 ;
-(id)initWithChartInfo:(id)arg0 ;
-(id)initWithChartInfo:(id)arg0 dataSetIndex:(NSUInteger)arg1 ;
-(id)legendModelCacheForStyleProvidingSource:(id)arg0 ;
-(id)lineAreaModelCacheForSeries:(NSUInteger)arg0 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)nameForCategory:(NSUInteger)arg0 ;
-(id)nameForMultiDataSetCategory:(NSUInteger)arg0 ;
-(id)nameForSeries:(NSUInteger)arg0 ;
-(id)noSyncAxisList;
-(id)noSyncSeriesList;
-(id)p_axisForID:(id)arg0 ;
-(id)pieSeriesModelCacheForSeries:(NSUInteger)arg0 ;
-(id)referenceLineForStyleSwapIndex:(NSUInteger)arg0 ;
-(id)seriesAtIndex:(NSUInteger)arg0 ;
-(id)seriesDimensionForGridIndex:(NSUInteger)arg0 ;
-(id)seriesForHiddenDataExportAtIndex:(NSUInteger)arg0 ;
-(int)cachedChartMediatorGridDirection;
-(void)clearTextEditingSelectionPath;
-(void)disableCachingMediatorDataDuringBlock:(id)arg0 ;
-(void)enumerateMultiDataModelsUsingBlock:(id)arg0 ;
-(void)forceLoadDefaultData;
-(void)invalidateCaches;
-(void)invalidateModel;
-(void)loadDefaultDataIfNotDirty;
-(void)loadDefaultDataIfNotDirtyWithGridRowIds:(id)arg0 gridColumnIds:(id)arg1 forDocumentLocale:(id)arg2 ;
-(void)loadFromPreUFFArchive:(*void)arg0 unarchiver:(id)arg1 contextForUpgradeOnly:(id)arg2 ;
-(void)loadFromUnityArchive:(*void)arg0 unarchiver:(id)arg1 contextForUpgradeOnly:(id)arg2 chartInfo:(id)arg3 ;
-(void)p_cacheAxisDataFormatters;
-(void)p_cacheMediatorChartGridDirection;
-(void)p_cacheSeriesDataFormatters;
-(void)p_loadDefaultData;
-(void)p_loadDefaultDataWithGridRowIds:(id)arg0 gridColumnIds:(id)arg1 forDocumentLocale:(id)arg2 ;
-(void)p_postSynchronizeAxisList;
-(void)p_setBimapEntryForSeriesDimension:(id)arg0 andGridIndex:(NSUInteger)arg1 ;
-(void)p_synchronizeAxis:(id)arg0 class:(Class)arg1 axisID:(id)arg2 axisIndex:(NSUInteger)arg3 styleIndex:(NSUInteger)arg4 usedAxes:(id)arg5 unusedAxes:(id)arg6 ;
-(void)p_synchronizeAxisList;
-(void)p_synchronizeModel;
-(void)p_synchronizeModelWithSeriesNonStyleMigration:(BOOL)arg0 ;
-(void)p_synchronizeReferenceLines;
-(void)p_synchronizeSeriesListWithSeriesNonStyleMigration:(BOOL)arg0 ;
-(void)resetSeriesStorage;
-(void)saveToUnityArchive:(*void)arg0 forCopy:(BOOL)arg1 ;
-(void)setCacheObject:(id)arg0 forKey:(id)arg1 ;
-(void)setNameForCategory:(NSUInteger)arg0 toName:(id)arg1 ;
-(void)setNameForMultiDataSetCategory:(NSUInteger)arg0 toName:(id)arg1 ;
-(void)setNameForSeries:(NSUInteger)arg0 toName:(id)arg1 ;
-(void)setShouldCacheMediatorData:(BOOL)arg0 ;
-(void)setTextEditingSelectionPath:(id)arg0 string:(id)arg1 ;
-(void)updateTransientModelFromInfoModel;
-(void)validateIfNeeded;
-(void)validateIfNeededWithSeriesNonStyleMigration:(BOOL)arg0 ;
-(void)willModify;


@end


#endif