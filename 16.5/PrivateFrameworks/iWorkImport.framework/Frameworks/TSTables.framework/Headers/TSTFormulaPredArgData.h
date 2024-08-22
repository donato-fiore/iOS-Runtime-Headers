// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTFORMULAPREDARGDATA_H
#define TSTFORMULAPREDARGDATA_H

@class NSDate, NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSTFormulaPredArgData : NSObject <NSCopying>

 {
    TSUDecimal _decimal;
    unsigned char _units;
}


@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) unsigned char dataType; // ivar: _dataType
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSInteger day; // ivar: _day
@property (readonly, nonatomic) CGFloat doubleValue;
@property (readonly) TSCENumberValue duration;
@property (readonly, nonatomic) unsigned char durationUnits;
@property (readonly, nonatomic) CGFloat durationValue;
@property (readonly, nonatomic) NSInteger month; // ivar: _month
@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) NSInteger year; // ivar: _year


+(id)getPredArgDataFromCell:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initFromArchive:(*void)arg0 ;
-(id)initWithBool:(BOOL)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(id)initWithDouble:(CGFloat)arg0 ;
-(id)initWithDuration:(CGFloat)arg0 units:(unsigned char)arg1 ;
-(id)initWithNumber:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif