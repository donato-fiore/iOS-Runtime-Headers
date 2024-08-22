// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCONCURRENTMUTABLECELLUIDSET_H
#define TSTCONCURRENTMUTABLECELLUIDSET_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface TSTConcurrentMutableCellUIDSet : NSObject {
    unordered_map<TSKUIDStruct, TSCEMutableUIDSet *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCEMutableUIDSet *>>> _rowUIDToColumnUIDSetMap;
    NSObject<OS_dispatch_semaphore> *_sem;
}




-(id)init;
-(id)reapAccumulatedCellRegionWithTable:(id)arg0 ;
-(void)addCellUID:(struct TSKUIDStructCoord *)arg0 ;


@end


#endif