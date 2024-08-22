// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIGHTWEIGHTTIMERENTRY_H
#define LIGHTWEIGHTTIMERENTRY_H


#import <Foundation/Foundation.h>


@interface LightweightTimerEntry : NSObject

@property (nonatomic) unsigned int seqNo; // ivar: _seqNo
@property (nonatomic) NSUInteger slotNum; // ivar: _slotNum
@property (retain, nonatomic) id *userParam; // ivar: _userParam


-(id)description;


@end


#endif