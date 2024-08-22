// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVPSECUREKEYREQUEST_H
#define TVPSECUREKEYREQUEST_H

@class NSData, NSNumber, NSString, NSDate, NSDictionary;


#import "TVPResourceLoadingRequest.h"
#import "TVPPlaybackReportingEventCollection.h"

@interface TVPSecureKeyRequest : TVPResourceLoadingRequest

@property (copy, nonatomic) NSData *certificateData; // ivar: _certificateData
@property (copy, nonatomic) NSData *contentIdentifierData; // ivar: _contentIdentifierData
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // ivar: _eventCollection
@property (readonly, nonatomic) BOOL isRenewal;
@property (copy, nonatomic) NSData *keyRequestData; // ivar: _keyRequestData
@property (readonly, nonatomic) BOOL offlineKeyUsageAllowed;
@property (copy, nonatomic) NSNumber *rentalID; // ivar: _rentalID
@property (readonly, nonatomic) NSString *reportingID; // ivar: _reportingID
@property (retain, nonatomic) NSNumber *requestCompletionTime; // ivar: _requestCompletionTime
@property (copy, nonatomic) NSDate *requestEndDate; // ivar: _requestEndDate
@property (readonly, nonatomic) NSUInteger requestID; // ivar: _requestID
@property (copy, nonatomic) NSDictionary *requestOptions; // ivar: _requestOptions
@property (copy, nonatomic) NSDate *requestStartDate; // ivar: _requestStartDate
@property (nonatomic) BOOL retrievesOfflineKeys; // ivar: _retrievesOfflineKeys
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)loadKeyRequestDataWithError:(*id)arg0 ;
-(id)initWithAssetResourceLoadingRequest:(id)arg0 ;
-(id)offlineKeyDataForResponseData:(id)arg0 error:(*id)arg1 ;
-(void)finishLoadingWithResponseData:(id)arg0 renewalDate:(id)arg1 keyType:(NSInteger)arg2 ;
-(void)loadKeyRequestDataAsynchronouslyWithCompletion:(id)arg0 ;


@end


#endif