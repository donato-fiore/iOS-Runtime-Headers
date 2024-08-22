// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEGRAPHEMETOPHONEMEREQUEST_H
#define FTMUTABLEGRAPHEMETOPHONEMEREQUEST_H

@class NSString;


#import "FTGraphemeToPhonemeRequest.h"
#import "FTContextWithPronHints.h"

@interface FTMutableGraphemeToPhonemeRequest : FTGraphemeToPhonemeRequest

@property (copy, nonatomic) FTContextWithPronHints *context_with_pron_hints;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSString *session_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif