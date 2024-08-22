// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCORE_H
#define SCORE_H


#import <Foundation/Foundation.h>


@interface Score : NSObject

@property (nonatomic) CGFloat connAttempts; // ivar: _connAttempts
@property (nonatomic) CGFloat connSuccesses; // ivar: _connSuccesses
@property (nonatomic) CGFloat epochs; // ivar: _epochs
@property (nonatomic) CGFloat handicapStay; // ivar: _handicapStay
@property (nonatomic) CGFloat lqmTransitionCount; // ivar: _lqmTransitionCount
@property (nonatomic) CGFloat overallStay; // ivar: _overallStay
@property (nonatomic) CGFloat upPct; // ivar: _upPct


-(id)description;


@end


#endif