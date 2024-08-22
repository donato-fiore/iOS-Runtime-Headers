// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIIMAGEPROXY_H
#define VUIIMAGEPROXY_H

@protocol NSCopying, VUINetworkRequestLoader;

#import <Foundation/Foundation.h>

#import "VUIImageDecorator.h"
#import "_VUIDecoratorRequest.h"

@interface VUIImageProxy : NSObject <NSCopying>



@property (nonatomic) BOOL allowsSubstitutionForOriginal; // ivar: _allowsSubstitutionForOriginal
@property (nonatomic) BOOL cacheOnLoad; // ivar: _cacheOnLoad
@property (copy) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) VUIImageDecorator *decorator; // ivar: _decorator
@property (retain, nonatomic) _VUIDecoratorRequest *decoratorRequestToken; // ivar: _decoratorRequestToken
@property (readonly, nonatomic) CGSize expectedSize;
@property (nonatomic) NSInteger groupType; // ivar: _groupType
@property (retain, nonatomic) id *imageDidWriteObserver; // ivar: _imageDidWriteObserver
@property (nonatomic) NSInteger imageDirection; // ivar: _imageDirection
@property (retain, nonatomic) id *imageLoader; // ivar: _imageLoader
@property (nonatomic) BOOL isLoading; // ivar: _isLoading
@property (nonatomic) BOOL loadSynchronouslyIfCached; // ivar: _loadSynchronouslyIfCached
@property (readonly, nonatomic) id *object; // ivar: _object
@property (nonatomic) BOOL optimizedImageRendering; // ivar: _optimizedImageRendering
@property (weak, nonatomic) NSObject<VUINetworkRequestLoader> *requestLoader; // ivar: _requestLoader
@property (retain, nonatomic) id *requestToken; // ivar: _requestToken
@property (nonatomic) BOOL returnImageAfterWrittenToDisk; // ivar: _returnImageAfterWrittenToDisk
@property (copy) id *writeCompletionHandler; // ivar: _writeCompletionHandler
@property (nonatomic) BOOL writeToAssetLibrary; // ivar: _writeToAssetLibrary


+(id)_imageDecoratorQueue;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isImageAvailable;
-(BOOL)isOfSameOriginAs:(id)arg0 ;
-(NSUInteger)hash;
-(id)_assetKeyWithImageLoaderKey:(id)arg0 decoratorIdentifier:(id)arg1 ;
-(id)_decoratedImageAssetKey;
-(id)_decoratedImageAssetPath;
-(id)_imageAssetPathWithAssetKey:(id)arg0 ;
-(id)_originalImageAssetKey;
-(id)_originalImageAssetPath;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithObject:(id)arg0 imageLoader:(id)arg1 groupType:(NSInteger)arg2 ;
-(void)_callCompletionHandlerWithImage:(id)arg0 error:(id)arg1 finished:(BOOL)arg2 ;
-(void)_callWriteCompletionHandlerWithPath:(id)arg0 error:(id)arg1 finished:(BOOL)arg2 ;
-(void)_completeImageLoadWithImage:(id)arg0 imagePath:(id)arg1 error:(id)arg2 assetKey:(id)arg3 expiryDate:(id)arg4 tags:(id)arg5 requestRecord:(id)arg6 ;
-(void)_decorateAndWriteImage:(id)arg0 imagePath:(id)arg1 scaleToSize:(struct CGSize )arg2 cropToFit:(BOOL)arg3 scalingResult:(NSUInteger)arg4 assetKey:(id)arg5 expiryDate:(id)arg6 tags:(id)arg7 requestRecord:(id)arg8 ;
-(void)_imageDidWriteHandler:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)load;


@end


#endif