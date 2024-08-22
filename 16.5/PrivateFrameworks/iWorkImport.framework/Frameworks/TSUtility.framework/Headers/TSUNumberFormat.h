// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUNUMBERFORMAT_H
#define TSUNUMBERFORMAT_H

@class NSString, NSArray, NSIndexSet, NSUUID;
@protocol TSUNumberFormatting, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSUNumberFormat : NSObject <TSUNumberFormatting, NSCopying, NSMutableCopying>

 {
    int _valueType;
    unsigned short _decimalPlaces;
    unsigned char _negativeStyle;
    char _fractionAccuracy;
    BOOL _useAccountingStyle;
    BOOL _showThousandsSeparator;
    BOOL _formatStringRequiresSuppressionOfMinusSign;
    BOOL _useScientificFormattingAutomatically;
    BOOL _ignoreDecimalPlacesForZeroValue;
    BOOL _isCustom;
    BOOL _formatStringContainsTabCharacter;
    BOOL _formatContainsSpecialTokens;
    BOOL _formatContainsIntegerToken;
    BOOL _requiresFractionReplacement;
    BOOL _isTextFormat;
    BOOL _baseUseMinusSign;
    unsigned char _base;
    unsigned short _basePlaces;
    unsigned char _numberOfHashDecimalPlaceholders;
    unsigned char _totalNumberOfDecimalPlaceholdersInFormat;
    unsigned short _indexFromRightOfLastDigitPlaceholder;
    unsigned char _minimumIntegerWidth;
    unsigned char _decimalWidth;
    unsigned char _numberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char _numberOfNonSpaceDecimalPlaceholderDigits;
    CGFloat _scaleFactor;
    NSString *_formatString;
    NSString *_currencyCode;
    NSArray *_interstitialStrings;
    NSIndexSet *_interstitialStringInsertionIndexes;
    NSString *_formatName;
    NSUUID *_customFormatKey;
    NSString *_prefixString;
    NSString *_suffixString;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)numberFormatWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(unsigned char)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(char)arg7 ;
+(id)numberFormatWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(unsigned char)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(char)arg7 prefixString:(id)arg8 suffixString:(id)arg9 scaleFactor:(CGFloat)arg10 base:(unsigned char)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(BOOL)arg13 isCustom:(BOOL)arg14 formatName:(id)arg15 ;
-(BOOL)baseUseMinusSign;
-(BOOL)canFormatText;
-(BOOL)customFormatShouldAutoInsertPercentSymbol;
-(BOOL)hasValidDecimalPlaces;
-(BOOL)ignoreDecimalPlacesForZeroValue;
-(BOOL)isCustom;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(BOOL)isTextFormat;
-(BOOL)requiresParensToBeReplacedWithSpacesForDouble:(CGFloat)arg0 ;
-(BOOL)showThousandsSeparator;
-(BOOL)useScientificFormattingAutomatically;
-(BOOL)usesAccountingStyle;
-(BOOL)usesTabs;
-(BOOL)usesTextFormatForValue:(CGFloat)arg0 ;
-(CGFloat)scaleFactor;
-(char)fractionAccuracy;
-(id)baseStringFromDouble:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currencyCode;
-(id)customFormatKey;
-(id)customNumberFormatTokens;
-(id)formatName;
-(id)formatString;
-(id)init;
-(id)initCustomFormatWithFormatString:(id)arg0 currencyCode:(id)arg1 showThousandsSeparator:(BOOL)arg2 fractionAccuracy:(char)arg3 scaleFactor:(CGFloat)arg4 interstitialStrings:(id)arg5 interstitialStringInsertionIndexes:(id)arg6 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg7 minimumIntegerWidth:(unsigned char)arg8 decimalWidth:(unsigned char)arg9 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg10 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg11 isTextFormat:(BOOL)arg12 formatName:(id)arg13 ;
-(id)initWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(unsigned char)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(char)arg7 ;
-(id)initWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(unsigned char)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(char)arg7 base:(unsigned char)arg8 basePlaces:(unsigned short)arg9 baseUseMinusSign:(BOOL)arg10 ;
-(id)initWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(unsigned char)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(char)arg7 prefixString:(id)arg8 suffixString:(id)arg9 isCustom:(BOOL)arg10 ;
-(id)initWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(unsigned char)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(char)arg7 prefixString:(id)arg8 suffixString:(id)arg9 scaleFactor:(CGFloat)arg10 base:(unsigned char)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(BOOL)arg13 isCustom:(BOOL)arg14 interstitialStrings:(id)arg15 interstitialStringInsertionIndexes:(id)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(BOOL)arg22 formatName:(id)arg23 customFormatKey:(id)arg24 ;
-(id)initWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(unsigned char)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(char)arg7 suffixString:(id)arg8 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)numberFormatBySettingNegativeStyle:(unsigned char)arg0 ;
-(id)numberFormatBySettingUseAccountingStyle:(BOOL)arg0 ;
-(id)prefixString;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3 forceSuppressMinusSign:(BOOL)arg4 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 forceSuppressMinusSign:(BOOL)arg2 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 minimumDecimalPlaces:(unsigned short)arg2 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 minimumDecimalPlaces:(unsigned short)arg2 forceSuppressMinusSign:(BOOL)arg3 ;
-(id)stringFromString:(id)arg0 ;
-(id)suffixString;
-(int)valueType;
-(unsigned char)negativeStyle;
-(unsigned short)base;
-(unsigned short)basePlaces;
-(unsigned short)decimalPlaces;
-(void)dealloc;
-(void)setFormatName:(id)arg0 ;
-(void)setIgnoreDecimalPlacesForZeroValue:(BOOL)arg0 ;
-(void)setUseScientificFormattingAutomatically:(BOOL)arg0 ;


@end


#endif