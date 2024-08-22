// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICOLLECTIONVIEWLAYOUTATTRIBUTES_H
#define UICOLLECTIONVIEWLAYOUTATTRIBUTES_H

@class NSString, NSIndexPath;
@protocol NSCopying, UIDynamicItem;

#import <Foundation/Foundation.h>

#import "_UICollectionLayoutListAttributes.h"
#import "UIBezierPath.h"

@interface UICollectionViewLayoutAttributes : NSObject <NSCopying, UIDynamicItem>

 {
    NSString *_elementKind;
    NSString *_reuseIdentifier;
    CGRect _frame;
    NSInteger _zPosition;
    CGRect _maskViewFrame;
    id *_preferredSizingData;
    _UICollectionLayoutListAttributes *_listAttributes;
    ? _layoutFlags;
    BOOL _hasMaskViewFrame;
    NSUInteger _selectionGrouping;
    CGFloat _cornerRadius;
    UIEdgeInsets _defaultLayoutMargins;
}


@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic) CGRect bounds;
@property (nonatomic) CGPoint center; // ivar: _center
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly, nonatomic) NSUInteger collisionBoundsType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect frame;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic) NSUInteger representedElementCategory;
@property (readonly, nonatomic) NSString *representedElementKind;
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;
@property (nonatomic) CGAffineTransform transform;
@property (nonatomic) CATransform3D transform3D; // ivar: _transform
@property (nonatomic) NSInteger zIndex; // ivar: _zIndex


+(id)layoutAttributesForCellWithIndexPath:(id)arg0 ;
+(id)layoutAttributesForDecorationViewOfKind:(id)arg0 withIndexPath:(id)arg1 ;
+(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 withIndexPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSizeEqualForPreferredFittingAttributes:(id)arg0 ;
-(NSInteger)_zPosition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_setZPosition:(NSInteger)arg0 ;


@end


#endif