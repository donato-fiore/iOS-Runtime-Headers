// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICRADIOGETTRACKSRESPONSE_H
#define ICRADIOGETTRACKSRESPONSE_H

@class NSDate, NSArray;


#import "ICRadioResponse.h"
#import "ICRadioStationMetadata.h"

@interface ICRadioGetTracksResponse : ICRadioResponse

@property (readonly, copy, nonatomic) NSDate *assetExpirationDate; // ivar: _assetExpirationDate
@property (readonly, nonatomic) ICRadioStationMetadata *stationMetadata;
@property (readonly, nonatomic) NSInteger tracklistActionType;
@property (readonly, copy, nonatomic) NSArray *tracks;


-(id)initWithResponseDictionary:(id)arg0 expirationDate:(id)arg1 ;


@end


#endif