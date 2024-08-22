// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ROUTERENDERLAYEROBSERVERPROXY_H
#define ROUTERENDERLAYEROBSERVERPROXY_H

@class NSString;
@protocol VKPolylineGroupOverlayObserver;

#import <Foundation/Foundation.h>


@interface RouteRenderLayerObserverProxy : NSObject <VKPolylineGroupOverlayObserver>

 {
    *PolylineGroupChangeObserver _polylineGroupObserver;
    vector<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>> _retainedGroups;
    set<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>> _observedGroupsSet;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPolylineGroupObserver:(struct PolylineGroupChangeObserver *)arg0 ;
-(void)dealloc;
-(void)polylineGroup:(id)arg0 didAddPolyline:(id)arg1 ;
-(void)polylineGroup:(id)arg0 didFocusPolyline:(id)arg1 ;
-(void)polylineGroup:(id)arg0 didRemovePolyline:(id)arg1 ;
-(void)polylineGroup:(id)arg0 didSelectPolyline:(id)arg1 ;
-(void)startObserving:(id)arg0 ;
-(void)stopObserving:(id)arg0 ;


@end


#endif