// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDPARAMETERENCODER_H
#define CNVCARDPARAMETERENCODER_H


#import <Foundation/Foundation.h>


@interface CNVCardParameterEncoder : NSObject



+(BOOL)mustEncloseStringInQuotes:(id)arg0 ;
+(id)encodeParameterValue:(id)arg0 ;
+(id)stringByEnclosingInQuotesIfNecessary:(id)arg0 ;
+(id)stringByReplacingEncodableCharactersInString:(id)arg0 ;
+(id)substitutions;


@end


#endif