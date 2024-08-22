// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTHREEWAYMERGINGOBJECTGRAPH_H
#define WFTHREEWAYMERGINGOBJECTGRAPH_H

@class NSMutableOrderedSet, NSMapTable;

#import <Foundation/Foundation.h>


@interface WFThreeWayMergingObjectGraph : NSObject {
    id *_vertexComparator;
    NSMutableOrderedSet *_orderedVertexes;
    NSMapTable *_directSuccessorsForVertexes;
    NSMapTable *_directPredecessorsForVertexes;
}




-(id)description;


@end


#endif