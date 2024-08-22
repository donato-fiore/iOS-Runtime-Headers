// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTWIDTHHEIGHTCACHE_H
#define TSTWIDTHHEIGHTCACHE_H


#import <Foundation/Foundation.h>


@interface TSTWidthHeightCache : NSObject {
    _opaque_pthread_rwlock_t _lock;
    vector<TSTWidthHeightCacheEntry<4>, std::allocator<TSTWidthHeightCacheEntry<4>>> _rowHeights;
    vector<double, std::allocator<double>> _columnModelWidths;
}


@property (nonatomic) BOOL needsToBeArchived; // ivar: _needsToBeArchived
@property (readonly, nonatomic) unsigned int numberOfColumns;
@property (readonly, nonatomic) unsigned int numberOfRows;


-(BOOL)p_insertColumns:(unsigned int)arg0 atColumn:(unsigned short)arg1 ;
-(BOOL)p_insertRows:(unsigned int)arg0 atRow:(unsigned int)arg1 ;
-(CGFloat)getFitHeightForRow:(unsigned int)arg0 ;
-(CGFloat)getModelHeightForRow:(unsigned int)arg0 ;
-(CGFloat)getModelWidthForColumn:(unsigned short)arg0 ;
-(id)columnToWidthMapFromCollectionArray:(id)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithNumRows:(unsigned int)arg0 andNumColumns:(unsigned int)arg1 ;
-(id)p_deleteColumnsStartingWith:(unsigned short)arg0 upToColumn:(unsigned short)arg1 ;
-(id)p_resetFittingHeightsForRange:(struct TSUCellRect )arg0 ;
-(id)validateChangeDescriptors:(id)arg0 tableInfo:(id)arg1 numberOfRows:(unsigned int)arg2 numberOfColumns:(unsigned short)arg3 ;
-(id)validateRowsNeedingFittingInfo:(id)arg0 validationRegion:(id)arg1 layoutEngine:(id)arg2 ;
-(void)dealloc;
-(void)finalizeLayoutPassWithRowsNeedingFittingInfo:(id)arg0 ;
-(void)getFitHeight:(*CGFloat)arg0 andModelHeight:(*CGFloat)arg1 forRow:(unsigned int)arg2 ;
-(void)p_deleteRowsStartingWith:(unsigned int)arg0 upToRow:(unsigned int)arg1 ;
-(void)p_moveColumnsFrom:(struct TSUCellRect )arg0 toColumn:(unsigned short)arg1 ;
-(void)p_moveRowsFrom:(struct TSUCellRect )arg0 toRow:(unsigned int)arg1 ;
-(void)p_moveRowsUsingShuffleMapping:(id)arg0 ;
-(void)p_resetToRows:(unsigned int)arg0 andNumColumns:(unsigned int)arg1 ;
-(void)p_setFittingHeightsFromCollectionWithLock:(id)arg0 ;
-(void)resetFittingRowHeightsStartingWith:(unsigned int)arg0 upToRow:(unsigned int)arg1 ;
-(void)resetModelCache;
-(void)resetModelCacheRange:(struct TSUCellRect )arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setFitHeight:(CGFloat)arg0 forCellID:(struct TSUCellCoord )arg1 ;
-(void)setFittingHeightsFromCollection:(id)arg0 ;
-(void)setFittingHeightsFromCollectionArray:(id)arg0 ;
-(void)setModelHeight:(CGFloat)arg0 forRow:(unsigned int)arg1 ;
-(void)setModelWidth:(CGFloat)arg0 forColumn:(unsigned short)arg1 ;
-(void)willModifyIfNeeded:(id)arg0 ;
-(void)willModifyIfPossible:(id)arg0 ;


@end


#endif