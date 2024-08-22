// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKFORMAT_H
#define TSKFORMAT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSKBaseFormat.h"
#import "TSKBooleanFormat.h"
#import "TSKCurrencyFormat.h"
#import "TSKCustomFormatWrapper.h"
#import "TSKDateTimeFormat.h"
#import "TSKDurationFormat.h"
#import "TSKFractionFormat.h"
#import "TSKLegacyCustomFormat.h"
#import "TSKMultipleChoiceListFormat_DEPRECATED.h"
#import "TSKNumberFormat.h"
#import "TSKStepperSliderFormat_DEPRECATED.h"

@interface TSKFormat : NSObject <NSCopying>



@property (readonly, nonatomic) TSKBaseFormat *asBaseFormat;
@property (readonly, nonatomic) TSKBooleanFormat *asBooleanFormat;
@property (readonly, nonatomic) TSKCurrencyFormat *asCurrencyFormat;
@property (readonly, nonatomic) TSKCustomFormatWrapper *asCustomFormatWrapper;
@property (readonly, nonatomic) TSKDateTimeFormat *asDateTimeFormat;
@property (readonly, nonatomic) TSKDurationFormat *asDurationFormat;
@property (readonly, nonatomic) TSKFractionFormat *asFractionFormat;
@property (readonly, nonatomic) TSKLegacyCustomFormat *asLegacyCustomFormat;
@property (readonly, nonatomic) TSKMultipleChoiceListFormat_DEPRECATED *asMultipleChoiceListFormat;
@property (readonly, nonatomic) TSKNumberFormat *asNumberFormat;
@property (readonly, nonatomic) TSKStepperSliderFormat_DEPRECATED *asStepperSliderFormat;
@property (readonly, nonatomic) ? formatStruct;
@property (readonly, nonatomic) unsigned int formatType; // ivar: _formatType


+(id)booleanFormat;
+(id)checkboxFormat;
+(id)defaultFormatWithFormatType:(unsigned int)arg0 locale:(id)arg1 ;
+(id)formatFromArchive:(*void)arg0 ;
+(id)formatFromTSUFormatStruct:(struct ? )arg0 ;
+(id)ratingFormat;
+(id)textFormat;
+(id)uniqueFormatForFormat:(id)arg0 ;
+(unsigned int)validatedDecimalPlaces:(NSUInteger)arg0 ;
+(void)initialize;
-(BOOL)hasSimpleFormatType;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFormatType:(unsigned int)arg0 ;
-(id)stringFromBool:(BOOL)arg0 locale:(id)arg1 ;
-(id)stringFromDate:(id)arg0 locale:(id)arg1 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 ;
-(id)stringFromDurationTimeInterval:(CGFloat)arg0 locale:(id)arg1 ;
-(id)stringFromString:(id)arg0 locale:(id)arg1 ;
-(void)encodeToArchive:(*void)arg0 ;
-(void)encodeToArchive:(*void)arg0 archivingCustomFormats:(BOOL)arg1 ;


@end


#endif