// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCEGROUPBYNODEMAP_H
#define TSCEGROUPBYNODEMAP_H


#import <Foundation/Foundation.h>


@interface TSCEGroupByNodeMap : NSObject {
    unordered_map<TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_map<TSKUIDStruct, TSCEInternalCellRefSet>>>> _cellRefsByGroupNodeByGroupBy;
    unordered_map<TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>, std::hash<TSCEInternalCellReference>, std::equal_to<TSCEInternalCellReference>, std::allocator<std::pair<const TSCEInternalCellReference, std::unordered_set<TSKUIDStructCoord>>>> _groupNodesByCellRef;
}




-(BOOL)getCellRefs:(*void)arg0 referringToGroupNodes:(*void)arg1 inGroupBy:(struct TSKUIDStruct *)arg2 ;
-(id)description;
-(id)initFromArchive:(*void)arg0 ;
-(void)addCellRef:(struct TSCEInternalCellReference *)arg0 usingCategoryRef:(id)arg1 ;
-(void)encodeToArchive:(*void)arg0 ;
-(void)getCellRefs:(*void)arg0 forGroupRootInGroupBy:(struct TSKUIDStruct *)arg1 ;
-(void)getCellRefs:(*void)arg0 inGroupBy:(struct TSKUIDStruct *)arg1 ;
-(void)getCellRefs:(*void)arg0 inGroupBys:(*void)arg1 ;
-(void)removeAllCellRefsInOwner:(unsigned short)arg0 ;
-(void)removeCellRef:(struct TSCEInternalCellReference *)arg0 ;
-(void)removeCellRef:(struct TSCEInternalCellReference *)arg0 usingCategoryRef:(id)arg1 ;
-(void)upgradeGroupByUid:(struct TSKUIDStruct *)arg0 toUid:(struct TSKUIDStruct *)arg1 ;


@end


#endif