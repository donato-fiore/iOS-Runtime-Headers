// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSRECURRENCERULE_H
#define VCSRECURRENCERULE_H

@class NSArray, NSString, NSMutableArray;
@protocol VCSDictifiable;

#import <Foundation/Foundation.h>

#import "VCSDate.h"

@interface VCSRecurrenceRule : NSObject <VCSDictifiable>



@property (retain, nonatomic) NSArray *dayList; // ivar: _dayList
@property (retain, nonatomic) NSArray *dayNumberList; // ivar: _dayNumberList
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger duration; // ivar: _duration
@property (retain, nonatomic) VCSDate *endDate; // ivar: _endDate
@property (nonatomic) BOOL hasDuration; // ivar: _hasDuration
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger interval; // ivar: _interval
@property (retain, nonatomic) NSArray *monthList; // ivar: _monthList
@property (retain, nonatomic) NSMutableArray *occurrenceList; // ivar: _occurrenceList
@property (readonly, nonatomic) NSUInteger recurrenceType; // ivar: _recurrenceType
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *weekdayList; // ivar: _weekdayList


-(BOOL)decodeDaily:(*char *)arg0 ;
-(BOOL)decodeDigits:(*char *)arg0 withResult:(*NSInteger)arg1 ;
-(BOOL)decodeDuration:(*char *)arg0 ;
-(BOOL)decodeInterval:(*char *)arg0 ;
-(BOOL)decodeMonthlyByDay:(*char *)arg0 ;
-(BOOL)decodeMonthlyByPos:(*char *)arg0 ;
-(BOOL)decodeOccurrenceList:(*char *)arg0 ;
-(BOOL)decodeWeekdayList:(*char *)arg0 ;
-(BOOL)decodeWeekly:(*char *)arg0 ;
-(BOOL)decodeYearlyByDay:(*char *)arg0 ;
-(BOOL)decodeYearlyByMonth:(*char *)arg0 ;
-(id)_decodeNumberList:(*char *)arg0 min:(NSInteger)arg1 max:(NSInteger)arg2 ;
-(id)dictify;
-(id)initWithString:(char *)arg0 ;


@end


#endif