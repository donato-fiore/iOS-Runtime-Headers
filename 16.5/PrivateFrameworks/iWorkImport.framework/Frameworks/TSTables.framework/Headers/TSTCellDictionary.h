// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCELLDICTIONARY_H
#define TSTCELLDICTIONARY_H

@class TSPObjectContext, TSPTemporaryObjectContextDelegate;

#import <Foundation/Foundation.h>


@interface TSTCellDictionary : NSObject {
    os_unfair_lock_s _lock;
    unordered_map<TSUCellCoord, TSTCell *, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTCell *>>> _cellsByCoord;
    TSCECellCoordSet _cellCoordsToStyleUpgradeForFormulatext;
    os_unfair_lock_s _hasRichTextLock;
}


@property (readonly, nonatomic) BOOL hasAnyRichTextCells; // ivar: _hasAnyRichTextCells
@property (readonly, nonatomic) TSPObjectContext *temporaryContext; // ivar: _temporaryContext
@property (readonly, nonatomic) TSPTemporaryObjectContextDelegate *temporaryObjectContextDelegate; // ivar: _temporaryObjectContextDelegate


-(BOOL)hasCellAtCellID:(struct TSUCellCoord )arg0 ;
-(BOOL)noLockShouldUpgradeStyleForFormulatextForCellCoord:(struct TSUCellCoord *)arg0 ;
-(BOOL)shouldUpgradeStyleForFormulatextForCellCoord:(struct TSUCellCoord *)arg0 ;
-(id)cellAtCellID:(struct TSUCellCoord )arg0 ;
-(id)cellMap;
-(id)concurrentCellMapForTable:(id)arg0 ;
-(id)init;
-(struct TSCECellCoordSet )allCellCoords;
-(void)applyBlockToAllCells:(id)arg0 ;
-(void)removeAllCells;
-(void)setCell:(id)arg0 atCellID:(struct TSUCellCoord )arg1 ;
-(void)upgradeStyleForFormulatextForCellCoord:(struct TSUCellCoord *)arg0 ;


@end


#endif