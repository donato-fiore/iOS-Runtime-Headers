// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSAPPSETTINGSFACADE_H
#define VSAPPSETTINGSFACADE_H

@class VSAccountChannels, VSAccountChannelsCenter, NSArray, NSOperation, VSIdentityProvider, UIViewController, NSOperationQueue, VSRestrictionsCenter, VSPersistentStorage;

#import <Foundation/Foundation.h>

#import "VSAppSettingsViewModel.h"

@interface VSAppSettingsFacade : NSObject

@property (retain, nonatomic) VSAccountChannels *accountChannels; // ivar: _accountChannels
@property (retain, nonatomic) VSAccountChannelsCenter *accountChannelsCenter; // ivar: _accountChannelsCenter
@property (copy, nonatomic) NSArray *appSections; // ivar: _appSections
@property (retain, nonatomic) Class channelAppsOperationClass; // ivar: _channelAppsOperationClass
@property (retain, nonatomic) NSOperation *currentPresentationOperation; // ivar: _currentPresentationOperation
@property (nonatomic) BOOL hasChannelApps; // ivar: _hasChannelApps
@property (retain, nonatomic) VSIdentityProvider *identityProvider; // ivar: _identityProvider
@property (copy, nonatomic) NSArray *knownAppBundles; // ivar: _knownAppBundles
@property (retain, nonatomic) VSAppSettingsViewModel *mvpdAppSettingsViewModel; // ivar: _mvpdAppSettingsViewModel
@property (retain, nonatomic) UIViewController *mvpdInstallPromptPresentingViewController; // ivar: _mvpdInstallPromptPresentingViewController
@property (nonatomic) BOOL needsPresentationOfMVPDAppInstallPromptIfAvailable; // ivar: _needsPresentationOfMVPDAppInstallPromptIfAvailable
@property (nonatomic) BOOL needsUpdateApps; // ivar: _needsUpdateApps
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (nonatomic) int registrationToken; // ivar: _registrationToken
@property (retain, nonatomic) VSRestrictionsCenter *restrictionsCenter; // ivar: _restrictionsCenter
@property (retain, nonatomic) VSPersistentStorage *storage; // ivar: _storage
@property (copy, nonatomic) NSArray *unredeemedVouchers; // ivar: _unredeemedVouchers


-(BOOL)shouldShowMVPDAppInstallPrompt;
-(BOOL)shouldShowMVPDAppInstallPromptFromViewController:(id)arg0 ;
-(id)init;
-(id)initWithStorage:(id)arg0 restrictionsCenter:(id)arg1 ;
-(id)initWithStorage:(id)arg0 restrictionsCenter:(id)arg1 accountChannelsCenter:(id)arg2 channelAppsOperationClass:(Class)arg3 ;
-(id)viewModelsForAppDescriptions:(id)arg0 bundleByBundleID:(id)arg1 vouchersForProvider:(id)arg2 restrictionsCenter:(id)arg3 privacyFacade:(id)arg4 ;
-(id)viewModelsForAvailableAppDescriptions:(id)arg0 subscribedAppDescriptions:(id)arg1 andNonChannelAppDescriptions:(id)arg2 ;
-(void)_updateApps;
-(void)dealloc;
-(void)presentMVPDAppInstallPromptFromViewController:(id)arg0 ;


@end


#endif