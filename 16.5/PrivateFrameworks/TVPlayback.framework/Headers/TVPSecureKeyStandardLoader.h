// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVPSECUREKEYSTANDARDLOADER_H
#define TVPSECUREKEYSTANDARDLOADER_H

@class NSURL, NSMutableArray, NSDate, NSNumber, NSString;
@protocol TVPSecureKeyStandardLoaderConnectionHandling, TVPSecureKeyStandardLoaderRequestGenerating;


#import "TVPSecureKeyLoader.h"
#import "TVPSecureKeyRequest.h"

@interface TVPSecureKeyStandardLoader : TVPSecureKeyLoader

@property (retain, nonatomic) NSURL *certificateDataURL; // ivar: _certificateDataURL
@property (retain, nonatomic) NSObject<TVPSecureKeyStandardLoaderConnectionHandling> *connectionHandler; // ivar: _connectionHandler
@property (nonatomic) BOOL didSkipRentalCheckout; // ivar: _didSkipRentalCheckout
@property (nonatomic) BOOL holdKeyResponses; // ivar: _holdKeyResponses
@property (nonatomic) BOOL includeGUID; // ivar: _includeGUID
@property (retain, nonatomic) NSURL *keyDataURL; // ivar: _keyDataURL
@property (retain, nonatomic) NSMutableArray *pendingKeyResponses; // ivar: _pendingKeyResponses
@property (retain, nonatomic) NSDate *rentalExpirationDate; // ivar: _rentalExpirationDate
@property (retain, nonatomic) NSNumber *rentalID; // ivar: _rentalID
@property (retain, nonatomic) NSDate *rentalPlaybackStartDate; // ivar: _rentalPlaybackStartDate
@property (retain, nonatomic) NSObject<TVPSecureKeyStandardLoaderRequestGenerating> *requestGenerator; // ivar: _requestGenerator
@property (nonatomic) BOOL requiresExternalEntitlementCheck; // ivar: _requiresExternalEntitlementCheck
@property (retain, nonatomic) TVPSecureKeyRequest *savedRequestToUseForStopping; // ivar: _savedRequestToUseForStopping
@property (retain, nonatomic) NSString *serviceProviderID; // ivar: _serviceProviderID


+(void)initialize;
-(id)_assetIdentifierForKeyRequest:(id)arg0 ;
-(id)_bodyJSONDataForRequest:(id)arg0 forceStop:(BOOL)arg1 ;
-(id)init;
-(id)initWithCertificateDataURL:(id)arg0 keyDataURL:(id)arg1 ;
-(void)sendStopRequest;
-(void)startLoadingCertificateDataForRequest:(id)arg0 ;
-(void)startLoadingContentIdentifierDataForRequest:(id)arg0 ;
-(void)startLoadingKeyResponseDataForRequest:(id)arg0 ;


@end


#endif