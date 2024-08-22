// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUNUMBERFORMAT_H
#define TSUNUMBERFORMAT_H

@class NSString, NSArray, NSIndexSet;
@protocol TSUNumberFormatting, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSUNumberFormat : NSObject <TSUNumberFormatting, NSCopying, NSMutableCopying>

 {
    int mValueType;
    NSString *mFormatString;
    unsigned short mDecimalPlaces;
    NSString *mCurrencyCode;
    BOOL mUseAccountingStyle;
    int mNegativeStyle;
    BOOL mShowThousandsSeparator;
    int mFractionAccuracy;
    BOOL mFormatStringRequiresSuppressionOfMinusSign;
    BOOL mUseScientificFormattingAutomatically;
    BOOL mIgnoreDecimalPlacesForZeroValue;
    NSString *mPrefixString;
    NSString *mSuffixString;
    unsigned char mBase;
    unsigned short mBasePlaces;
    BOOL mBaseUseMinusSign;
    BOOL mIsCustom;
    CGFloat mScaleFactor;
    BOOL mFormatStringContainsTabCharacter;
    BOOL mFormatContainsSpecialTokens;
    BOOL mFormatContainsIntegerToken;
    unsigned char mNumberOfHashDecimalPlaceholders;
    unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
    BOOL mRequiresFractionReplacement;
    NSArray *mInterstitialStrings;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    BOOL mIsTextFormat;
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    NSString *mFormatName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)numberFormatWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 ;
+(id)numberFormatWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 base:(unsigned char)arg8 basePlaces:(unsigned short)arg9 baseUseMinusSign:(BOOL)arg10 ;
+(id)numberFormatWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 prefixString:(id)arg8 suffixString:(id)arg9 scaleFactor:(CGFloat)arg10 base:(unsigned char)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(BOOL)arg13 isCustom:(BOOL)arg14 formatName:(id)arg15 ;
+(id)numberFormatWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 scaleFactor:(CGFloat)arg8 isCustom:(BOOL)arg9 formatName:(id)arg10 ;
+(id)numberFormatWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 suffixString:(id)arg8 ;
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
-(id)baseStringFromDouble:(CGFloat)arg0 ;
-(id)chartLabelStringFromDouble:(CGFloat)arg0 ;
-(id)chartLabelStringFromDouble:(CGFloat)arg0 forceSuppressMinusSign:(BOOL)arg1 ;
-(id)chartLabelStringNofixFromDouble:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currencyCode;
-(id)customNumberFormatTokens;
-(id)formatName;
-(id)formatString;
-(id)fractionStringFromDouble:(CGFloat)arg0 ;
-(id)init;
-(id)initCustomFormatWithFormatString:(id)arg0 currencyCode:(id)arg1 showThousandsSeparator:(BOOL)arg2 fractionAccuracy:(int)arg3 scaleFactor:(CGFloat)arg4 interstitialStrings:(id)arg5 interstitialStringInsertionIndexes:(id)arg6 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg7 minimumIntegerWidth:(unsigned char)arg8 decimalWidth:(unsigned char)arg9 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg10 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg11 isTextFormat:(BOOL)arg12 formatName:(id)arg13 ;
-(id)initWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 ;
-(id)initWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 base:(unsigned char)arg8 basePlaces:(unsigned short)arg9 baseUseMinusSign:(BOOL)arg10 ;
-(id)initWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 prefixString:(id)arg8 suffixString:(id)arg9 scaleFactor:(CGFloat)arg10 base:(unsigned char)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(BOOL)arg13 isCustom:(BOOL)arg14 interstitialStrings:(id)arg15 interstitialStringInsertionIndexes:(id)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(BOOL)arg22 formatName:(id)arg23 ;
-(id)initWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 suffixString:(id)arg8 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)numberFormatByIncrementingDecimalPlaces:(short)arg0 ;
-(id)numberFormatBySettingBase:(unsigned char)arg0 ;
-(id)numberFormatBySettingBasePlaces:(unsigned short)arg0 ;
-(id)numberFormatBySettingBaseRepresentNegativeWithMinus:(BOOL)arg0 ;
-(id)numberFormatBySettingCurrencyCode:(id)arg0 ;
-(id)numberFormatBySettingDecimalPlaces:(unsigned short)arg0 ;
-(id)numberFormatBySettingDecimalPlaces:(unsigned short)arg0 andNegativeStyle:(int)arg1 ;
-(id)numberFormatBySettingFractionAccuracy:(int)arg0 ;
-(id)numberFormatBySettingNegativeStyle:(int)arg0 ;
-(id)numberFormatBySettingPrefixString:(id)arg0 ;
-(id)numberFormatBySettingShowThousandsSeparator:(BOOL)arg0 ;
-(id)numberFormatBySettingSuffixString:(id)arg0 ;
-(id)numberFormatBySettingUseAccountingStyle:(BOOL)arg0 ;
-(id)numberFormatBySettingValueType:(int)arg0 ;
-(id)prefixString;
-(id)stringFromDouble:(CGFloat)arg0 ;
-(id)stringFromDouble:(CGFloat)arg0 decimalPlaces:(unsigned short)arg1 minimumDecimalPlaces:(unsigned short)arg2 ;
-(id)stringFromDouble:(CGFloat)arg0 decimalPlaces:(unsigned short)arg1 minimumDecimalPlaces:(unsigned short)arg2 forceSuppressMinusSign:(BOOL)arg3 ;
-(id)stringFromDouble:(CGFloat)arg0 forceSuppressMinusSign:(BOOL)arg1 ;
-(id)stringFromDouble:(CGFloat)arg0 minimumDecimalPlaces:(unsigned short)arg1 ;
-(id)stringFromDouble:(CGFloat)arg0 minimumDecimalPlaces:(unsigned short)arg1 forceSuppressMinusSign:(BOOL)arg2 ;
-(id)stringFromString:(id)arg0 ;
-(id)suffixString;
-(int)fractionAccuracy;
-(int)negativeStyle;
-(int)valueType;
-(unsigned short)base;
-(unsigned short)basePlaces;
-(unsigned short)decimalPlaces;
-(void)dealloc;
-(void)setFormatName:(id)arg0 ;
-(void)setIgnoreDecimalPlacesForZeroValue:(BOOL)arg0 ;
-(void)setUseScientificFormattingAutomatically:(BOOL)arg0 ;


@end


#endif