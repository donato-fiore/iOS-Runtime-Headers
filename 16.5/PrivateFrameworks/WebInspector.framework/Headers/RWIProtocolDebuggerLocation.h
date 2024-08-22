// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLDEBUGGERLOCATION_H
#define RWIPROTOCOLDEBUGGERLOCATION_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolDebuggerLocation : RWIProtocolJSONObject

@property (nonatomic) int columnNumber;
@property (nonatomic) int lineNumber;
@property (copy, nonatomic) NSString *scriptId;


-(id)initWithScriptId:(id)arg0 lineNumber:(int)arg1 ;


@end


#endif