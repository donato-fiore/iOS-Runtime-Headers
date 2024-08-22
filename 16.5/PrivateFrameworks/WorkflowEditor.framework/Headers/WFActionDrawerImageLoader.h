// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONDRAWERIMAGELOADER_H
#define WFACTIONDRAWERIMAGELOADER_H

@class NSCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFActionDrawerImageLoader : NSObject

@property (readonly, nonatomic) NSCache *imageCache; // ivar: _imageCache
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *imageLoadingQueue; // ivar: _imageLoadingQueue


+(id)sharedInstance;
-(id)init;
-(id)loadImagesForInteractionDonation:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif