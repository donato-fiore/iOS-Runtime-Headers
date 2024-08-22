// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLERECOVERPRONSRESPONSE_H
#define FTMUTABLERECOVERPRONSRESPONSE_H

@class NSString, NSArray;


#import "FTRecoverPronsResponse.h"

@interface FTMutableRecoverPronsResponse : FTRecoverPronsResponse

@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSArray *recovery_return_codes;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *voc_tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif