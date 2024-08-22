// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIAAPICLIENT_H
#define VUIMEDIAAPICLIENT_H

@class NSString, AMSURLSession, AMSMediaTokenService;

#import <Foundation/Foundation.h>


@interface VUIMediaAPIClient : NSObject

@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) AMSURLSession *session; // ivar: _session
@property (retain, nonatomic) AMSMediaTokenService *tokenService; // ivar: _tokenService


+(id)getPlatformClientIdentifier;
+(id)sharedInstance;
+(void)initializeWithAppleTVClientIdentifier;
-(id)_createSession;
-(id)_createTokenServiceWithSession:(id)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 ;
-(void)fetchContentForUrl:(id)arg0 completion:(id)arg1 ;


@end


#endif