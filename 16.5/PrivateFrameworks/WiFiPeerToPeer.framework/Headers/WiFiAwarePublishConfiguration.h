// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIAWAREPUBLISHCONFIGURATION_H
#define WIFIAWAREPUBLISHCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "WiFiAwarePublishDatapathConfiguration.h"
#import "WiFiAwareFastDiscoveryConfiguration.h"
#import "WiFiAwareInternetSharingConfiguration.h"
#import "WiFiAwarePublishServiceSpecificInfo.h"

@interface WiFiAwarePublishConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger authenticationType; // ivar: _authenticationType
@property (copy, nonatomic) WiFiAwarePublishDatapathConfiguration *datapathConfiguration; // ivar: _datapathConfiguration
@property (copy, nonatomic) WiFiAwareFastDiscoveryConfiguration *fastDiscoveryConfiguration; // ivar: _fastDiscoveryConfiguration
@property (nonatomic) BOOL furtherServiceDiscoveryRequired; // ivar: _furtherServiceDiscoveryRequired
@property (copy, nonatomic) WiFiAwareInternetSharingConfiguration *internetSharingConfiguration; // ivar: _internetSharingConfiguration
@property (nonatomic) BOOL jumboServiceDiscoveryMessages; // ivar: _jumboServiceDiscoveryMessages
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (copy, nonatomic) WiFiAwarePublishServiceSpecificInfo *serviceSpecificInfo; // ivar: _serviceSpecificInfo


+(BOOL)supportsSecureCoding;
-(BOOL)datapathConfigurationEqual:(id)arg0 ;
-(BOOL)fastDiscoveryConfigurationEqual:(id)arg0 ;
-(BOOL)internetSharingConfigurationEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)serviceSpecificInfoEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif