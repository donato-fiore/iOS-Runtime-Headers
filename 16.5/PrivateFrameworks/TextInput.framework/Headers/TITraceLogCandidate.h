// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITRACELOGCANDIDATE_H
#define TITRACELOGCANDIDATE_H

@class NSString, NSDictionary, NSNumber, NSArray;
@protocol TITraceLogCandidateExportRepresenting;

#import <Foundation/Foundation.h>


@interface TITraceLogCandidate : NSObject <TITraceLogCandidateExportRepresenting>



@property (nonatomic) CGFloat contextProbability; // ivar: _contextProbability
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSNumber *dynamicUsageCount; // ivar: _dynamicUsageCount
@property (retain, nonatomic) NSString *filterName; // ivar: _filterName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *lexiconLocaleIdentifier; // ivar: _lexiconLocaleIdentifier
@property (retain, nonatomic) NSNumber *penalty; // ivar: _penalty
@property (retain, nonatomic) NSString *priorContext; // ivar: _priorContext
@property (nonatomic) CGFloat probability; // ivar: _probability
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *token; // ivar: _token
@property (nonatomic) unsigned int wordId; // ivar: _wordId
@property (retain, nonatomic) NSArray *wordSources; // ivar: _wordSources


+(id)_wordSourcesFromCandidateString:(id)arg0 ;
+(id)candidateFromCandidateString:(id)arg0 ;
+(id)candidateFromFinalCandidateString:(id)arg0 ;
+(id)candidateFromRemovedCandidateString:(id)arg0 ;


@end


#endif