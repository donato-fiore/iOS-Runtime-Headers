// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCESUMACCUMULATOR_H
#define TSCESUMACCUMULATOR_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface TSCESumAccumulator : NSObject

@property (nonatomic) NSDate *dateAccumulator; // ivar: _dateAccumulator
@property (nonatomic) BOOL foundANumber; // ivar: _foundANumber
@property (nonatomic) BOOL mixedDurationsAndNumbers; // ivar: _mixedDurationsAndNumbers
@property (readonly, nonatomic) *TSCENumberValue numberAccumulator; // ivar: _numberAccumulator
@property (nonatomic) CGFloat secondsToAdd; // ivar: _secondsToAdd


-(id)init;
-(struct TSCEValue )resultForFunction:(id)arg0 ;
-(void)addValue:(struct TSCEValue *)arg0 function:(id)arg1 evaluationContext:(*void)arg2 ;


@end


#endif