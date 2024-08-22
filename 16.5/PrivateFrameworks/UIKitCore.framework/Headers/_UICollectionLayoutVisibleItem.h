// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONLAYOUTVISIBLEITEM_H
#define _UICOLLECTIONLAYOUTVISIBLEITEM_H

@class NSCollectionLayoutItem, NSString, NSIndexPath;
@protocol _NSCollectionLayoutVisibleItem;

#import <Foundation/Foundation.h>

#import "UICollectionViewLayoutAttributes.h"
#import "UIBezierPath.h"

@interface _UICollectionLayoutVisibleItem : NSObject <_NSCollectionLayoutVisibleItem>

 {
    BOOL _dirty;
    UICollectionViewLayoutAttributes *_layoutAttributes;
    NSCollectionLayoutItem *_layoutItem;
}


@property (nonatomic) CGFloat alpha;
@property (readonly, nonatomic) CGRect bounds;
@property (nonatomic) CGPoint center;
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly, nonatomic) NSUInteger collisionBoundsType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect frame;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger representedElementCategory;
@property (readonly, nonatomic) NSString *representedElementKind;
@property (readonly) Class superclass;
@property (nonatomic) CGAffineTransform transform;
@property (nonatomic) CATransform3D transform3D;
@property (nonatomic) NSInteger zIndex;




@end


#endif