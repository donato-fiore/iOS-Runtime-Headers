// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTMERGEREGIONMAPITERATOR_H
#define TSTMERGEREGIONMAPITERATOR_H


#import <Foundation/Foundation.h>

#import "TSTMergeRegionMap.h"

@interface TSTMergeRegionMapIterator : NSObject {
    TSTMergeRegionMap *mMergeRegionMap;
    __hash_map_iterator<std::__hash_iterator<std::__hash_node<std::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *>> mMergeRegionIterator;
}




-(BOOL)hasNextMergeRegion;
-(id)initWithMergeRegionMap:(id)arg0 ;
-(struct ? )nextMergeRegion;
-(void)dealloc;
-(void)reset;


@end


#endif