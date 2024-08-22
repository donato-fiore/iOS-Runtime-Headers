// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPLARGEARRAYSEGMENTWRAPPER_H
#define TSPLARGEARRAYSEGMENTWRAPPER_H

@class NSMutableArray;


#import "TSPAbstractMutableLargeArraySegment.h"

@interface TSPLargeArraySegmentWrapper : NSMutableArray {
    TSPAbstractMutableLargeArraySegment *_backingStore;
}




-(NSUInteger)count;
-(id)initWithLargeArraySegment:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectsAtIndexes:(id)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;


@end


#endif