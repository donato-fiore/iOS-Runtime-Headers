// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIEXPERIMENTHISTORYRECORD_H
#define TRIEXPERIMENTHISTORYRECORD_H

@class NSDate, NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRIExperimentHistoryRecord : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int deploymentEnvironment; // ivar: _deploymentEnvironment
@property (readonly, nonatomic) int deploymentId; // ivar: _deploymentId
@property (readonly, nonatomic) NSDate *eventDate; // ivar: _eventDate
@property (readonly, nonatomic) unsigned char eventType; // ivar: _eventType
@property (readonly, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (readonly, nonatomic) NSArray *namespaces; // ivar: _namespaces
@property (readonly, nonatomic) NSString *treatmentId; // ivar: _treatmentId


+(BOOL)supportsSecureCoding;
+(id)recordWithEventDate:(id)arg0 eventType:(unsigned char)arg1 deploymentEnvironment:(int)arg2 experimentId:(id)arg3 deploymentId:(int)arg4 treatmentId:(id)arg5 namespaces:(id)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementDeploymentEnvironment:(int)arg0 ;
-(id)copyWithReplacementDeploymentId:(int)arg0 ;
-(id)copyWithReplacementEventDate:(id)arg0 ;
-(id)copyWithReplacementEventType:(unsigned char)arg0 ;
-(id)copyWithReplacementExperimentId:(id)arg0 ;
-(id)copyWithReplacementNamespaces:(id)arg0 ;
-(id)copyWithReplacementTreatmentId:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventDate:(id)arg0 eventType:(unsigned char)arg1 deploymentEnvironment:(int)arg2 experimentId:(id)arg3 deploymentId:(int)arg4 treatmentId:(id)arg5 namespaces:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif