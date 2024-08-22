// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLETEXTTOSPEECHREQUESTCONTEXT_H
#define FTMUTABLETEXTTOSPEECHREQUESTCONTEXT_H

@class NSArray, NSString;


#import "FTTextToSpeechRequestContext.h"

@interface FTMutableTextToSpeechRequestContext : FTTextToSpeechRequestContext

@property (copy, nonatomic) NSArray *context_info;
@property (copy, nonatomic) NSString *dialog_identifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif