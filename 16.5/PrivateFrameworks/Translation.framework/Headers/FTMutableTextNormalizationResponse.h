// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETEXTNORMALIZATIONRESPONSE_H
#define FTMUTABLETEXTNORMALIZATIONRESPONSE_H

@class NSString, NSArray;


#import "FTTextNormalizationResponse.h"

@interface FTMutableTextNormalizationResponse : FTTextNormalizationResponse

@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif