// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIEXPERIMENTDEPLOYMENT_H
#define TRIEXPERIMENTDEPLOYMENT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRIExperimentDeployment : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int deploymentId; // ivar: _deploymentId
@property (readonly, nonatomic) NSString *experimentId; // ivar: _experimentId


+(BOOL)supportsSecureCoding;
+(id)deploymentWithExperimentId:(id)arg0 deploymentId:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDeployment:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementDeploymentId:(int)arg0 ;
-(id)copyWithReplacementExperimentId:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExperimentId:(id)arg0 deploymentId:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif