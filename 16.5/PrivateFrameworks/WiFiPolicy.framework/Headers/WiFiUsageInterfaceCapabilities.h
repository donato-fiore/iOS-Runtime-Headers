// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGEINTERFACECAPABILITIES_H
#define WIFIUSAGEINTERFACECAPABILITIES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WiFiUsageInterfaceCapabilities : NSObject

@property (nonatomic) *_Apple80211 a11Ref; // ivar: _a11Ref
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic) NSUInteger maxNumberOfSpatialStreams; // ivar: _maxNumberOfSpatialStreams
@property (nonatomic) NSUInteger maxPHYRate; // ivar: _maxPHYRate


-(NSUInteger)currentLinkPHYRate;
-(NSUInteger)maxInterfaceNumberOfSpatialStreams;
-(NSUInteger)maxInterfacePHYRate;
-(NSUInteger)maxLinkPHYRate;
-(id)description;
-(id)initWithInterfaceName:(id)arg0 ;
-(void)dealloc;


@end


#endif