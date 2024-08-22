// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWALLPAPERCLIENT_H
#define SBSWALLPAPERCLIENT_H

@class FBSServiceFacilityClient;



@interface SBSWallpaperClient : FBSServiceFacilityClient

@property (readonly, nonatomic) NSUInteger posterSignificantEventsCounter;


-(BOOL)setWallpaperColor:(id)arg0 darkColor:(id)arg1 forVariants:(NSUInteger)arg2 ;
-(BOOL)setWallpaperColorName:(id)arg0 forVariants:(NSUInteger)arg1 ;
-(BOOL)setWallpaperGradient:(id)arg0 forVariants:(NSUInteger)arg1 ;
-(BOOL)setWallpaperWithVideoWithWallpaperMode:(id)arg0 cropRect:(struct CGRect )arg1 wallpaperMode:(unsigned char)arg2 ;
-(NSUInteger)significantEventsCounterForPosterWithIdentifier:(id)arg0 ;
-(id)initWithCalloutQueue:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 calloutQueue:(id)arg1 ;
-(void)_fetchLockScreenBoundsCheckOfType:(NSInteger)arg0 orientation:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)fetchContentCutoutBoundsForVariant:(unsigned int)arg0 orientation:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)fetchLimitedOcclusionBoundsForOrientation:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)fetchLockScreenContentCutoutBoundsForOrientation:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)fetchLockScreenTimeBoundsForOrientation:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)fetchMaximalLockScreenContentCutoutBoundsForOrientation:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)fetchObscurableBoundsForOrientation:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)fetchOriginalImageForVariant:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)fetchOriginalVideoURLForVariant:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)fetchPosterSignificantEventsCounterWithCompletionHandler:(id)arg0 ;
-(void)fetchThumbnailForVariant:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)restoreDefaultWallpaperWithCompletion:(id)arg0 ;
-(void)triggerPosterSignificantEventWithCompletion:(id)arg0 ;


@end


#endif