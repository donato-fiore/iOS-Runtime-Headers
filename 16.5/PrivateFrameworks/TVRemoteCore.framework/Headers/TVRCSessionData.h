// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRCSESSIONDATA_H
#define TVRCSESSIONDATA_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface TVRCSessionData : NSObject

@property (nonatomic) BOOL directionalControlsEnabled; // ivar: _directionalControlsEnabled
@property (copy, nonatomic) NSString *launchContextDesc; // ivar: _launchContextDesc
@property (nonatomic) BOOL requiredPairing; // ivar: _requiredPairing
@property (retain, nonatomic) NSDate *sessionStartTime; // ivar: _sessionStartTime
@property (nonatomic) BOOL usedRTI; // ivar: _usedRTI
@property (nonatomic) BOOL usedSiri; // ivar: _usedSiri




@end


#endif