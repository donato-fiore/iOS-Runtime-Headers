// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDYNAMICITEMGROUP_H
#define UIDYNAMICITEMGROUP_H

@class NSMapTable, NSString, NSArray;
@protocol UIDynamicItem;

#import <Foundation/Foundation.h>

#import "UIBezierPath.h"

@interface UIDynamicItemGroup : NSObject <UIDynamicItem>

 {
    NSMapTable *_itemsToOffsets;
}


@property (readonly, nonatomic) CGRect bounds;
@property (nonatomic) CGPoint center; // ivar: _center
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly, nonatomic) NSUInteger collisionBoundsType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly) Class superclass;
@property (nonatomic) CGAffineTransform transform; // ivar: _transform


-(id)initWithItems:(id)arg0 ;


@end


#endif