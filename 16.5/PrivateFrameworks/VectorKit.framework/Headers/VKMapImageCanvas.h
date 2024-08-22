// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKMAPIMAGECANVAS_H
#define VKMAPIMAGECANVAS_H

@class NSString;
@protocol MDSnapshotMap;


#import "VKImageCanvas.h"

@interface VKMapImageCanvas : VKImageCanvas <MDSnapshotMap>

 {
    *void _mapEngine;
    _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _manifestTileGroupObserverProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithMapEngine:(*void)arg0 ;
-(void)cancelTileRequests;
-(void)clearScene;
-(void)dealloc;
-(void)resetCameraController;
-(void)setMapType:(int)arg0 ;
-(void)tileGroupDidChange;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;


@end


#endif