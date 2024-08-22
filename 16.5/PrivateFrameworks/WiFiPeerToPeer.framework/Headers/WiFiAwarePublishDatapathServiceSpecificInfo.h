// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIAWAREPUBLISHDATAPATHSERVICESPECIFICINFO_H
#define WIFIAWAREPUBLISHDATAPATHSERVICESPECIFICINFO_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WiFiAwarePublishDatapathServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *hostname; // ivar: _hostname
@property (readonly, nonatomic) NSInteger protocolType; // ivar: _protocolType
@property (readonly, nonatomic) unsigned short servicePort; // ivar: _servicePort


+(BOOL)supportsSecureCoding;
-(BOOL)hostnameEquals:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtocolType:(NSInteger)arg0 servicePort:(unsigned short)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif