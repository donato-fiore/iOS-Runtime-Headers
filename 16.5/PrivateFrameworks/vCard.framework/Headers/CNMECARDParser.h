// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMECARDPARSER_H
#define CNMECARDPARSER_H


#import <Foundation/Foundation.h>


@interface CNMECARDParser : NSObject



+(id)parseString:(id)arg0 resultFactory:(id)arg1 error:(*id)arg2 ;
+(void)enumerateTagsInString:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif