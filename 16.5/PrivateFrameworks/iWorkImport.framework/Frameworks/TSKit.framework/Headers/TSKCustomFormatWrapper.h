// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKCUSTOMFORMATWRAPPER_H
#define TSKCUSTOMFORMATWRAPPER_H

@class TSUCustomFormat, NSUUID, TSUCustomFormatData;


#import "TSKFormat.h"
#import "TSKCurrencyFormat.h"

@interface TSKCustomFormatWrapper : TSKFormat {
    TSKFormat *_cachedDefaultNonCustomFormat;
    TSKCurrencyFormat *_cachedNoAccountingStyleFormat;
}


@property (readonly, nonatomic) TSUCustomFormat *customFormat; // ivar: _customFormat
@property (readonly, nonatomic) NSUUID *customFormatKey; // ivar: _customFormatKey
@property (readonly, nonatomic) TSUCustomFormatData *defaultCustomFormatData;
@property (readonly, nonatomic) BOOL isMarkedCorrupt; // ivar: _isMarkedCorrupt


+(id)populatedCustomFormatWrapperFromCFWrapper:(id)arg0 customFormat:(id)arg1 ;
+(id)unpopulatedCustomFormatWrapperWithFormatType:(unsigned int)arg0 customFormatKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)referencesSameCustomFormat:(id)arg0 ;
-(NSUInteger)hash;
-(id)asCustomFormatWrapper;
-(id)currencyCodeForValue:(CGFloat)arg0 ;
-(id)customFormatDataForValue:(CGFloat)arg0 ;
-(id)defaultNonCustomFormatForLocale:(id)arg0 ;
-(id)initWithFormatType:(unsigned int)arg0 customFormatKey:(id)arg1 customFormat:(id)arg2 ;
-(id)nonCustomCurrencyFormatSansAccountingStyleForLocale:(id)arg0 ;
-(id)p_defaultNumberFormatForLocale:(id)arg0 ;
-(id)p_nonCustomCurrencyFormatRemovingAccountingStyle:(BOOL)arg0 locale:(id)arg1 ;
-(id)stringFromDate:(id)arg0 locale:(id)arg1 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 ;
-(id)stringFromString:(id)arg0 locale:(id)arg1 ;


@end


#endif