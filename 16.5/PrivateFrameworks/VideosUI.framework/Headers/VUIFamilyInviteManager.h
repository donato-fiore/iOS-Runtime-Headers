// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIFAMILYINVITEMANAGER_H
#define VUIFAMILYINVITEMANAGER_H

@class AIDAAccountManager, NSString, ACAccountStore;
@protocol AIDAAccountManagerDelegate;

#import <Foundation/Foundation.h>


@interface VUIFamilyInviteManager : NSObject <AIDAAccountManagerDelegate>



@property (readonly, nonatomic) AIDAAccountManager *accountManager; // ivar: _accountManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ACAccountStore *store; // ivar: _store
@property (readonly) Class superclass;


-(id)accountsForAccountManager:(id)arg0 ;
-(id)init;
-(void)presentFamilySetupScreenIfEligible:(id)arg0 checkEligibility:(BOOL)arg1 ;
-(void)presentFamilySetupScreenWithBuyParams:(id)arg0 ;


@end


#endif