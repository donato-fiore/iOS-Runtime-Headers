// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLCREDENTIALSTORE_H
#define WLCREDENTIALSTORE_H


#import <Foundation/Foundation.h>

#import "WLAuthenticationCredentials.h"
#import "WLDeviceAuthentication.h"

@interface WLCredentialStore : NSObject {
    WLAuthenticationCredentials *_credentials;
    WLDeviceAuthentication *_authentication;
}




+(id)sharedInstance;
-(id)credentialsForAuthentication:(id)arg0 ;
-(id)currentAuthentication;
-(id)init;
-(void)setCredentials:(id)arg0 forAuthentication:(id)arg1 ;


@end


#endif