// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIDENORMALIZEDEVENT_H
#define TRIDENORMALIZEDEVENT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "TRIMLRuntimeDimensions.h"
#import "TRISubject.h"
#import "TRISystemDimensions.h"
#import "TRITrialSystemTelemetry.h"

@interface TRIDenormalizedEvent : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasMlruntimeDimensions;
@property (readonly, nonatomic) BOOL hasSubject;
@property (readonly, nonatomic) BOOL hasSystemDimensions;
@property (readonly, nonatomic) BOOL hasTrialSystemTelemetry;
@property (retain, nonatomic) NSMutableArray *metrics; // ivar: _metrics
@property (retain, nonatomic) TRIMLRuntimeDimensions *mlruntimeDimensions; // ivar: _mlruntimeDimensions
@property (retain, nonatomic) TRISubject *subject; // ivar: _subject
@property (retain, nonatomic) TRISystemDimensions *systemDimensions; // ivar: _systemDimensions
@property (retain, nonatomic) NSMutableArray *treatments; // ivar: _treatments
@property (retain, nonatomic) TRITrialSystemTelemetry *trialSystemTelemetry; // ivar: _trialSystemTelemetry
@property (retain, nonatomic) NSMutableArray *userDimensions; // ivar: _userDimensions


+(Class)metricType;
+(Class)treatmentType;
+(Class)userDimensionType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)metricAtIndex:(NSUInteger)arg0 ;
-(id)treatmentAtIndex:(NSUInteger)arg0 ;
-(id)userDimensionAtIndex:(NSUInteger)arg0 ;
-(void)addMetric:(id)arg0 ;
-(void)addTreatment:(id)arg0 ;
-(void)addUserDimension:(id)arg0 ;
-(void)clearMetrics;
-(void)clearTreatments;
-(void)clearUserDimensions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif