// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUPHONENUMBER_H
#define TUPHONENUMBER_H

@class NSString;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUPhoneNumber : NSObject <NSCoding, NSSecureCoding>



@property (readonly) NSString *countryCode;
@property (readonly) NSString *digits;
@property (readonly) NSString *formattedInternationalRepresentation;
@property (readonly) NSString *formattedRepresentation;
@property *__CFPhoneNumber phoneNumberRef; // ivar: _phoneNumberRef
@property (readonly) NSString *unformattedInternationalRepresentation;


+(BOOL)areDigits:(id)arg0 equalToDigits:(id)arg1 usingCountryCode:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)phoneNumberWithCFPhoneNumberRef:(struct __CFPhoneNumber *)arg0 ;
+(id)phoneNumberWithDigits:(id)arg0 countryCode:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCFPhoneNumberRef:(struct __CFPhoneNumber *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDigits:(id)arg0 countryCode:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif