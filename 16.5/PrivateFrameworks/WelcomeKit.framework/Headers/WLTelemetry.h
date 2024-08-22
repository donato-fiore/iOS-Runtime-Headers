// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLTELEMETRY_H
#define WLTELEMETRY_H


#import <Foundation/Foundation.h>


@interface WLTelemetry : NSObject



+(id)sharedInstance;
-(id)_telemetryDictionaryForContentTypeDidComplete:(id)arg0 statistics:(id)arg1 metadata:(id)arg2 ;
-(id)_telemetryDictionaryForPreparatoryDataDidComplete:(id)arg0 contentType:(id)arg1 duration:(CGFloat)arg2 metadata:(id)arg3 ;
-(void)contentTypeDidComplete:(id)arg0 statistics:(id)arg1 metadata:(id)arg2 ;
-(void)daemonDidGetInterrupted;
-(void)deviceDidFailWithAuthenticationError;
-(void)deviceDidFailWithTimeout;
-(void)didLoadAndroidStore:(id)arg0 selected:(BOOL)arg1 canceled:(BOOL)arg2 inAttempts:(NSUInteger)arg3 ;
-(void)didLoadQRCode:(BOOL)arg0 ;
-(void)didLookupAppsWithMatchedApps:(NSUInteger)arg0 mismatchedApps:(NSUInteger)arg1 ;
-(void)didResolveTimeEstimate:(NSUInteger)arg0 forDownloadTask:(id)arg1 threshold:(NSUInteger)arg2 actualTime:(NSUInteger)arg3 ;
-(void)importDidFailSilentlyForContentType:(id)arg0 ;
-(void)migratorDidFinish:(id)arg0 ;
-(void)photoLibraryDidFailWithExtension:(id)arg0 ;
-(void)preparatoryDataDidComplete:(id)arg0 contentType:(id)arg1 duration:(CGFloat)arg2 metadata:(id)arg3 ;
-(void)send:(id)arg0 payload:(id)arg1 ;
-(void)userDidChooseToInstallMigratableApps:(BOOL)arg0 ;
-(void)wifiDidFail;


@end


#endif