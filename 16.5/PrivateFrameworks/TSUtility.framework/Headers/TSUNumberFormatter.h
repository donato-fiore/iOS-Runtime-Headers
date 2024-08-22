// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUNUMBERFORMATTER_H
#define TSUNUMBERFORMATTER_H

@class NSMutableDictionary, NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSUNumberFormatter : NSObject {
    *__CFLocale mLocale;
    *__CFArray mDecimalFormatters;
    *__CFArray mCurrencyFormatters;
    *__CFArray mPercentageFormatters;
    *__CFArray mScientificFormatters;
    *__CFNumberFormatter mFractionFormatter;
    NSMutableDictionary *mCurrencyCodeToSymbolMap;
    NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;
    NSString *mCurrencyString;
    NSString *mPercentageString;
    NSString *mScientificString;
    NSString *mDecimalString;
    NSString *mPercentSymbol;
    NSMutableArray *mTransformedDecimalStrings;
    NSMutableArray *mTransformedCurrencyStrings;
    NSMutableArray *mTransformedPercentageStrings;
    NSMutableArray *mTransformedScientificStrings;
    *__CFString mAdditionalCurrencyCode;
    *__CFArray mAdditionalCurrencyCodeFormatters;
}




+(id)availableCurrencyCodes;
+(id)currencySymbolForCurrencyCode:(id)arg0 ;
+(id)currentLocaleCurrencyCode;
+(id)currentLocaleDecimalSeparator;
+(id)currentLocaleListSeparator;
+(id)currentNonCachedLocaleCurrencyCode;
+(id)currentNonCachedLocaleDecimalSeparator;
+(id)defaultFormatStringForValueType:(int)arg0 ;
+(id)defaultFormatStringForValueType:(int)arg0 negativeStyle:(int)arg1 ;
+(id)displayNameForCurrencyCode:(id)arg0 ;
+(id)formatString:(id)arg0 transformedForNegativeStyle:(int)arg1 ;
+(id)formatterForLocale:(struct __CFLocale *)arg0 ;
+(id)localizedPercentSymbol;
+(id)numberFormatStringSpecialSymbols;
+(id)userVisibleCurrencyCodes;
+(int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg0 ;
+(int)positionOfMinusSignInNumberFormatSubpattern:(id)arg0 ;
+(int)positionOfSymbol:(id)arg0 inNumberFormatSubpattern:(id)arg1 ;
+(unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg0 ;
+(void)formatString:(id)arg0 replaceOccurencesOfUnescapedString:(id)arg1 withString:(id)arg2 ;
+(void)initialize;
-(?)currencyFromString:(?)arg0 additionalCurrencyCode:(?)arg1 value:(?)arg2 formatStringcurrencyCode;
-(?)decimalFromString:(?)arg0 valueformatString;
-(?)findCurrencySymbolInString:(?)arg0 additionalCurrencyCodesuccessTSUlString;
-(?)percentageFromString:(?)arg0 valueformatString;
-(?)scientificFromString:(?)arg0 valueformatString;
-(?)valueFromString:(?)arg0 formatters:(?)arg1 value:(?)arg2 formatStringcurrencyCode;
-(BOOL)fractionFromString:(struct __CFString *)arg0 value:(*CGFloat)arg1 ;
-(id)currencySymbolForCurrencyCode:(id)arg0 ;
-(id)currentLocaleCurrencyCode;
-(id)defaultFormatStringForValueType:(int)arg0 ;
-(id)defaultFormatStringForValueType:(int)arg0 negativeStyle:(int)arg1 ;
-(id)displayNameForCurrencyCode:(id)arg0 ;
-(id)halfWidthCurrencySymbolForCurrencyCode:(id)arg0 ;
-(id)initWithLocale:(struct __CFLocale *)arg0 ;
-(id)localizedPercentSymbol;
-(struct __CFArray *)p_currencyFormatters;
-(struct __CFArray *)p_decimalFormatters;
-(struct __CFArray *)p_percentageFormatters;
-(struct __CFArray *)p_scientificFormatters;
-(void)dealloc;
-(void)numberPreferencesChanged:(id)arg0 ;


@end


#endif