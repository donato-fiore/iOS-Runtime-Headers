// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSCANREQUEST_H
#define WFSCANREQUEST_H

@class NSUUID, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface WFScanRequest : NSObject

@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property BOOL applyRssiThresholdFilter; // ivar: _applyRssiThresholdFilter
@property (nonatomic) BOOL channelListIncludesTwoFour; // ivar: _channelListIncludesTwoFour
@property (retain, nonatomic) NSArray *channels; // ivar: _channels
@property NSUInteger dwellTime; // ivar: _dwellTime
@property BOOL includeBSSList; // ivar: _includeBSSList
@property BOOL lowPriorityScan; // ivar: _lowPriorityScan
@property (nonatomic) NSInteger rssiThreshold; // ivar: _rssiThreshold
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid


+(id)scanRequestForChannels:(id)arg0 ;
+(id)scanRequestForSSID:(id)arg0 channels:(id)arg1 ;
-(BOOL)_channelListIncludesTwoFour:(id)arg0 ;
-(id)_channelListFromArrayOfChannels:(id)arg0 ;
-(id)_defaultScanDictionary;
-(id)cScanParameters;
-(id)description;
-(id)init;
-(id)initWithSSID:(id)arg0 channels:(id)arg1 ;
-(id)scanParameters;


@end


#endif