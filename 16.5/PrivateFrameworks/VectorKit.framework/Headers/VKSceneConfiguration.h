// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKSCENECONFIGURATION_H
#define VKSCENECONFIGURATION_H


#import <Foundation/Foundation.h>


@interface VKSceneConfiguration : NSObject {
    ? _sceneClientStyleState;
    ? _styleManager;
    vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> _pointsOfInterest;
    unsigned char _navState;
    unsigned char _distanceToCurrentManeuver;
    CGFloat _distanceToDestination;
    int _currentManeuverType;
    unsigned char _currentStepLength;
    unsigned char _nextStepLength;
    unsigned char _currentIncidentType;
    unsigned char _currentManeuverComplexity;
    NSUInteger _currentGroupedManeuverCount;
    unsigned char _distanceToCurrentTrafficSection;
    unsigned char _currentTrafficState;
    unsigned int _lineType;
    int _rampType;
    int _nextManeuverRampType;
    unsigned char _transportType;
    unsigned char _searchAlongTheRoute;
    unsigned char _vehicleSpeed;
    unsigned char _roadSpeed;
    NSUInteger _roadSpeedZeroes;
    unsigned char _cameraMode;
    unsigned char _navigationDestination;
    unsigned int _roadComplexity;
    unsigned int _nextRoadComplexity;
    unsigned char _currentTransitManeuver;
    unsigned char _routeSinuosity;
    unsigned int _laneCount;
    DistancesRange _distanceRanges;
    SinuosityLevels _sinuosityLevels;
    unordered_map<gss::StyleAttribute, GEOPolylineCoordinateRange, std::hash<gss::StyleAttribute>, std::equal_to<gss::StyleAttribute>, std::allocator<std::pair<const gss::StyleAttribute, GEOPolylineCoordinateRange>>> _styleAttributeCoordinateRanges;
    shared_ptr<md::TaskContext> _taskContext;
}




-(*void)styleAttributeCoordinateRanges;
-(?)sceneClientStyleState;
-(?)setStyleManager;
-(NSUInteger)navCameraMode;
-(NSUInteger)navigationDestination;
-(id)initWithTaskContext:(*void)arg0 ;
-(struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> )styleManager;
-(unsigned char)navCameraModeStyleAttribute;
-(unsigned char)navigationState;
-(void)_updateStyleManager;
-(void)applyStyleAttributeKeyValue:(unsigned int)arg0 withValue:(unsigned int)arg1 withCoordinateRange:(struct GEOPolylineCoordinateRange )arg2 ;
-(void)removeStyleAttributeKey:(unsigned int)arg0 ;
-(void)resetState;
-(void)setCurrentGroupedManeuverCount:(NSUInteger)arg0 ;
-(void)setCurrentIncidentType:(NSUInteger)arg0 ;
-(void)setCurrentManeuverJunctionsCount:(NSUInteger)arg0 ;
-(void)setCurrentManeuverType:(int)arg0 ;
-(void)setCurrentRoadComplexity:(unsigned int)arg0 ;
-(void)setCurrentStepLength:(CGFloat)arg0 ;
-(void)setCurrentTransitManeuverType:(int)arg0 ;
-(void)setCurrentTransportationType:(int)arg0 ;
-(void)setDistanceToCurrentManeuver:(CGFloat)arg0 ;
-(void)setDistanceToCurrentTrafficSection:(CGFloat)arg0 ;
-(void)setDistanceToDestination:(CGFloat)arg0 ;
-(void)setLaneCount:(unsigned int)arg0 ;
-(void)setLineType:(unsigned int)arg0 ;
-(void)setNavCameraMode:(NSUInteger)arg0 ;
-(void)setNavigationDestination:(NSUInteger)arg0 ;
-(void)setNavigationState:(int)arg0 ;
-(void)setNextManeuverRampType:(int)arg0 ;
-(void)setNextRoadComplexity:(unsigned int)arg0 ;
-(void)setNextStepLength:(CGFloat)arg0 ;
-(void)setRampType:(int)arg0 ;
-(void)setRoadSpeed:(CGFloat)arg0 ;
-(void)setSceneClientStyleState:(struct shared_ptr<gss::ClientStyleState<gss::ScenePropertyID>> )arg0 ;
-(void)setSearchAlongTheRoute:(BOOL)arg0 ;
-(void)setSinuosity:(CGFloat)arg0 ;
-(void)setTrafficColor:(NSUInteger)arg0 ;
-(void)setVehicleSpeed:(CGFloat)arg0 ;


@end


#endif