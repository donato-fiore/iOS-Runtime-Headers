// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDEVELOPERTOKENFETCHREQUEST_H
#define ICDEVELOPERTOKENFETCHREQUEST_H

@class AMSMediaTokenService;
@protocol NSSecureCoding;


#import "ICRemoteRequestOperation.h"
#import "ICClientInfo.h"

@interface ICDeveloperTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding>

 {
    ICClientInfo *_clientInfo;
    NSUInteger _options;
    AMSMediaTokenService *_mediaTokenService;
}


@property (nonatomic) NSInteger clientType; // ivar: _clientType


+(BOOL)supportsSecureCoding;
+(id)_createMediaTokenServiceForClientInfo:(id)arg0 clientType:(NSInteger)arg1 requester:(id)arg2 ;
+(void)_invalidateCachedDeveloperTokenForClientInfo:(id)arg0 requester:(id)arg1 usingMediaTokenService:(id)arg2 ;
+(void)invalidateCachedDeveloperTokenForClientInfo:(id)arg0 clientType:(NSInteger)arg1 requester:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithClientInfo:(id)arg0 ;
-(id)initWithClientInfo:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_didFetchMediaToken:(id)arg0 withError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif