// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLDEBUGGERPROBESAMPLE_H
#define RWIPROTOCOLDEBUGGERPROBESAMPLE_H



#import "RWIProtocolJSONObject.h"
#import "RWIProtocolRuntimeRemoteObject.h"

@interface RWIProtocolDebuggerProbeSample : RWIProtocolJSONObject

@property (nonatomic) int batchId;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *payload;
@property (nonatomic) int probeId;
@property (nonatomic) int sampleId;
@property (nonatomic) CGFloat timestamp;


-(id)initWithProbeId:(int)arg0 sampleId:(int)arg1 batchId:(int)arg2 timestamp:(CGFloat)arg3 payload:(id)arg4 ;


@end


#endif