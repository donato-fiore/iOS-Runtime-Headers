// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVPSECUREKEYDELIVERYCOORDINATOR_H
#define TVPSECUREKEYDELIVERYCOORDINATOR_H

@class NSData, NSString, NSMutableSet;
@protocol TVPSecureKeyLoaderDelegate, TVPSecureKeyDeliveryCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "TVPPlaybackReportingEventCollection.h"
#import "TVPSecureKeyLoader.h"

@interface TVPSecureKeyDeliveryCoordinator : NSObject <TVPSecureKeyLoaderDelegate>



@property (nonatomic) BOOL certFetchInProgress; // ivar: _certFetchInProgress
@property (retain, nonatomic) NSData *certificateData; // ivar: _certificateData
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVPSecureKeyDeliveryCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // ivar: _eventCollection
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *requestsAwaitingCertFetch; // ivar: _requestsAwaitingCertFetch
@property (retain, nonatomic) TVPSecureKeyLoader *secureKeyLoader; // ivar: _secureKeyLoader
@property (readonly) Class superclass;


+(BOOL)isSecureKeyDeliveryRequest:(id)arg0 ;
+(void)initialize;
-(id)init;
-(id)initWithSecureKeyLoader:(id)arg0 ;
-(void)_finishLoadingWithError:(id)arg0 forRequest:(id)arg1 ;
-(void)_loadSecureKeyRequest:(id)arg0 sendStartReportingEvent:(BOOL)arg1 ;
-(void)loadSecureKeyRequest:(id)arg0 ;
-(void)secureKeyLoader:(id)arg0 didFailWithError:(id)arg1 forRequest:(id)arg2 ;
-(void)secureKeyLoader:(id)arg0 didLoadCertificateData:(id)arg1 forRequest:(id)arg2 ;
-(void)secureKeyLoader:(id)arg0 didLoadContentIdentifierData:(id)arg1 forRequest:(id)arg2 ;
-(void)secureKeyLoader:(id)arg0 didLoadKeyResponseData:(id)arg1 renewalDate:(id)arg2 forRequest:(id)arg3 ;
-(void)secureKeyLoader:(id)arg0 didReceiveUpdatedRentalExpirationDate:(id)arg1 ;
-(void)secureKeyLoader:(id)arg0 didReceiveUpdatedRentalExpirationDate:(id)arg1 playbackStartDate:(id)arg2 ;
-(void)secureKeyLoader:(id)arg0 didReceiveUpdatedRentalPlaybackStartDate:(id)arg1 ;
-(void)sendStopRequest;


@end


#endif