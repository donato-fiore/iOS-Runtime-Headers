// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQNETWORKREQUESTCONTROLLER_H
#define ICQNETWORKREQUESTCONTROLLER_H

@class NSURLSession, NSArray;

#import <Foundation/Foundation.h>


@interface ICQNetworkRequestController : NSObject {
    NSURLSession *_session;
    NSArray *_numberOfSecondsBetweenRetries;
}




-(id)init;
-(id)initWithSession:(id)arg0 ;
-(id)initWithSession:(id)arg0 numberOfSecondsBetweenRetries:(id)arg1 ;
-(void)executeRequest:(id)arg0 acceptedStatusCodes:(id)arg1 completion:(id)arg2 ;


@end


#endif