// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITRACELOGRECORD_H
#define TITRACELOGRECORD_H

@class NSArray, NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface TITraceLogRecord : NSObject

@property (retain, nonatomic) NSArray *context; // ivar: _context
@property (retain, nonatomic) NSArray *finalAutocorrectionCandidates; // ivar: _finalAutocorrectionCandidates
@property (retain, nonatomic) NSArray *finalCompletionCandidates; // ivar: _finalCompletionCandidates
@property (retain, nonatomic) NSArray *finalPredictionCandidates; // ivar: _finalPredictionCandidates
@property (retain, nonatomic) NSString *logText; // ivar: _logText
@property (readonly, retain, nonatomic) NSString *logTextWithHeader;
@property (nonatomic) NSUInteger logVersion; // ivar: _logVersion
@property (readonly, retain, nonatomic) NSArray *parsedSections; // ivar: _parsedSections
@property (nonatomic) NSUInteger parsingStatus; // ivar: _parsingStatus
@property (retain, nonatomic) NSArray *rawAutocorrectionCandidates; // ivar: _rawAutocorrectionCandidates
@property (retain, nonatomic) NSArray *rawCompletionCandidates; // ivar: _rawCompletionCandidates
@property (retain, nonatomic) NSArray *rawPredictionCandidates; // ivar: _rawPredictionCandidates
@property (retain, nonatomic) NSString *recordType; // ivar: _recordType
@property (retain, nonatomic) NSUUID *recordUUID; // ivar: _recordUUID
@property (retain, nonatomic) NSArray *removedAutocorrectionCandidates; // ivar: _removedAutocorrectionCandidates
@property (retain, nonatomic) NSArray *removedCompletionCandidates; // ivar: _removedCompletionCandidates
@property (retain, nonatomic) NSArray *removedPredictionCandidates; // ivar: _removedPredictionCandidates
@property (retain, nonatomic) NSString *typedString; // ivar: _typedString


-(NSUInteger)parse;
-(id)initWithRecordUUID:(id)arg0 context:(id)arg1 logText:(id)arg2 logVersion:(NSUInteger)arg3 ;
-(id)initWithRecordUUID:(id)arg0 logText:(id)arg1 logVersion:(NSUInteger)arg2 ;
-(void)addParsedSection:(id)arg0 ;


@end


#endif