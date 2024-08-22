// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIALIBRARYIMAGELOADER_H
#define VUIMEDIALIBRARYIMAGELOADER_H

@class NSString, NSMutableDictionary, NSOperationQueue;
@protocol TVImageLoader, VUIImageLoader;

#import <Foundation/Foundation.h>


@interface VUIMediaLibraryImageLoader : NSObject <TVImageLoader, VUIImageLoader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *imageLoadContextsByImageIdentifier; // ivar: _imageLoadContextsByImageIdentifier
@property (retain, nonatomic) NSOperationQueue *imageLoadOperationQueue; // ivar: _imageLoadOperationQueue
@property (readonly) Class superclass;


+(id)_scaledImageIdentifierWithImageIdentifier:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 ;
-(id)_imageIdentifierWithImageLoadParams:(id)arg0 ;
-(id)_imageLoadOperationWithParams:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 ;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg0 ;
-(id)_imageLoaderIdentifier;
-(id)imageKeyForObject:(id)arg0 ;
-(id)init;
-(id)loadImageForObject:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 imageDirection:(NSInteger)arg3 requestLoader:(id)arg4 completionHandler:(id)arg5 ;
-(void)_cancelAllImageLoads;
-(void)cancelLoad:(id)arg0 ;
-(void)dealloc;


@end


#endif