// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACTREJECTCANDIDATE_H
#define ACTREJECTCANDIDATE_H

@class TIKeyboardCandidate;


#import "ACTUserAction.h"

@interface ACTRejectCandidate : ACTUserAction

@property (readonly, nonatomic) TIKeyboardCandidate *candidate; // ivar: _candidate
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)description;
-(id)initWithCandidate:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)applyWithTyper:(id)arg0 log:(id)arg1 ;


@end


#endif