// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIVIDEOADVISORYLOGOIMAGEDOWNLOADER_H
#define VUIVIDEOADVISORYLOGOIMAGEDOWNLOADER_H

@class TVImageProxy;

#import <Foundation/Foundation.h>


@interface VUIVideoAdvisoryLogoImageDownloader : NSObject

@property (retain, nonatomic) TVImageProxy *photoSensitivityImageProxy; // ivar: _photoSensitivityImageProxy
@property (retain, nonatomic) TVImageProxy *ratingImageProxy; // ivar: _ratingImageProxy


-(void)downloadImageWithURL:(id)arg0 imageInfo:(id)arg1 completion:(id)arg2 ;
-(void)downloadImagesWithAdvisoryImageInfo:(id)arg0 photoSensitivityImageInfo:(id)arg1 completion:(id)arg2 ;


@end


#endif