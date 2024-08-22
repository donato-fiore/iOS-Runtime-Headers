// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLRUNTIMETYPESET_H
#define RWIPROTOCOLRUNTIMETYPESET_H



#import "RWIProtocolJSONObject.h"

@interface RWIProtocolRuntimeTypeSet : RWIProtocolJSONObject

@property (nonatomic) BOOL isBigInt;
@property (nonatomic) BOOL isBoolean;
@property (nonatomic) BOOL isFunction;
@property (nonatomic) BOOL isInteger;
@property (nonatomic) BOOL isNull;
@property (nonatomic) BOOL isNumber;
@property (nonatomic) BOOL isObject;
@property (nonatomic) BOOL isString;
@property (nonatomic) BOOL isSymbol;
@property (nonatomic) BOOL isUndefined;


-(id)initWithIsFunction:(BOOL)arg0 isUndefined:(BOOL)arg1 isNull:(BOOL)arg2 isBoolean:(BOOL)arg3 isInteger:(BOOL)arg4 isNumber:(BOOL)arg5 isString:(BOOL)arg6 isObject:(BOOL)arg7 isSymbol:(BOOL)arg8 isBigInt:(BOOL)arg9 ;


@end


#endif