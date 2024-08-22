// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKNUMBERFORMAT_H
#define TSKNUMBERFORMAT_H

@class NSNumber;
@protocol NSCopying;


#import "TSKFormat.h"

@interface TSKNumberFormat : TSKFormat <NSCopying>

 {
    NSNumber *_propertiesCacheKey;
}


@property (readonly, nonatomic) NSUInteger decimalPlaces; // ivar: _decimalPlaces
@property (readonly, nonatomic) unsigned char negativeStyle; // ivar: _negativeStyle
@property (readonly, nonatomic) BOOL showThousandsSeparator; // ivar: _showThousandsSeparator
@property (readonly, nonatomic) BOOL usePlusSign; // ivar: _usePlusSign


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asNumberFormat;
-(id)decimalFormatterForLocale:(id)arg0 ;
-(id)description;
-(id)initWithFormatType:(unsigned int)arg0 ;
-(id)initWithFormatType:(unsigned int)arg0 decimalPlaces:(NSUInteger)arg1 negativeStyle:(unsigned char)arg2 showSeparator:(BOOL)arg3 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 ;


@end


#endif