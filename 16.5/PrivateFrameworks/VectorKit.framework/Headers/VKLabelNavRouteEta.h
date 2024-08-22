// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKLABELNAVROUTEETA_H
#define VKLABELNAVROUTEETA_H

@class NSString;
@protocol VKLabelNavFeature;

#import <Foundation/Foundation.h>

#import "VKRouteEtaDescription.h"
#import "VKLabelNavRoadLabel.h"
#import "VKRouteInfo.h"

@interface VKLabelNavRouteEta : NSObject <VKLabelNavFeature>

 {
    NSUInteger _etaLabelArtworkKey;
    unsigned char _orientation;
    ? _coordinate;
}


@property (nonatomic) BOOL didStyleChange; // ivar: _didStyleChange
@property (readonly, nonatomic) VKRouteEtaDescription *displayEtaDescription; // ivar: _displayEtaDescription
@property (readonly, nonatomic) unsigned char etaComparisonToMain;
@property (readonly, nonatomic) NSInteger intraRoadPriorityForRoadLabel;
@property (readonly, nonatomic) NSInteger intraRoadPriorityForShieldLabel;
@property (readonly, nonatomic) BOOL isAwayFromRoute; // ivar: _isAwayFromRoute
@property (readonly, nonatomic) BOOL isEtaFeature;
@property (readonly, nonatomic) BOOL isGuidanceStepStart;
@property (readonly, nonatomic) BOOL isInGuidance;
@property (readonly, nonatomic) BOOL isOnRoute; // ivar: _isOnRoute
@property (nonatomic) BOOL isPicked; // ivar: _isPicked
@property (readonly, nonatomic) BOOL isRamp;
@property (nonatomic) BOOL isRepositioning; // ivar: _isRepositioning
@property (readonly, nonatomic) BOOL isStartOfRoadName;
@property (readonly, nonatomic) BOOL isTrafficCameraFeature;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) VKLabelNavRoadLabel *label; // ivar: _etaLabel
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) unsigned char orientation;
@property (retain, nonatomic) VKRouteInfo *routeInfo; // ivar: _routeInfo
@property (nonatomic) optional<gss::RouteLegWhen> routeLegWhen; // ivar: _routeLegWhen
@property (readonly, nonatomic) PolylineCoordinate routeOffset; // ivar: _routeOffset
@property (nonatomic) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) NSString *shieldDisplayGroup;
@property (nonatomic) optional<gss::When> when; // ivar: _when
@property (readonly, nonatomic) CGFloat worldUnitsPerMeterAtPoint; // ivar: _worldUnitsPerMeterAtPoint


+(?)baseAttributesForEtaLabel:(?)arg0 focused:(?)arg1 etaComparison:(?)arg2 transportType:(?)arg3 navLabelType:(?)arg4 when:(?)arg5 routeLegWhenadditionalAttributes;
+(id)artworkForEtaDescription:(id)arg0 navContext:(struct NavContext *)arg1 roadSignStyleGroup:(*void)arg2 mercatorPoint:(*void)arg3 orientation:(unsigned char)arg4 isSelected:(BOOL)arg5 artworkCache:(*void)arg6 ;
+(struct RoadSignStyleGroup )styleForNavContext:(struct NavContext *)arg0 selected:(BOOL)arg1 focused:(BOOL)arg2 etaComparison:(unsigned char)arg3 transportType:(unsigned char)arg4 navLabelType:(unsigned char)arg5 when:(struct optional<gss::When> )arg6 routeLegWhen:(struct optional<gss::RouteLegWhen> )arg7 additionalAttributes:(id)arg8 ;
+(unsigned char)toStyleEtaComparison:(unsigned char)arg0 ;
+(unsigned char)toStyleNavLabelType:(NSInteger)arg0 ;
-(BOOL)hasAnchor;
-(BOOL)hasLabel;
-(BOOL)hasLabelWithAnchor;
-(id)initWithRouteInfo:(id)arg0 routeCoord:(struct PolylineCoordinate )arg1 ;
-(struct Matrix<double, 3, 1> )worldPointForStaging;
-(struct _retain_ptr<VKLabelNavRoadLabel *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> )updateRoadSignWithNavContext:(struct NavContext *)arg0 artworkCache:(*void)arg1 ;
-(void)clearLabel;
-(void)createLabelWithNavContext:(struct NavContext *)arg0 orientation:(unsigned char)arg1 etaDescription:(id)arg2 selected:(BOOL)arg3 when:(struct optional<gss::When> )arg4 routeLegWhen:(struct optional<gss::RouteLegWhen> )arg5 artworkCache:(*void)arg6 ;
-(void)dealloc;
-(void)layoutWithNavContext:(struct NavContext *)arg0 ;
-(void)prepareStyleVarsWithContext:(struct NavContext *)arg0 ;
-(void)repositionAtRouteCoord:(struct PolylineCoordinate )arg0 ;
-(void)updateAnchorWithContext:(struct NavContext *)arg0 ;


@end


#endif