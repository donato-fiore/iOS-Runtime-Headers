// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIUSERMODELINDEXEDCOUNTER_H
#define TIUSERMODELINDEXEDCOUNTER_H

@class NSMutableArray, NSNumber, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TIUserModelIndexedCounter : NSObject {
    NSMutableArray *_persisted;
    NSMutableArray *_current;
}


@property (readonly, nonatomic) NSNumber *aggregatedCount;
@property (readonly, nonatomic) int bucketCount;
@property (readonly, nonatomic) NSArray *counts;
@property (readonly, nonatomic) NSArray *currentCounts;
@property (readonly, nonatomic) int dataType; // ivar: _dataType
@property (readonly, nonatomic) int days;
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)_createEmptyCountsArray;
-(id)aggregatedCountForNumberOfDays:(int)arg0 ;
-(id)countsForNumberOfDays:(int)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)doPersist:(id)arg0 forDate:(id)arg1 forContext:(id)arg2 ;
-(void)extendToNumberOfDays:(int)arg0 ;
-(void)prepareBuckets;
-(void)updateWithDouble:(CGFloat)arg0 forIndex:(int)arg1 ;
-(void)updateWithInteger:(int)arg0 forIndex:(int)arg1 ;
-(void)updateWithLoadedInteger:(int)arg0 andDouble:(CGFloat)arg1 forIndex:(int)arg2 andDaysPrior:(int)arg3 ;


@end


#endif