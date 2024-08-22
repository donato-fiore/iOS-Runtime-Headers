// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCSEDATA_H
#define TSTCSEDATA_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSTCSEData : NSObject {
    unordered_map<unsigned long, TSTCSENodeData, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, TSTCSENodeData>>> _nodesToData;
    NSMutableDictionary *_hashesToNodeSets;
    NSMutableArray *_retainedExpressions;
}




-(NSUInteger)expressionSize:(id)arg0 ;
-(id)description;
-(id)expressionsIdenticalToExpression:(id)arg0 ;
-(id)expressionsMatchingCSENodeData:(struct TSTCSENodeData )arg0 forNode:(id)arg1 ;
-(id)init;
-(void)recordExpression:(id)arg0 data:(struct TSTCSENodeData )arg1 ;


@end


#endif