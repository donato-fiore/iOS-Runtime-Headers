// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSAPPSETTINGSVIEWMODEL_H
#define VSAPPSETTINGSVIEWMODEL_H

@class NSString, NSURL, UIImage, VSPrivacyFacade, VSRestrictionsCenter, VSOptional, LSApplicationWorkspace;
@protocol LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>

#import "VSAppDescription.h"

@interface VSAppSettingsViewModel : NSObject <LSApplicationWorkspaceObserverProtocol>



@property (nonatomic, getter=isAccessGranted) BOOL accessGranted;
@property (readonly, copy, nonatomic) NSString *adamID; // ivar: _adamID
@property (retain, nonatomic) VSAppDescription *appDescription; // ivar: _appDescription
@property (readonly, copy, nonatomic) NSURL *appStoreURL;
@property (nonatomic) *__CFBundle bundle; // ivar: _bundle
@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *buyParams; // ivar: _buyParams
@property (readonly, nonatomic) BOOL canChangePrivacyAccess;
@property (readonly, nonatomic) BOOL canRevokeVoucher;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDecided) BOOL decided; // ivar: _decided
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL forceDSIDlessInstall; // ivar: _forceDSIDlessInstall
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (nonatomic) NSInteger installState; // ivar: _installState
@property (retain, nonatomic) VSPrivacyFacade *privacyFacade; // ivar: _privacyFacade
@property (nonatomic) NSInteger privacyState; // ivar: _privacyState
@property (nonatomic) int registrationToken; // ivar: _registrationToken
@property (retain, nonatomic) VSRestrictionsCenter *restrictionsCenter; // ivar: _restrictionsCenter
@property (readonly, copy, nonatomic) NSString *storeName; // ivar: _storeName
@property (readonly) Class superclass;
@property (retain, nonatomic) VSOptional *voucher; // ivar: _voucher
@property (retain, nonatomic) LSApplicationWorkspace *workspace; // ivar: _workspace


+(id)keyPathsForValuesAffectingAccessGranted;
-(id)appAdamIDs;
-(id)appBundleIDs;
-(id)appIconURLForSize:(struct CGSize )arg0 ;
-(id)iconURLForSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithAppDescription:(id)arg0 privacyVoucher:(id)arg1 restrictionsCenter:(id)arg2 privacyFacade:(id)arg3 ;
-(id)initWithApplicationWorkspace:(id)arg0 ;
-(id)initWithBundle:(struct __CFBundle *)arg0 restrictionsCenter:(id)arg1 privacyFacade:(id)arg2 ;
-(id)initWithBundle:(struct __CFBundle *)arg0 restrictionsCenter:(id)arg1 privacyFacade:(id)arg2 adamID:(id)arg3 ;
-(id)name;
-(void)_denyPrivacyAccess;
-(void)_grantPrivacyAccess;
-(void)_updatePrivacyState;
-(void)applicationsDidFailToInstall:(id)arg0 ;
-(void)applicationsDidFailToUninstall:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)applicationsWillInstall:(id)arg0 ;
-(void)applicationsWillUninstall:(id)arg0 ;
-(void)dealloc;
-(void)installApp;
-(void)launchApp;
-(void)revokeVoucher;


@end


#endif