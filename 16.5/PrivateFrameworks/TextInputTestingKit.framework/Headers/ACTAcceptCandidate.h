// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACTACCEPTCANDIDATE_H
#define ACTACCEPTCANDIDATE_H

@class TIKeyboardCandidate, NSString;


#import "ACTUserAction.h"

@interface ACTAcceptCandidate : ACTUserAction

@property (readonly, nonatomic) TIKeyboardCandidate *candidate; // ivar: _candidate
@property (readonly, nonatomic) NSString *intendedCandidate; // ivar: _intendedCandidate
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)description;
-(id)initWithCandidate:(id)arg0 timestamp:(CGFloat)arg1 ;
-(id)initWithCandidate:(id)arg0 timestamp:(CGFloat)arg1 intendedCandidate:(id)arg2 ;
-(void)applyWithTyper:(id)arg0 log:(id)arg1 ;


@end


#endif