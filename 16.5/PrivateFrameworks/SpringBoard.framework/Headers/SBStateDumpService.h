// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSTATEDUMPSERVICE_H
#define SBSTATEDUMPSERVICE_H

@class FBServiceClientAuthenticator, NSString;
@protocol SBSystemServiceServerStateDumpDelegate;

#import <Foundation/Foundation.h>


@interface SBStateDumpService : NSObject <SBSystemServiceServerStateDumpDelegate>

 {
    FBServiceClientAuthenticator *_clientAuthenticator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_authenticateClient:(id)arg0 ;
-(id)init;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 disableRemoteStateDumpWithCompletion:(id)arg2 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 enableRemoteStateDumpWithTimeout:(NSInteger)arg2 completion:(id)arg3 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 requestStateDump:(NSUInteger)arg2 withCompletion:(id)arg3 ;


@end


#endif