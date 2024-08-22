// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUCUSTOMFORMATDATA_H
#define TSUCUSTOMFORMATDATA_H

@class NSString, NSIndexSet, NSArray;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSUCustomFormatData : NSObject <NSCopying, NSMutableCopying>



@property (nonatomic) unsigned short currencyCodeIndex; // ivar: _currencyCodeIndex
@property (nonatomic) unsigned char decimalWidth; // ivar: _decimalWidth
@property (nonatomic) BOOL formatContainsIntegerToken; // ivar: _formatContainsIntegerToken
@property (copy, nonatomic) NSString *formatString; // ivar: _formatString
@property (nonatomic) char fractionAccuracy; // ivar: _fractionAccuracy
@property (nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder; // ivar: _indexFromRightOfLastDigitPlaceholder
@property (copy, nonatomic) NSIndexSet *interstitialStringInsertionIndexes; // ivar: _interstitialStringInsertionIndexes
@property (copy, nonatomic) NSArray *interstitialStrings; // ivar: _interstitialStrings
@property (nonatomic) BOOL isComplexFormat; // ivar: _isComplexFormat
@property (nonatomic) BOOL isConditional; // ivar: _isConditional
@property (readonly, nonatomic) BOOL isCurrency;
@property (nonatomic) unsigned char minimumIntegerWidth; // ivar: _minimumIntegerWidth
@property (nonatomic) unsigned char numberOfHashDecimalPlaceholders; // ivar: _numberOfHashDecimalPlaceholders
@property (nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits; // ivar: _numberOfNonSpaceDecimalPlaceholderDigits
@property (nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits; // ivar: _numberOfNonSpaceIntegerPlaceholderDigits
@property (nonatomic) BOOL requiresFractionReplacement; // ivar: _requiresFractionReplacement
@property (nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor
@property (nonatomic) BOOL showThousandsSeparator; // ivar: _showThousandsSeparator
@property (nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat; // ivar: _totalNumberOfDecimalPlaceholdersInFormat
@property (nonatomic) BOOL useAccountingStyle; // ivar: _useAccountingStyle


+(id)customFormatData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCustomFormatData:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)p_copySelfTo:(id)arg0 ;


@end


#endif