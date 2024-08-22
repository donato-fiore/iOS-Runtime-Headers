// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUARTWORKCELLCONTEXT_H
#define SUARTWORKCELLCONTEXT_H

@class ISURLOperationPool, UIImage;


#import "SUCellConfigurationContext.h"
#import "SUImageCache.h"
#import "SUImageDataProvider.h"

@interface SUArtworkCellContext : SUCellConfigurationContext

@property (retain, nonatomic) SUImageCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) ISURLOperationPool *imagePool; // ivar: _imagePool
@property (retain, nonatomic) SUImageDataProvider *imageProvider; // ivar: _imageProvider
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage


-(void)dealloc;


@end


#endif