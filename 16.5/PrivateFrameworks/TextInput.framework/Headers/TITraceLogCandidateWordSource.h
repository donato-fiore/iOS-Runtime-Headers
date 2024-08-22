// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITRACELOGCANDIDATEWORDSOURCE_H
#define TITRACELOGCANDIDATEWORDSOURCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TITraceLogCandidateWordSource : NSObject

@property (nonatomic) CGFloat linguisticContextProbability; // ivar: _linguisticContextProbability
@property (nonatomic) CGFloat probability; // ivar: _probability
@property (retain, nonatomic) NSString *wordSource; // ivar: _wordSource


-(id)initWithWordSource:(id)arg0 probability:(CGFloat)arg1 linguisticContextProbability:(CGFloat)arg2 ;


@end


#endif