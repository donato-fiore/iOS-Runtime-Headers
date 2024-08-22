// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TUIPOINTQUEUE_H
#define _TUIPOINTQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _TUIPointQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *nonSentinelPoints; // ivar: _nonSentinelPoints


-(NSUInteger)effectiveStartIndexBasedOnLength;
-(id)init;


@end


#endif