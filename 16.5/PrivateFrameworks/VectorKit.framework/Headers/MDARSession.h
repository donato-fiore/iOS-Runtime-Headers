// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDARSESSION_H
#define MDARSESSION_H


#import <Foundation/Foundation.h>


@interface MDARSession : NSObject



+(BOOL)isSupported;
+(id)newGeoTrackingSession;
+(id)newPositionalTrackingSession;
+(id)stringWithARGeoTrackingAccuracy:(NSInteger)arg0 ;
+(id)stringWithARGeoTrackingState:(NSInteger)arg0 ;
+(id)stringWithARGeoTrackingStateReason:(NSInteger)arg0 ;
+(id)stringWithARTrackingState:(NSInteger)arg0 ;
+(id)stringWithARTrackingStateReason:(NSInteger)arg0 ;


@end


#endif