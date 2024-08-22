// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCAFETCHKEYVALUESRESPONSE_H
#define WCAFETCHKEYVALUESRESPONSE_H

@class NSDictionary;


#import "WCAFetchResponse.h"

@interface WCAFetchKeyValuesResponse : WCAFetchResponse

@property (copy, nonatomic) NSDictionary *keyValues; // ivar: _keyValues


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyValues:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif