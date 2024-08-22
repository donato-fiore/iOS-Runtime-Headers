// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICOMMENTER_H
#define SKUICOMMENTER_H

@class NSString, UIImage;


#import "SKUIMediaSocialAuthor.h"

@interface SKUICommenter : SKUIMediaSocialAuthor

@property (retain, nonatomic) NSString *attributedName; // ivar: _attributedName
@property (nonatomic) BOOL isAttributed; // ivar: _isAttributed
@property (nonatomic) BOOL isMySelf; // ivar: _isMySelf
@property (copy, nonatomic) UIImage *thumbnailImage; // ivar: _thumbnailImage
@property (nonatomic) BOOL useImageCopy; // ivar: _useImageCopy


-(id)initWithAuthor:(id)arg0 ;


@end


#endif