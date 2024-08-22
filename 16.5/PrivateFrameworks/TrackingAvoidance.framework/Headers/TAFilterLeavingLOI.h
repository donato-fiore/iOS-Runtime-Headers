// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAFILTERLEAVINGLOI_H
#define TAFILTERLEAVINGLOI_H


#import <Foundation/Foundation.h>


@interface TAFilterLeavingLOI : NSObject



+(BOOL)shouldDetectWithStore:(id)arg0 filterLeavingLOISettings:(id)arg1 ;
+(NSUInteger)getLeavingLOIDetectionTypeForLOIType:(NSUInteger)arg0 ;
+(NSUInteger)getLeavingLOINotificationImmediacyTypeForLOIType:(NSUInteger)arg0 leavingLOISettings:(id)arg1 ;
+(id)filterSuspiciousDeviceWithStore:(id)arg0 leavingLOISettings:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;


@end


#endif