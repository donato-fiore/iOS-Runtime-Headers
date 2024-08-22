// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICRADIOGETTRACKSREQUEST_H
#define ICRADIOGETTRACKSREQUEST_H

@class NSDictionary, NSNumber, NSArray, NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICRadioContentReference.h"
#import "ICStoreRequestContext.h"

@interface ICRadioGetTracksRequest : NSObject <NSCopying>



@property (copy, nonatomic) NSDictionary *additionalRequestParameters; // ivar: _additionalRequestParameters
@property (nonatomic) BOOL allowsExplicitContent; // ivar: _allowsExplicitContent
@property (copy, nonatomic, getter=isDelegatedPrivateListeningEnabled) NSNumber *delegatedPrivateListeningEnabled; // ivar: _delegatedPrivateListeningEnabled
@property (copy, nonatomic) ICRadioContentReference *nowPlayingContentReference; // ivar: _nowPlayingContentReference
@property (nonatomic, getter=isPreservingCurrentlyPlayingItem) BOOL preservingCurrentlyPlayingItem; // ivar: _preservingCurrentlyPlayingItem
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // ivar: _privateListeningEnabled
@property (copy, nonatomic) NSArray *queueContentReferences; // ivar: _queueContentReferences
@property (nonatomic) NSInteger reasonType; // ivar: _reasonType
@property (copy, nonatomic) ICStoreRequestContext *requestContext; // ivar: _requestContext
@property (nonatomic) NSInteger requestedTrackCount; // ivar: _requestedTrackCount
@property (copy, nonatomic) ICRadioContentReference *seedContentReference; // ivar: _seedContentReference
@property (nonatomic) BOOL shouldResponseContainStationMetadata; // ivar: _shouldResponseContainStationMetadata
@property (copy, nonatomic) NSString *stationHash; // ivar: _stationHash
@property (nonatomic) NSInteger stationID; // ivar: _stationID
@property (copy, nonatomic) NSString *stationPlaybackAuthorizationToken; // ivar: _stationPlaybackAuthorizationToken
@property (copy, nonatomic) NSString *stationStringID; // ivar: _stationStringID
@property (copy, nonatomic) NSURL *stationURL; // ivar: _stationURL


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif