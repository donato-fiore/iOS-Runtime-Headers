// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONPREFERREDSIZE_H
#define _UICOLLECTIONPREFERREDSIZE_H

@class NSCollectionLayoutSize;

#import <Foundation/Foundation.h>


@interface _UICollectionPreferredSize : NSObject {
    CGSize _originalSize;
    CGSize _fittingSize;
    NSCollectionLayoutSize *_layoutSize;
    BOOL _preferredSizeDirty;
    id *_additionalData;
}




-(id)description;


@end


#endif