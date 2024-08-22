// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIMETRIC_H
#define TRIMETRIC_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface TRIMetric : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *categoricalValue; // ivar: _categoricalValue
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (readonly, nonatomic) BOOL hasCategoricalValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasIntegerValue;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasUserDefinedValue;
@property (nonatomic) NSInteger integerValue; // ivar: _integerValue
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSData *userDefinedValue; // ivar: _userDefinedValue


+(id)metricWithName:(id)arg0 ;
+(id)metricWithName:(id)arg0 categoricalValue:(id)arg1 ;
+(id)metricWithName:(id)arg0 doubleValue:(CGFloat)arg1 ;
+(id)metricWithName:(id)arg0 integerValue:(NSInteger)arg1 ;
+(id)metricWithName:(id)arg0 userDefinedValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif