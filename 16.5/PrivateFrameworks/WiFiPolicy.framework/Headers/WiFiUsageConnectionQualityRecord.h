// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGECONNECTIONQUALITYRECORD_H
#define WIFIUSAGECONNECTIONQUALITYRECORD_H

@class GEOWiFiConnectionQuality, NSString;

#import <Foundation/Foundation.h>


@interface WiFiUsageConnectionQualityRecord : NSObject

@property (retain, nonatomic) GEOWiFiConnectionQuality *geoMessage; // ivar: _geoMessage
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


-(id)initWithUsageSession:(id)arg0 andNeighborBssList:(id)arg1 andOtherBssList:(id)arg2 ;
-(void)queryNetworkPerformanceFeedAndSubmitToGeoWiFi;


@end


#endif