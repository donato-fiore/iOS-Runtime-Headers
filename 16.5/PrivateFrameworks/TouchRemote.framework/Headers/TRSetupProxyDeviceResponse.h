// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRSETUPPROXYDEVICERESPONSE_H
#define TRSETUPPROXYDEVICERESPONSE_H

@class AKDevice;


#import "TRResponseMessage.h"

@interface TRSetupProxyDeviceResponse : TRResponseMessage

@property (retain, nonatomic) AKDevice *proxyDevice; // ivar: _proxyDevice


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif