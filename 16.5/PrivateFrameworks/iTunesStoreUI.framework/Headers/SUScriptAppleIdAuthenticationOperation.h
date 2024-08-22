// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTAPPLEIDAUTHENTICATIONOPERATION_H
#define SUSCRIPTAPPLEIDAUTHENTICATIONOPERATION_H

@class ISOperation, AKAppleIDAuthenticationInAppContext, UIViewController, NSString;



@interface SUScriptAppleIdAuthenticationOperation : ISOperation {
    AKAppleIDAuthenticationInAppContext *_authenticationContext;
    UIViewController *_viewController;
}


@property (retain, nonatomic) NSString *status; // ivar: _status


-(id)initWithUsername:(id)arg0 password:(id)arg1 viewController:(id)arg2 ;
-(void)run;
-(void)sendCompletionCallback:(id)arg0 ;


@end


#endif