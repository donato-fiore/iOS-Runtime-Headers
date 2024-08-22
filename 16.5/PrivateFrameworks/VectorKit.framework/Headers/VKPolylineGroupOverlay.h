// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKPOLYLINEGROUPOVERLAY_H
#define VKPOLYLINEGROUPOVERLAY_H

@class GEOMapRegion, NSString, NSSet;
@protocol VKRouteOverlay;

#import <Foundation/Foundation.h>

#import "VKPolylineOverlay.h"

@interface VKPolylineGroupOverlay : NSObject <VKRouteOverlay>

 {
    *__CFSet _observers;
}


@property (readonly, nonatomic) GEOMapRegion *boundingMapRegion; // ivar: _boundingMapRegion
@property (readonly, nonatomic) BOOL containsTransit; // ivar: _containsTransit
@property (readonly, nonatomic) ? coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VKPolylineOverlay *focusedPolyline; // ivar: _focusedPolyline
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *polylines; // ivar: _polylines
@property (retain, nonatomic) VKPolylineOverlay *selectedPolyline; // ivar: _selectedPolyline
@property (nonatomic) BOOL showTraffic; // ivar: _showTraffic
@property (readonly) Class superclass;


-(void)_updateBoundingMapRegion;
-(void)_updateContainsTransit;
-(void)addObserver:(id)arg0 ;
-(void)addPolyline:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)removePolyline:(id)arg0 ;


@end


#endif