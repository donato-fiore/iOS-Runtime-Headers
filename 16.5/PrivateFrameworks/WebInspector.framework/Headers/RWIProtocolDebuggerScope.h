// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLDEBUGGERSCOPE_H
#define RWIPROTOCOLDEBUGGERSCOPE_H

@class NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolDebuggerLocation.h"
#import "RWIProtocolRuntimeRemoteObject.h"

@interface RWIProtocolDebuggerScope : RWIProtocolJSONObject

@property (nonatomic) BOOL empty;
@property (retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *object;
@property (nonatomic) NSInteger type;


-(id)initWithObject:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif