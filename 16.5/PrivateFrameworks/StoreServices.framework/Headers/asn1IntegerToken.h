// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASN1INTEGERTOKEN_H
#define ASN1INTEGERTOKEN_H



#import "asn1Token.h"

@interface asn1IntegerToken : asn1Token

@property (readonly) NSUInteger value; // ivar: mValue


-(id)_initWithID:(NSUInteger)arg0 class:(unsigned char)arg1 length:(NSUInteger)arg2 content:(char *)arg3 opaque:(BOOL)arg4 ;
-(id)description;


@end


#endif