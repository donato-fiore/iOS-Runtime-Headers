// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQDAEMONPLANRECOMMENDATION_H
#define ICQDAEMONPLANRECOMMENDATION_H


#import <Foundation/Foundation.h>


@interface ICQDaemonPlanRecommendation : NSObject



+(BOOL)isBackupEnabledForAccount:(id)arg0 ;
+(BOOL)isICPLEnabledForAccount:(id)arg0 ;
+(BOOL)isPhotosLibraryIncludedInBackupForAccount:(id)arg0 ;
+(NSInteger)calculateExtraQuotaNeededToSyncWithBackupSize:(NSInteger)arg0 ;
+(id)accountForID:(id)arg0 ;
+(id)fullBackupSize;
+(void)calculateExtraQuotaNeededToSyncForAccountWithID:(id)arg0 isAccountFull:(BOOL)arg1 completion:(id)arg2 ;
+(void)getLocalPhotoLibrarySizeWithCompletion:(id)arg0 ;


@end


#endif