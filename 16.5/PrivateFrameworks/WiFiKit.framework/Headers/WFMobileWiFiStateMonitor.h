// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFMOBILEWIFISTATEMONITOR_H
#define WFMOBILEWIFISTATEMONITOR_H


#import <Foundation/Foundation.h>

#import "WFLinkQuality.h"

@interface WFMobileWiFiStateMonitor : NSObject

@property (nonatomic) *__WiFiDeviceClient device; // ivar: _device
@property (copy) id *handler; // ivar: _handler
@property (retain, nonatomic) WFLinkQuality *linkQuality; // ivar: _linkQuality
@property (nonatomic) *__WiFiManagerClient manager; // ivar: _manager
@property (nonatomic) NSInteger state; // ivar: _state


-(id)initWithHandler:(id)arg0 ;
-(void)_updateState;
-(void)_updateWithDeviceAttachment:(struct __WiFiDeviceClient *)arg0 ;
-(void)dealloc;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif