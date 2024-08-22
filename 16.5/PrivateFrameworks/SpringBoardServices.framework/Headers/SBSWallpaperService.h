// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWALLPAPERSERVICE_H
#define SBSWALLPAPERSERVICE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBSWallpaperClient.h"

@interface SBSWallpaperService : NSObject {
    SBSWallpaperClient *_client;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _wasInvalidated;
}


@property (readonly, nonatomic) NSUInteger posterSignificantEventsCounter;


-(BOOL)setWallpaperColor:(id)arg0 darkColor:(id)arg1 forVariants:(NSUInteger)arg2 ;
-(BOOL)setWallpaperColorName:(id)arg0 forVariants:(NSUInteger)arg1 ;
-(BOOL)setWallpaperGradient:(id)arg0 forVariants:(NSUInteger)arg1 ;
-(BOOL)setWallpaperWithVideoWithWallpaperMode:(id)arg0 cropRect:(struct CGRect )arg1 wallpaperMode:(NSInteger)arg2 ;
-(NSUInteger)significantEventsCounterForPosterWithIdentifier:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)fetchContentCutoutBoundsForVariant:(NSInteger)arg0 orientation:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)fetchLimitedOcclusionBoundsForOrientation:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchLockScreenContentCutoutBoundsForOrientation:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchLockScreenTimeBoundsForOrientation:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchMaximalLockScreenContentCutoutBoundsForOrientation:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchObscurableBoundsForOrientation:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchOriginalImageForVariant:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchOriginalVideoURLForVariant:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchPosterSignificantEventsCounterWithCompletionHandler:(id)arg0 ;
-(void)fetchThumbnailForVariant:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
-(void)restoreDefaultWallpaperWithCompletion:(id)arg0 ;
-(void)triggerPosterSignificantEventWithCompletion:(id)arg0 ;


@end


#endif