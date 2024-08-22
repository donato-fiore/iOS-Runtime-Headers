// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCONTENTCOMPOSINGITERATOR_H
#define TSTCONTENTCOMPOSINGITERATOR_H

@class NSString, NSMutableArray;
@protocol TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating;

#import <Foundation/Foundation.h>


@interface TSTContentComposingIterator : NSObject <TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>

 {
    vector<TSUCellCoord, std::allocator<TSUCellCoord>> _cursorCellIDs;
}


@property ? cursorCellIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *iterators; // ivar: _iterators
@property (nonatomic) TSUCellCoord minCursorCellID; // ivar: _minCursorCellID
@property (readonly) Class superclass;


-(struct TSUCellCoord )advanceToCellID:(struct TSUCellCoord )arg0 ;
-(void)addIterator:(id)arg0 ;
-(void)updateCellData:(id)arg0 ;
-(void)updateFormulaForCellData:(id)arg0 ;


@end


#endif