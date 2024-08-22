// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKCURRENCYFORMAT_H
#define TSKCURRENCYFORMAT_H

@class NSNumber, NSString;
@protocol NSCopying;


#import "TSKFormat.h"

@interface TSKCurrencyFormat : TSKFormat <NSCopying>

 {
    NSNumber *_propertiesCacheKey;
}


@property (readonly, nonatomic) BOOL accountingStyle; // ivar: _accountingStyle
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSUInteger currencyCodeIndex; // ivar: _currencyCodeIndex
@property (readonly, nonatomic) NSUInteger decimalPlaces; // ivar: _decimalPlaces
@property (readonly, nonatomic) unsigned char negativeStyle; // ivar: _negativeStyle
@property (readonly, nonatomic) BOOL showThousandsSeparator; // ivar: _showThousandsSeparator
@property (readonly, nonatomic) BOOL usePlusSign; // ivar: _usePlusSign


+(id)defaultCurrencyFormatWithCurrencyCode:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asCurrencyFormat;
-(id)decimalFormatterForLocale:(id)arg0 ;
-(id)initWithDecimalPlaces:(NSUInteger)arg0 negativeStyle:(unsigned char)arg1 showSeparator:(BOOL)arg2 accountingStyle:(BOOL)arg3 currencyCode:(id)arg4 ;
-(id)initWithFormatType:(unsigned int)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 ;


@end


#endif