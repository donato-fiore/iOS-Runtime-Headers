// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIWORDSEARCHSHAPEBASED_H
#define TIWORDSEARCHSHAPEBASED_H

@class TIWordSearch;



@interface TIWordSearchShapeBased : TIWordSearch



-(BOOL)addTopCandidateForCode:(id)arg0 option:(NSUInteger)arg1 autoconvertedCandidates:(id)arg2 candidateRefsDictionary:(id)arg3 ;
-(BOOL)canHandleKeyHitTest;
-(BOOL)validateCode:(id)arg0 withOption:(NSUInteger)arg1 ;
-(id)autoconvertLongestValidPrefixes:(id)arg0 option:(NSUInteger)arg1 candidateResultSet:(id)arg2 autoconvertedCandidateArray:(*id)arg3 ;
-(void)updateMecabraState;


@end


#endif