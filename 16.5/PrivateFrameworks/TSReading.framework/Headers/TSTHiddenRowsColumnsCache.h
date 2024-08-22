// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTHIDDENROWSCOLUMNSCACHE_H
#define TSTHIDDENROWSCOLUMNSCACHE_H

@class NSIndexSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSTHiddenDimensionCache.h"

@interface TSTHiddenRowsColumnsCache : NSObject <NSCopying>

 {
    TSTHiddenDimensionCache *mHiddenRows;
    TSTHiddenDimensionCache *mHiddenColumns;
}


@property (readonly, nonatomic) NSIndexSet *visibleColumnIndices;
@property (readonly, nonatomic) NSIndexSet *visibleRowIndices;


-(BOOL)anyColumnsHiddenInCellRange:(struct ? )arg0 ;
-(BOOL)anyRowsHiddenInCellRange:(struct ? )arg0 ;
-(BOOL)anyRowsUserHiddenInCellRange:(struct ? )arg0 ;
-(BOOL)isColumnHidden:(unsigned char)arg0 ;
-(BOOL)isRowHidden:(unsigned short)arg0 ;
-(BOOL)isRowUserHidden:(unsigned short)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(struct ? )visibleCellOffsetBy:(struct ? )arg0 fromCellID:(struct ? )arg1 ;
-(unsigned char)nextVisibleColumn:(unsigned char)arg0 ;
-(unsigned char)previousNthVisibleColumn:(unsigned short)arg0 fromColumnIndex:(unsigned char)arg1 ;
-(unsigned char)previousVisibleColumn:(unsigned char)arg0 ;
-(unsigned short)nextVisibleRow:(unsigned short)arg0 ;
-(unsigned short)numberColumnsHiddenInCellRange:(struct ? )arg0 ;
-(unsigned short)numberOfVisibleRowsFromHeader:(unsigned short)arg0 ;
-(unsigned short)numberRowsHiddenInCellRange:(struct ? )arg0 ;
-(unsigned short)numberRowsUserHiddenInCellRange:(struct ? )arg0 ;
-(unsigned short)previousNthVisibleRow:(unsigned short)arg0 fromRowIndex:(unsigned short)arg1 ;
-(unsigned short)previousVisibleRow:(unsigned short)arg0 ;
-(void)dealloc;
-(void)pop;
-(void)push;
-(void)pushAndValidate:(id)arg0 ;
-(void)swap;
-(void)validate:(id)arg0 ;
-(void)validateChangeDescriptors:(id)arg0 ;


@end


#endif