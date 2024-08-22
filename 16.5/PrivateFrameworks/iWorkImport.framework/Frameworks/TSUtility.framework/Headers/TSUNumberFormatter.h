// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUNUMBERFORMATTER_H
#define TSUNUMBERFORMATTER_H

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "TSULocale.h"
#import "TSUFormattingSymbols.h"
#import "TSUDecimalFormatter.h"

@interface TSUNumberFormatter : NSObject {
    TSULocale *_locale;
    TSUFormattingSymbols *_formattingSymbols;
    NSArray *_decimalFormatters;
    NSDictionary *_currencyFormatters;
    NSArray *_percentageFormatters;
    NSArray *_scientificFormatters;
    TSUDecimalFormatter *_fractionFormatter;
    NSMutableDictionary *_currencyCodeToSymbolMap;
    NSMutableDictionary *_currencyCodeToHalfWidthSymbolMap;
    NSString *_additionalCurrencyCode;
    NSDictionary *_additionalCurrencyCodeFormatters;
}




+(id)defaultFormatStringForValueType:(int)arg0 ;
+(id)defaultFormatStringForValueType:(int)arg0 negativeStyle:(unsigned char)arg1 ;
+(id)formatString:(id)arg0 transformedForNegativeStyle:(unsigned char)arg1 ;
+(id)formatString:(id)arg0 transformedForNegativeStyle:(unsigned char)arg1 placeMinusSignAfterRLM:(BOOL)arg2 ;
+(id)formatterForLocale:(id)arg0 ;
+(id)numberFormatStringSpecialSymbols;
+(id)stringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand:(id)arg0 ;
+(int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg0 ;
+(int)positionOfMinusSignInNumberFormatSubpattern:(id)arg0 ;
+(int)positionOfSymbol:(id)arg0 inNumberFormatSubpattern:(id)arg1 ;
+(void)formatString:(id)arg0 replaceOccurencesOfUnescapedString:(id)arg1 withString:(id)arg2 ;
+(void)initialize;
+(void)lock;
+(void)unlock;
-(BOOL)currencyFromString:(id)arg0 additionalCurrencyCode:(id)arg1 value:(*CGFloat)arg2 formatString:(*id)arg3 currencyCode:(*id)arg4 ;
-(BOOL)decimalFromString:(id)arg0 value:(*CGFloat)arg1 formatString:(*id)arg2 ;
-(BOOL)fractionFromString:(id)arg0 value:(*CGFloat)arg1 ;
-(BOOL)p_valueFromString:(id)arg0 formatters:(id)arg1 value:(*CGFloat)arg2 formatString:(*id)arg3 ;
-(BOOL)percentageFromString:(id)arg0 value:(*CGFloat)arg1 formatString:(*id)arg2 ;
-(BOOL)scientificFromString:(id)arg0 value:(*CGFloat)arg1 formatString:(*id)arg2 ;
-(id)defaultFormatStringForValueType:(int)arg0 ;
-(id)defaultFormatStringForValueType:(int)arg0 negativeStyle:(unsigned char)arg1 ;
-(id)initWithLocale:(id)arg0 ;
-(id)p_createDictionaryOfCurrencyFormattersForCurrencies:(id)arg0 ;
-(id)p_currencyFormatters;
-(id)p_decimalFormatters;
-(id)p_findCurrencySymbolInString:(id)arg0 additionalCurrencyCode:(id)arg1 successfullString:(*id)arg2 currencyCode:(*id)arg3 ;
-(id)p_percentageFormatters;
-(id)p_scientificFormatters;
-(void)p_numberPreferencesChanged:(id)arg0 ;


@end


#endif