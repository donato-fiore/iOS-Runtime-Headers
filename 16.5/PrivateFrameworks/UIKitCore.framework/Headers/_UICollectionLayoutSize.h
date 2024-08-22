// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONLAYOUTSIZE_H
#define _UICOLLECTIONLAYOUTSIZE_H

@protocol NSCopying, _UICollectionLayoutAPIRespresenting;

#import <Foundation/Foundation.h>

#import "_UICollectionLayoutDimension.h"

@interface _UICollectionLayoutSize : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>

 {
    _UICollectionLayoutDimension *_width;
    _UICollectionLayoutDimension *_height;
}


@property (readonly, nonatomic) _UICollectionLayoutDimension *height;
@property (readonly, nonatomic) _UICollectionLayoutDimension *width;


+(id)sizeWithWidth:(id)arg0 height:(id)arg1 ;
-(id)_apiRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithWidth:(id)arg0 height:(id)arg1 ;


@end


#endif