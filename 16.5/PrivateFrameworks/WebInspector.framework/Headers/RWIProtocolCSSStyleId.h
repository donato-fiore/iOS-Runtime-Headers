// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLCSSSTYLEID_H
#define RWIPROTOCOLCSSSTYLEID_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolCSSStyleId : RWIProtocolJSONObject

@property (nonatomic) int ordinal;
@property (copy, nonatomic) NSString *styleSheetId;


-(id)initWithStyleSheetId:(id)arg0 ordinal:(int)arg1 ;


@end


#endif