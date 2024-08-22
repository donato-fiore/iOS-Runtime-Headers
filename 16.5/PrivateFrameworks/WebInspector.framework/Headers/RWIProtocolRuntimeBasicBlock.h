// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLRUNTIMEBASICBLOCK_H
#define RWIPROTOCOLRUNTIMEBASICBLOCK_H



#import "RWIProtocolJSONObject.h"

@interface RWIProtocolRuntimeBasicBlock : RWIProtocolJSONObject

@property (nonatomic) int endOffset;
@property (nonatomic) int executionCount;
@property (nonatomic) BOOL hasExecuted;
@property (nonatomic) int startOffset;


-(id)initWithStartOffset:(int)arg0 endOffset:(int)arg1 hasExecuted:(BOOL)arg2 executionCount:(int)arg3 ;


@end


#endif