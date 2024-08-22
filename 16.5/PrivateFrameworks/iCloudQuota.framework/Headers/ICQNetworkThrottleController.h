// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQNETWORKTHROTTLECONTROLLER_H
#define ICQNETWORKTHROTTLECONTROLLER_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface ICQNetworkThrottleController : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults


-(BOOL)requestShouldThrottle:(id)arg0 ;
-(id)init;
-(void)request:(id)arg0 didCompleteWithError:(id)arg1 ;


@end


#endif