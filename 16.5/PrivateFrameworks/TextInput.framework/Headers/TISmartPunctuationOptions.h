// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISMARTPUNCTUATIONOPTIONS_H
#define TISMARTPUNCTUATIONOPTIONS_H

@class NSString, NSLocale;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TISmartPunctuationOptions : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *apostrophe; // ivar: _apostrophe
@property (copy, nonatomic) NSString *leftDoubleQuote; // ivar: _leftDoubleQuote
@property (copy, nonatomic) NSString *leftSingleQuote; // ivar: _leftSingleQuote
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (copy, nonatomic) NSString *rightDoubleQuote; // ivar: _rightDoubleQuote
@property (copy, nonatomic) NSString *rightSingleQuote; // ivar: _rightSingleQuote


+(BOOL)supportsSecureCoding;
+(id)smartPunctuationOptionsForLocale:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(void)_generateDataFromLocale;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif