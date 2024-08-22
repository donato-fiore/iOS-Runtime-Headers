// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCELLLIST_H
#define TSTCELLLIST_H

@class TSPObject;
@protocol NSCopying;



@interface TSTCellList : TSPObject <NSCopying>

 {
    vector<TSTCell *, std::allocator<TSTCell *>> _cells;
    NSUInteger _trailingEmptyCellCount;
}




-(NSUInteger)count;
-(NSUInteger)trailingEmptyCellCount;
-(id)addCell:(id)arg0 ;
-(id)cellAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)lastCell;
-(id)shallowAddCell:(id)arg0 ;
-(void)addPrecopiedCell:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)replaceCell:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif