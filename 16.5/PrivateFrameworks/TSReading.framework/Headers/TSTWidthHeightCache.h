// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTWIDTHHEIGHTCACHE_H
#define TSTWIDTHHEIGHTCACHE_H


#import <Foundation/Foundation.h>


@interface TSTWidthHeightCache : NSObject {
    vector<TSTWidthHeightCache_Private::WHCCol, std::allocator<TSTWidthHeightCache_Private::WHCCol>> mFittingColumnWidth;
    vector<TSTWidthHeightCache_Private::WHCRow, std::allocator<TSTWidthHeightCache_Private::WHCRow>> mFittingRowHeight;
    vector<double, std::allocator<double>> mModelColumnWidth;
    vector<double, std::allocator<double>> mModelRowHeight;
    unsigned short mMaxRow;
    unsigned char mMaxCol;
    _opaque_pthread_rwlock_t mLock;
}




-(BOOL)deleteColsStartingWith:(unsigned char)arg0 andEndingWith:(unsigned char)arg1 ;
-(BOOL)deleteRowsStartingWith:(unsigned short)arg0 andEndingWith:(unsigned short)arg1 ;
-(BOOL)insertCols:(unsigned short)arg0 atColumn:(unsigned char)arg1 ;
-(BOOL)insertRows:(unsigned short)arg0 atRow:(unsigned short)arg1 ;
-(BOOL)moveColsFrom:(struct ? )arg0 toCol:(unsigned char)arg1 ;
-(BOOL)moveRowsFrom:(struct ? )arg0 toRow:(unsigned short)arg1 ;
-(BOOL)resetModelCache;
-(BOOL)resetModelCacheRange:(struct ? )arg0 ;
-(BOOL)setFitDims:(struct CGSize )arg0 forCellID:(struct ? )arg1 ;
-(BOOL)setFitHeight:(CGFloat)arg0 forCellID:(struct ? )arg1 ;
-(BOOL)setFitWidth:(CGFloat)arg0 forCellID:(struct ? )arg1 ;
-(BOOL)setModelHeight:(CGFloat)arg0 forRow:(unsigned short)arg1 ;
-(BOOL)setModelWidth:(CGFloat)arg0 forColumn:(unsigned char)arg1 ;
-(BOOL)verifyDims:(struct CGSize )arg0 forCellID:(struct ? )arg1 ;
-(CGFloat)getFitHeightForRow:(unsigned short)arg0 ;
-(CGFloat)getFitWidthForCol:(unsigned char)arg0 ;
-(CGFloat)getModelHeightForRow:(unsigned short)arg0 ;
-(CGFloat)getModelWidthForColumn:(unsigned char)arg0 ;
-(NSUInteger)numModelColumnWidths;
-(NSUInteger)numModelRowHeights;
-(NSUInteger)resetAllInvalidColsInRow:(unsigned short)arg0 ;
-(id)description;
-(id)getListOfInvalidColsInRow:(unsigned short)arg0 ;
-(id)init;
-(id)initWithNumRows:(unsigned short)arg0 andNumCols:(unsigned short)arg1 ;
-(id)validateChangeDescriptors:(id)arg0 tableModel:(id)arg1 ;
-(void)_increaseColCapacity:(unsigned int)arg0 ;
-(void)_increaseRowCapacity:(unsigned int)arg0 ;
-(void)dealloc;
-(void)logInternalState;
-(void)resetAllCol;
-(void)resetAllRow;
-(void)resetColWidthsStartingWith:(unsigned char)arg0 andEndingWith:(unsigned char)arg1 ;
-(void)resetFitHeightForCellID:(struct ? )arg0 ;
-(void)resetRowHeightForCell:(struct ? )arg0 ;
-(void)resetRowHeightsStartingWith:(unsigned short)arg0 andEndingWith:(unsigned short)arg1 ;
-(void)resetWidthsHeightsForRange:(struct ? )arg0 ;
-(void)setNumsRows:(unsigned short)arg0 andNumCols:(unsigned char)arg1 ;


@end


#endif