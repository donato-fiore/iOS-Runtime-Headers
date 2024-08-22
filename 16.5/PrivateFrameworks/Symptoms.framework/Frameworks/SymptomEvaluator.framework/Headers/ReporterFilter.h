// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REPORTERFILTER_H
#define REPORTERFILTER_H

@class NSData, NSString, NSMutableArray;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ReporterFilter : NSObject {
    NSObject<OS_dispatch_source> *_finalTimer;
    BOOL _timingInProgress;
    *sym_filter _transportFilters;
}


@property (readonly, nonatomic) NSData *filterMessage; // ivar: _filterMessage
@property (readonly, nonatomic) unsigned int reporterId; // ivar: _reporterId
@property (readonly, nonatomic) NSString *reporterName; // ivar: _reporterName
@property (nonatomic) BOOL symptomFilterChanged; // ivar: _symptomFilterChanged
@property (readonly, nonatomic) NSMutableArray *symptomFilters; // ivar: _symptomFilters


+(id)filterForId:(unsigned int)arg0 ;
+(id)filterForName:(id)arg0 id:(id)arg1 ;
+(void)enumerateReporterFiltersUsingBlock:(id)arg0 ;
+(void)initialize;
-(BOOL)hasFinalTimer;
-(id)description;
-(id)init;
-(int)configureSymptomFilter:(id)arg0 ;
-(void)pushFinalFilters;
-(void)pushTransportFilters;
-(void)setFinalTimer:(NSInteger)arg0 ;
-(void)setSymptomFilter:(id)arg0 ;
-(void)updateTransportFilters;


@end


#endif