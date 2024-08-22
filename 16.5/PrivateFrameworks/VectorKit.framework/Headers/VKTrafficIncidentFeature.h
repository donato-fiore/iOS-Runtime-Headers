// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKTRAFFICINCIDENTFEATURE_H
#define VKTRAFFICINCIDENTFEATURE_H

@class GEORestrictionInfo, GEOPBTransitArtwork, NSString, GEOFormattedString, NSDate, NSArray;


#import "VKTrafficFeature.h"

@interface VKTrafficIncidentFeature : VKTrafficFeature {
    GEORestrictionInfo *_restrictionInfo;
}


@property (readonly, nonatomic) GEOPBTransitArtwork *artwork; // ivar: _artwork
@property (readonly, nonatomic) NSString *crossStreet; // ivar: _crossStreet
@property (readonly, nonatomic) optional<gss::IncidentDataSource> dataSource; // ivar: _dataSource
@property (readonly, nonatomic) GEOFormattedString *effectiveTimeRange;
@property (readonly, nonatomic) float elevationMinZoom; // ivar: _elevationMinZoom
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) GEOFormattedString *formattedSubtitle;
@property (readonly, nonatomic) GEOFormattedString *formattedTitle;
@property (readonly, nonatomic) NSString *info; // ivar: _info
@property (readonly, nonatomic) BOOL isNotForDisplay; // ivar: _isNotForDisplay
@property (nonatomic) BOOL isOnSelectedRoute; // ivar: _isOnSelectedRoute
@property (readonly, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (readonly, nonatomic) NSArray *restrictionDetails;
@property (nonatomic) NSInteger routeRelevance; // ivar: _routeRelevance
@property (readonly, nonatomic) NSInteger significance; // ivar: _significance
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSString *street; // ivar: _street
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSString *uniqueString; // ivar: _uniqueString


+(NSInteger)incidentTypeForGeoRouteIncident:(id)arg0 ;
+(id)stringForIncidentSignificance:(NSInteger)arg0 ;
+(id)stringForIncidentType:(NSInteger)arg0 ;
+(id)stringForRouteRelevance:(NSInteger)arg0 ;
-(BOOL)hasSameIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIncidentData:(*void)arg0 ;
-(id)initWithRouteIncident:(id)arg0 routeOffsetInMeters:(unsigned int)arg1 routeRelevance:(NSInteger)arg2 onRoute:(id)arg3 ;
-(void)populateDebugNode:(*void)arg0 ;


@end


#endif