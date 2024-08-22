// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPHCARRIERINFOCOMPANIONREPLICATION_H
#define NPHCARRIERINFOCOMPANIONREPLICATION_H

@class NSUserDefaults, NPSManager;

#import <Foundation/Foundation.h>


@interface NPHCarrierInfoCompanionReplication : NSObject

@property (readonly, nonatomic) NSUserDefaults *mobilePhoneUserDefaults; // ivar: _mobilePhoneUserDefaults
@property (readonly, nonatomic) NSUserDefaults *nanoPhoneUserDefaults; // ivar: _nanoPhoneUserDefaults
@property (readonly, nonatomic) NPSManager *npsManager; // ivar: _npsManager


+(id)sharedInstance;
-(id)init;
-(void)_updateIsVisualVoicemailServiceSubscribed;
-(void)_visualVMSubscriptionStateStatusChanged:(id)arg0 ;
-(void)dealloc;


@end


#endif