// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKHERITAGESTRIPEIMAGEGENERATOR_H
#define WKHERITAGESTRIPEIMAGEGENERATOR_H

@class NSCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WKHeritageStripeImageGenerator : NSObject

@property (retain, nonatomic) NSCache *_wallpaperCache; // ivar: __wallpaperCache
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_wallpaperRequestQueue; // ivar: __wallpaperRequestQueue


+(id)defaultImageGenerator;
-(id)init;
-(id)requestWallpaperImageWithBackgroundColorSynchronous:(id)arg0 ;
-(id)thumbnailImageWithBackgroundColor:(id)arg0 appearanceAware:(BOOL)arg1 ;
-(void)requestWallpaperImageWithBackgroundColor:(id)arg0 completion:(id)arg1 ;


@end


#endif