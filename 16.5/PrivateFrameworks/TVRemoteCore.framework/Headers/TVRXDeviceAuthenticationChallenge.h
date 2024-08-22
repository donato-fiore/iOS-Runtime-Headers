// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRXDEVICEAUTHENTICATIONCHALLENGE_H
#define TVRXDEVICEAUTHENTICATIONCHALLENGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TVRXDeviceAuthenticationChallenge : NSObject {
    id *_continuation;
    id *_cancellationHandler;
}


@property (nonatomic) NSInteger challengeAttributes; // ivar: _challengeAttributes
@property (readonly, nonatomic) NSInteger challengeType; // ivar: _challengeType
@property (readonly, copy, nonatomic) NSString *codeToEnterOnDevice; // ivar: _codeToEnterOnDevice
@property (nonatomic) NSInteger throttleSeconds; // ivar: _throttleSeconds


+(id)_challengeWithCodeToEnterLocally:(id)arg0 ;
+(id)_challengeWithCodeToEnterOnDevice:(id)arg0 cancellationHandler:(id)arg1 ;
-(id)_init;
-(void)cancel;
-(void)userEnteredCodeLocally:(id)arg0 ;


@end


#endif