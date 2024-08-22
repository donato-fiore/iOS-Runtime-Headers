// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCELLREGIONCOLMAJORITERATOR_H
#define TSTCELLREGIONCOLMAJORITERATOR_H

@class NSString;
@protocol TSTCellRegionIterating;

#import <Foundation/Foundation.h>


@interface TSTCellRegionColMajorIterator : NSObject <TSTCellRegionIterating>

 {
    set<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::allocator<TSUColumnRowRect>> mCellRangeSet;
    ? mCellID;
    ? mBoundingCellRange;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCellRegion:(id)arg0 ;
-(struct ? )getNext;
-(void)dealloc;
-(void)terminate;


@end


#endif