// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLPAGEUSERPREFERENCE_H
#define RWIPROTOCOLPAGEUSERPREFERENCE_H



#import "RWIProtocolJSONObject.h"

@interface RWIProtocolPageUserPreference : RWIProtocolJSONObject

@property (nonatomic) NSInteger name;
@property (nonatomic) NSInteger value;


-(id)initWithName:(NSInteger)arg0 value:(NSInteger)arg1 ;


@end


#endif