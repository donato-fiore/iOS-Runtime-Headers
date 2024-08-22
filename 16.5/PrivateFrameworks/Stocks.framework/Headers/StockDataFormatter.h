// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STOCKDATAFORMATTER_H
#define STOCKDATAFORMATTER_H

@class NSNumberFormatter, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface StockDataFormatter : NSObject

@property (retain, nonatomic) NSNumberFormatter *decimalFormatter; // ivar: _decimalFormatter
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decimalFormatterQueue; // ivar: _decimalFormatterQueue
@property (readonly, nonatomic, getter=doesLocaleUseASCII) BOOL localeUsesASCII; // ivar: _localeUsesASCII
@property (retain, nonatomic) NSNumberFormatter *percentFormatter; // ivar: _percentFormatter
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *percentFormatterQueue; // ivar: _percentFormatterQueue
@property (readonly, nonatomic) NSString *percentSymbol;


+(id)sharedDataFormatter;
-(id)_locked_formatNumber:(id)arg0 withPrecision:(NSUInteger)arg1 useGroupSeparator:(BOOL)arg2 ;
-(id)_locked_formatPercent:(id)arg0 withPrecision:(NSUInteger)arg1 ;
-(id)formattedChangeInPercentForStock:(id)arg0 ;
-(id)formattedChangeInPointsForStock:(id)arg0 withPrecision:(NSUInteger)arg1 ;
-(id)formattedChangeInPointsForStock:(id)arg0 withPrecision:(NSUInteger)arg1 droppingFractionDigitsIfLengthExceeds:(NSUInteger)arg2 ;
-(id)formattedNumber:(id)arg0 withPrecision:(NSUInteger)arg1 useGroupSeparator:(BOOL)arg2 ;
-(id)formattedNumber:(id)arg0 withPrecision:(NSUInteger)arg1 useGroupSeparator:(BOOL)arg2 droppingFractionDigitsIfLengthExceeds:(NSUInteger)arg3 ;
-(id)formattedPercent:(id)arg0 ;
-(id)formattedPercent:(id)arg0 withPrecision:(NSUInteger)arg1 ;
-(id)formattedPriceForStock:(id)arg0 withPrecision:(NSUInteger)arg1 ;
-(id)formattedPriceForStock:(id)arg0 withPrecision:(NSUInteger)arg1 droppingFractionDigitsIfLengthExceeds:(NSUInteger)arg2 ;
-(id)initPrivate;
-(void)_resetLocale:(id)arg0 ;
-(void)dealloc;


@end


#endif