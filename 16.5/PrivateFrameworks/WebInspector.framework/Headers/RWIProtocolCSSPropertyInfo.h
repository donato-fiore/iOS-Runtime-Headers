// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLCSSPROPERTYINFO_H
#define RWIPROTOCOLCSSPROPERTYINFO_H

@class NSArray, NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolCSSPropertyInfo : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *aliases;
@property (nonatomic) BOOL inherited;
@property (copy, nonatomic) NSArray *longhands;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *values;


-(id)initWithName:(id)arg0 ;


@end


#endif