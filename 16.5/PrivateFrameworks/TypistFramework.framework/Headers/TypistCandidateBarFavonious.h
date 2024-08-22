// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTCANDIDATEBARFAVONIOUS_H
#define TYPISTCANDIDATEBARFAVONIOUS_H



#import "TypistCandidateBar.h"

@interface TypistCandidateBarFavonious : TypistCandidateBar



-(BOOL)hasVisibleCandidate:(id)arg0 ;
-(NSInteger)getIndexOfCandidate:(id)arg0 ;
-(NSInteger)selectCandidate:(id)arg0 ;
-(NSInteger)selectCandidateAtIndex:(NSInteger)arg0 ;
-(id)candidateUIInformation:(id)arg0 ;
-(id)getAllCandidates;
-(id)getVisibleCandidates;


@end


#endif