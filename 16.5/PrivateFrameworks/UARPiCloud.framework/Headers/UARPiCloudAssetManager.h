// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPICLOUDASSETMANAGER_H
#define UARPICLOUDASSETMANAGER_H

@class UARPAssetManager, NSMutableDictionary;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UARPiCloudAssetManager : NSObject {
    NSObject<OS_os_log> *_log;
    UARPAssetManager *_assetManager;
    id *_cloudManager;
    NSMutableDictionary *_accessories;
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property BOOL uarpDownloadOnCellularAllowed; // ivar: _uarpDownloadOnCellularAllowed


-(BOOL)checkLocalUARPCacheForAccessory:(id)arg0 versionAvailable:(*id)arg1 firmwarePath:(*id)arg2 releaseNotesPath:(*id)arg3 ;
-(BOOL)isFirmwareHash:(id)arg0 equalToHash:(id)arg1 ;
-(BOOL)moveFileAtURL:(id)arg0 toTempURL:(id)arg1 ;
-(NSInteger)downloadFirmwareForAccessory:(id)arg0 ;
-(NSInteger)downloadReleaseNotesForAccessory:(id)arg0 ;
-(NSInteger)getAttestationCertificates:(id)arg0 inContainer:(id)arg1 ;
-(NSInteger)getSupportedAccessories:(id)arg0 inContainer:(id)arg1 ;
-(NSInteger)handleReleaseNotesDownloadRequestForAccessory:(id)arg0 ;
-(NSInteger)handleRemoteFirmwareDownloadRequestForAccessory:(id)arg0 ;
-(NSInteger)handleRemoteQueryRequestForAccessories:(id)arg0 inContainer:(id)arg1 ;
-(NSInteger)performRemoteUpdateCheckForAccessories:(id)arg0 inContainer:(id)arg1 ;
-(id)initWithManager:(id)arg0 ;
-(id)moveToUARPCacheFromRemoteURL:(id)arg0 assetType:(NSInteger)arg1 forAcessory:(id)arg2 ;
-(id)pathToSuperBinaryInAccessoryVersionDirectory:(id)arg0 uarpVersion:(*id)arg1 ;
-(unsigned int)_getCoreCryptoDigestAlgorithmFromCHIPFirmwareAlgorithm:(NSUInteger)arg0 ;
-(void)handleFirmwareDownloadResponseFromLocation:(id)arg0 forAccessory:(id)arg1 ;
-(void)handleReleaseNotesDownloadResponseFromLocation:(id)arg0 forAccessory:(id)arg1 ;
-(void)handleRemoteDownloadRequestForAttestationCertificatesForSubjectKeyIdentifier:(id)arg0 inContainer:(id)arg1 ;
-(void)handleRemoteDownloadRequestForSupportedAccessoriesForProductGroup:(id)arg0 inContainer:(id)arg1 ;
-(void)handleRemoteDownloadResponseForAttestationCertificates:(id)arg0 forSubKeyIdentifier:(id)arg1 ;
-(void)handleRemoteDownloadResponseForSupportedAccessories:(id)arg0 forProductGroup:(id)arg1 ;
-(void)handleRemoteFetchCompletion:(id)arg0 error:(id)arg1 ;
-(void)remoteFetchCompletion:(id)arg0 error:(id)arg1 ;
-(void)remoteFetchCompletionForAttestationCertificates:(id)arg0 subjectKeyIdentifier:(id)arg1 error:(id)arg2 ;
-(void)remoteFetchCompletionForSupportedAccessories:(id)arg0 productGroup:(id)arg1 error:(id)arg2 ;
-(void)setFirmwareDownloadFailureStatusForAccessory:(id)arg0 ;
-(void)setFirmwareDownloadSuccessStatusForAccessory:(id)arg0 ;
-(void)setReleaseNotesDownloadFailureStatusForAccessory:(id)arg0 ;
-(void)setReleaseNotesDownloadSuccessStatusForAccessory:(id)arg0 ;


@end


#endif