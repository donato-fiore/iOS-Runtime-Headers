// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKFRACTIONFORMAT_H
#define TSKFRACTIONFORMAT_H

@protocol NSCopying;


#import "TSKFormat.h"

@interface TSKFractionFormat : TSKFormat <NSCopying>



@property (readonly, nonatomic) char fractionAccuracy; // ivar: _fractionAccuracy
@property (readonly, nonatomic) BOOL usePlusSign; // ivar: _usePlusSign


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asFractionFormat;
-(id)initWithFormatType:(unsigned int)arg0 ;
-(id)initWithFractionAccuracy:(char)arg0 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 ;


@end


#endif