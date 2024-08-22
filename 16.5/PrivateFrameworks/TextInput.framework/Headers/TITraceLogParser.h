// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITRACELOGPARSER_H
#define TITRACELOGPARSER_H

@protocol TITraceLogParsingDelegate;

#import <Foundation/Foundation.h>


@interface TITraceLogParser : NSObject

@property (weak, nonatomic) NSObject<TITraceLogParsingDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger version; // ivar: _version


-(BOOL)parseIntegerHeader:(id)arg0 headerValue:(*NSInteger)arg1 withScanner:(id)arg2 ;
-(BOOL)parseStringHeader:(id)arg0 headerValue:(*id)arg1 withScanner:(id)arg2 ;
-(id)convertStringToContext:(id)arg0 ;
-(id)extractBeamSearchContextStringFromLogText:(id)arg0 ;
-(id)parseTraceLogContextFromLogText:(id)arg0 andPriorContext:(id)arg1 ;
-(id)parseTraceRecordWithScanner:(id)arg0 andPriorContext:(id)arg1 ;
-(void)parseTraceLogContent:(id)arg0 ;
-(void)parseTraceLogHeaderWithScanner:(id)arg0 ;
-(void)parseTraceRecordsWithScanner:(id)arg0 ;


@end


#endif