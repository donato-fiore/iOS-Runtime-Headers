// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRILATENCYMETRICTELEMETRYVALIDATOR_H
#define TRILATENCYMETRICTELEMETRYVALIDATOR_H

@class NSSet;
@protocol TRILatencyMetricTelemetryValidating;

#import <Foundation/Foundation.h>

#import "TRIRolloutDatabase.h"

@interface TRILatencyMetricTelemetryValidator : NSObject <TRILatencyMetricTelemetryValidating>



@property (readonly, nonatomic) NSSet *namespacesAllowedForLogging; // ivar: _namespacesAllowedForLogging
@property (readonly, nonatomic) TRIRolloutDatabase *rolloutDb; // ivar: _rolloutDb


-(BOOL)_isRecordContainingAllowedLoggingNamespace:(id)arg0 ;
-(id)createRolloutFieldForDeployment:(id)arg0 factorPackSetId:(id)arg1 record:(id)arg2 ;
-(id)initWithRolloutDatabase:(id)arg0 paths:(id)arg1 ;
-(id)validateAndReturnTelemetryForDeployment:(id)arg0 factorPackSetId:(id)arg1 ;


@end


#endif