// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTCANDIDATEBARMECABRA_H
#define TYPISTCANDIDATEBARMECABRA_H



#import "TypistCandidateBar.h"

@interface TypistCandidateBarMecabra : TypistCandidateBar



-(BOOL)hasCandidate:(id)arg0 withAlternativeText:(id)arg1 ;
-(BOOL)hasCandidate:(id)arg0 withAlternativeText:(id)arg1 inRange:(struct _NSRange )arg2 ;
-(BOOL)hasVisibleCandidate:(id)arg0 ;
-(BOOL)isExtendedCandidateViewMode;
-(BOOL)scrollCandidateBar:(int)arg0 ;
-(BOOL)scrollCandidateBarByOneScreen;
-(BOOL)scrollToCandidateOnBar:(id)arg0 ;
-(BOOL)scrollToCandidateOnBarByPosition:(NSInteger)arg0 ;
-(NSInteger)getIndexOfCandidate:(id)arg0 ;
-(NSInteger)getIndexOfCandidate:(id)arg0 withAlternativeText:(id)arg1 ;
-(NSInteger)selectCandidate:(id)arg0 ;
-(NSInteger)selectCandidateAtIndex:(NSInteger)arg0 ;
-(id)candidateUIInformation:(id)arg0 ;
-(id)getAllCandidates;
-(id)getVisibleCandidates;
-(id)init;
-(void)hideExtendedCandidateView;
-(void)showExtendedCandidateView;
-(void)toggleExtendedCandidateViewMode;


@end


#endif