// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLRUNTIMECOLLECTIONENTRY_H
#define RWIPROTOCOLRUNTIMECOLLECTIONENTRY_H



#import "RWIProtocolJSONObject.h"
#import "RWIProtocolRuntimeRemoteObject.h"

@interface RWIProtocolRuntimeCollectionEntry : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *key;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *value;


-(id)initWithValue:(id)arg0 ;


@end


#endif