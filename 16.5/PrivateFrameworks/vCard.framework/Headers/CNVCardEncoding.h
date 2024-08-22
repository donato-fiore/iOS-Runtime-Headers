// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDENCODING_H
#define CNVCARDENCODING_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNVCardEncoding : NSObject

@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSUInteger stringEncoding; // ivar: _stringEncoding


+(id)addPreferredEncoding:(id)arg0 toEncodings:(id)arg1 ;
+(id)asciiEncoding;
+(id)encodingWithName:(id)arg0 stringEncoding:(NSUInteger)arg1 ;
+(id)encodingsFromUserDefaults;
+(id)isoLatin1Encoding;
+(id)macRomanEncoding;
+(id)makeStandardEncodings;
+(id)preferredEncodingInUserDefaults;
+(id)standardEncodings;
+(id)utf8Encoding;
-(id)initWithName:(id)arg0 stringEncoding:(NSUInteger)arg1 ;


@end


#endif