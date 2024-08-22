// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLESERVICEDISCOVERYRESPONSE_H
#define FTMUTABLESERVICEDISCOVERYRESPONSE_H

@class NSString, NSArray;


#import "FTServiceDiscoveryResponse.h"

@interface FTMutableServiceDiscoveryResponse : FTServiceDiscoveryResponse

@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSArray *zk_node;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif