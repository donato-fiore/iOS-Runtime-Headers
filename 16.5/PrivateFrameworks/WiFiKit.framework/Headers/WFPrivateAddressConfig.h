// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPRIVATEADDRESSCONFIG_H
#define WFPRIVATEADDRESSCONFIG_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WFPrivateAddressConfig : NSObject <NSCopying>



@property (nonatomic, getter=isCarrierBundleBased) BOOL carrierBundleBased; // ivar: _carrierBundleBased
@property (nonatomic) NSUInteger disabledReason; // ivar: _disabledReason
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPrivateAddressConfigDictionary:(id)arg0 ssid:(id)arg1 ;


@end


#endif