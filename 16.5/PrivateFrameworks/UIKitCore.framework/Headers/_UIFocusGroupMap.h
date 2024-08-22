// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSGROUPMAP_H
#define _UIFOCUSGROUPMAP_H

@class NSMapTable, NSArray;
@protocol NSCopying, UICoordinateSpace;

#import <Foundation/Foundation.h>

#import "_UIFocusGroup.h"

@interface _UIFocusGroupMap : NSObject <NSCopying>

 {
    NSMapTable *_environmentToGroupMap;
    NSMapTable *_identifierToGroupMap;
    NSMapTable *_identifierToPrimaryItemMap;
    _UIFocusGroup *_nullGroup;
    NSMapTable *_standInItemsMap;
}


@property (readonly, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace; // ivar: _coordinateSpace
@property (readonly, nonatomic) NSArray *focusGroups; // ivar: _focusGroups
@property (readonly, nonatomic) NSArray *focusItems;


-(id)_indexEnvironment:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)focusGroupForItem:(id)arg0 ;
-(id)initWithItems:(id)arg0 coordinateSpace:(id)arg1 ;
-(id)initWithItems:(id)arg0 standInItemsMap:(id)arg1 coordinateSpace:(id)arg2 ;
-(id)visualDescription;
-(void)_indexItems:(id)arg0 ;


@end


#endif