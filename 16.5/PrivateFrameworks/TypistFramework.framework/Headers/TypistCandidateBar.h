// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTCANDIDATEBAR_H
#define TYPISTCANDIDATEBAR_H


#import <Foundation/Foundation.h>


@interface TypistCandidateBar : NSObject



+(id)candidatesAsStringArray:(id)arg0 ;
+(id)initWithTypistKeyboard:(id)arg0 ;
-(BOOL)hasCandidate:(id)arg0 ;
-(BOOL)hasCandidate:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(BOOL)hasCandidates;
-(BOOL)hasCandidates:(id)arg0 ;
-(BOOL)hasCandidates:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(BOOL)hasVisibleCandidate:(id)arg0 ;
-(CGFloat)getCandidateBarHeight;
-(CGFloat)getCandidateBarWidth;
-(NSInteger)getIndexOfCandidate:(id)arg0 ;
-(NSInteger)selectCandidate:(id)arg0 ;
-(NSInteger)selectCandidateAtIndex:(NSInteger)arg0 ;
-(id)candidateUIInformation:(id)arg0 ;
-(id)getAllCandidates;
-(id)getVisibleCandidates;
-(id)init;
-(struct CGPoint )centerOfCandidate:(id)arg0 ;


@end


#endif