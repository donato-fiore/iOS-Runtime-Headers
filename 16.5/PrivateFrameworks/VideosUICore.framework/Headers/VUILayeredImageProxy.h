// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUILAYEREDIMAGEPROXY_H
#define VUILAYEREDIMAGEPROXY_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "_TVURLSessionDownloadTaskWrapper.h"

@interface VUILayeredImageProxy : NSObject {
    _TVURLSessionDownloadTaskWrapper *_downloadTaskWrapper;
}


@property (readonly, copy, nonatomic) NSString *assetKey; // ivar: _assetKey
@property (getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (readonly, nonatomic) NSInteger groupType; // ivar: _groupType
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


+(id)_loadingQueue;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isImageAvailable;
-(BOOL)isLoading;
-(NSUInteger)hash;
-(id)_assetPathWithAssetKey:(id)arg0 ;
-(id)description;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 groupType:(NSInteger)arg1 ;
-(id)initWithURL:(id)arg0 groupType:(NSInteger)arg1 assetKey:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)loadWithCompletion:(id)arg0 ;


@end


#endif