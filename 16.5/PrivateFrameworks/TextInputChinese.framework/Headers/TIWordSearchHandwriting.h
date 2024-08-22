// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIWORDSEARCHHANDWRITING_H
#define TIWORDSEARCHHANDWRITING_H

@class TIWordSearch;



@interface TIWordSearchHandwriting : TIWordSearch



-(id)generatePredictionsWithCandidateContext:(id)arg0 stringContext:(id)arg1 option:(NSUInteger)arg2 ;
-(id)mecabraCreationOptionsDictionary;
-(void)acceptCandidate:(*void)arg0 ;
-(void)updateMecabraState;


@end


#endif