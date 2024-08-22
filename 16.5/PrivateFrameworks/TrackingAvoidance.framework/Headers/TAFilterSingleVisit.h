// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAFILTERSINGLEVISIT_H
#define TAFILTERSINGLEVISIT_H


#import <Foundation/Foundation.h>


@interface TAFilterSingleVisit : NSObject



+(BOOL)shouldDetectWithStore:(id)arg0 filterSingleVisitSettings:(id)arg1 ;
+(NSUInteger)getSingleVisitDetectionTypeForLOIType:(NSUInteger)arg0 ;
+(NSUInteger)getSingleVisitNotificationImmediacyTypeForLOIType:(NSUInteger)arg0 singleVisitSettings:(id)arg1 ;
+(id)filterSuspiciousDeviceWithStore:(id)arg0 singleVisitSettings:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;


@end


#endif