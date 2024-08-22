// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUIENABLEICLOUDSYNCHOOK_H
#define ICQUIENABLEICLOUDSYNCHOOK_H

@class ACAccount, NSSet, AAUISignInOperationManager, NSString, RUIObjectModel, RUIServerHookResponse;
@protocol AAUISignInOperationDelegate, RUIServerHook, RUIServerHookDelegate;

#import <Foundation/Foundation.h>


@interface ICQUIEnableiCloudSyncHook : NSObject <AAUISignInOperationDelegate, RUIServerHook>

 {
    ACAccount *_account;
    NSSet *_dataclasses;
    id *_hookCompletion;
    AAUISignInOperationManager *_dataclassOperationManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(id)continuationResponseBody;
-(id)initWithAccount:(id)arg0 dataclasses:(id)arg1 ;
-(void)_turnOniCloudSyncWithCompletion:(id)arg0 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;
-(void)signInOperationManager:(id)arg0 didSaveAccount:(id)arg1 error:(id)arg2 ;


@end


#endif