// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKGLOBEIMAGECANVAS_H
#define VKGLOBEIMAGECANVAS_H

@class NSString;
@protocol MDSnapshotMap;


#import "VKImageCanvas.h"
#import "VKCamera.h"

@interface VKGlobeImageCanvas : VKImageCanvas <MDSnapshotMap>

 {
    *void _globeView;
    VKCamera *_vkCamera;
    unique_ptr<md::GlobeAdapter, std::default_delete<md::GlobeAdapter>> _globeAdapter;
    *void _loadingStatusTracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithMapEngine:(*void)arg0 ;
-(void)_updateViewport;
-(void)cancelTileRequests;
-(void)dealloc;
-(void)didLayout;
-(void)setMapType:(int)arg0 ;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;
-(void)willDealloc;


@end


#endif