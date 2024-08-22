// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLDEBUGGERCALLFRAME_H
#define RWIPROTOCOLDEBUGGERCALLFRAME_H

@class NSString, NSArray;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolDebuggerLocation.h"
#import "RWIProtocolRuntimeRemoteObject.h"

@interface RWIProtocolDebuggerCallFrame : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *callFrameId;
@property (copy, nonatomic) NSString *functionName;
@property (nonatomic) BOOL isTailDeleted;
@property (retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property (copy, nonatomic) NSArray *scopeChain;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *thisObject;


-(id)initWithCallFrameId:(id)arg0 functionName:(id)arg1 location:(id)arg2 scopeChain:(id)arg3 thisObject:(id)arg4 isTailDeleted:(BOOL)arg5 ;


@end


#endif