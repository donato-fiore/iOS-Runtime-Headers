// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBGEOLOCATIONPROVIDERINITIALIZATIONLISTENER_H
#define WEBGEOLOCATIONPROVIDERINITIALIZATIONLISTENER_H

@class NSString;
@protocol WebGeolocationProviderInitializationListener;

#import <Foundation/Foundation.h>


@interface WebGeolocationProviderInitializationListener : NSObject <WebGeolocationProviderInitializationListener>

 {
    RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>> m_geolocation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithGeolocation:(struct NakedRef<WebCore::Geolocation> )arg0 ;
-(void)initializationAllowedWebView:(id)arg0 ;
-(void)initializationDeniedWebView:(id)arg0 ;


@end


#endif