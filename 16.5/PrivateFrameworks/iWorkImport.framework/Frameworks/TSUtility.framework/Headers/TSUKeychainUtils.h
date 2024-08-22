// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUKEYCHAINUTILS_H
#define TSUKEYCHAINUTILS_H


#import <Foundation/Foundation.h>


@interface TSUKeychainUtils : NSObject



+(BOOL)isBiometryEnabledByDefault;
+(BOOL)lookupGenericItem:(id)arg0 account:(*id)arg1 passphrase:(*id)arg2 options:(NSUInteger)arg3 error:(*id)arg4 ;
+(BOOL)lookupGenericItem:(id)arg0 passphrase:(*id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)removeGenericItem:(id)arg0 error:(*id)arg1 ;
+(BOOL)setPassphrase:(id)arg0 forGenericItem:(id)arg1 service:(id)arg2 description:(id)arg3 label:(id)arg4 account:(id)arg5 options:(NSUInteger)arg6 error:(*id)arg7 ;
+(BOOL)shouldUseBiometry;
+(NSInteger)biometryAvailability;
+(id)defaultDocumentPasswordDescriptionString;
+(id)defaultServiceForGenericItem:(id)arg0 ;
+(id)errorForStatus:(int)arg0 ;
+(id)mutableQueryForGenericItem:(id)arg0 returnData:(BOOL)arg1 ;
+(id)mutableQueryForSearch:(BOOL)arg0 withParameters:(id)arg1 ;
+(id)queryForSearch:(BOOL)arg0 withParameters:(id)arg1 ;
+(void)authenticateAndUpgradeKeychainResult:(id)arg0 localizedReason:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
+(void)cancelBiometryIfNeeded;
+(void)cryptoProcessData:(id)arg0 encrypt:(BOOL)arg1 localizedReason:(id)arg2 completionQueue:(id)arg3 completionHandler:(id)arg4 ;
+(void)lookupGenericItem:(id)arg0 localizedReason:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
+(void)setBiometryEnabledByDefault:(BOOL)arg0 ;
+(void)setPassphrase:(id)arg0 forGenericItem:(id)arg1 service:(id)arg2 description:(id)arg3 label:(id)arg4 account:(id)arg5 options:(NSUInteger)arg6 completionQueue:(id)arg7 completionHandler:(id)arg8 ;


@end


#endif