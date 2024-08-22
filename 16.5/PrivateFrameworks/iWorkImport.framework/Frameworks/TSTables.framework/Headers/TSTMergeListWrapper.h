// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTMERGELISTWRAPPER_H
#define TSTMERGELISTWRAPPER_H


#import <Foundation/Foundation.h>


@interface TSTMergeListWrapper : NSObject {
    ? _mergeList;
}


@property (readonly) NSUInteger count;
@property (readonly) BOOL isEmpty;


-(id)initWithMergeList:(*void)arg0 ;
-(id)mergeListWrapperWithRangesPassingTest:(id)arg0 ;
-(id)regionForList;
-(void)addRange:(struct TSUCellRect )arg0 ;
-(void)enumerateRangesUsingBlock:(id)arg0 ;


@end


#endif