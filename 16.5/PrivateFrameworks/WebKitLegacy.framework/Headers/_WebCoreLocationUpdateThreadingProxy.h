// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WEBCORELOCATIONUPDATETHREADINGPROXY_H
#define _WEBCORELOCATIONUPDATETHREADINGPROXY_H

@protocol WebGeolocationCoreLocationUpdateListener;

#import <Foundation/Foundation.h>

#import "WebGeolocationProviderIOS.h"

@interface _WebCoreLocationUpdateThreadingProxy : NSObject <WebGeolocationCoreLocationUpdateListener>

 {
    WebGeolocationProviderIOS *_provider;
}




-(id)initWithProvider:(id)arg0 ;
-(void)errorOccurred:(id)arg0 ;
-(void)geolocationAuthorizationDenied;
-(void)geolocationAuthorizationGranted;
-(void)positionChanged:(*void)arg0 ;
-(void)resetGeolocation;


@end


#endif