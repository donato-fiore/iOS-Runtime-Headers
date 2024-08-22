// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSAUTOAUTHENTICATIONVIEWMODEL_H
#define VSAUTOAUTHENTICATIONVIEWMODEL_H

@class NSString;
@protocol VSAutoAuthenticationViewModelDelegate;


#import "VSCuratedViewModel.h"

@interface VSAutoAuthenticationViewModel : VSCuratedViewModel

@property (copy, nonatomic) NSString *accountName; // ivar: _accountName
@property (weak, nonatomic) NSObject<VSAutoAuthenticationViewModelDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *manualSignInButtonText; // ivar: _manualSignInButtonText
@property (copy, nonatomic) NSString *manualSignInTitle; // ivar: _manualSignInTitle
@property (copy, nonatomic) NSString *messageTitle; // ivar: _messageTitle


-(id)init;
-(void)configureWithRequest:(id)arg0 ;
-(void)didSelectManualSignInButton;


@end


#endif