// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRILIGHTHOUSEBITACORAHANDLER_H
#define TRILIGHTHOUSEBITACORAHANDLER_H


#import <Foundation/Foundation.h>


@interface TRILighthouseBitacoraHandler : NSObject



+(BOOL)donateTrialIdentifiers:(id)arg0 eventType:(unsigned char)arg1 succeeded:(BOOL)arg2 error:(*id)arg3 ;
+(BOOL)emitBMLTEventWithBMLTId:(id)arg0 deploymentId:(int)arg1 eventType:(unsigned char)arg2 succeeded:(BOOL)arg3 ;
+(BOOL)emitShadowEvaluationEventWithExperimentId:(id)arg0 deploymentId:(int)arg1 treatmentId:(id)arg2 eventType:(unsigned char)arg3 succeeded:(BOOL)arg4 ;


@end


#endif