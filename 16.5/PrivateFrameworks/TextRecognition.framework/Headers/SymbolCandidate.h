// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYMBOLCANDIDATE_H
#define SYMBOLCANDIDATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SymbolCandidate : NSObject

@property (readonly, nonatomic) NSString *description;
@property (nonatomic) CGFloat logProbability; // ivar: _logProbability
@property (nonatomic) CGFloat probability; // ivar: _probability
@property (nonatomic) unsigned short symbol; // ivar: _symbol




@end


#endif