// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSEFFECTMANAGER_H
#define _UIFOCUSEFFECTMANAGER_H

@class NSString;
@protocol _UIGeometryChangeObserver, UIFocusItem;

#import <Foundation/Foundation.h>

#import "_UIFocusHaloView.h"

@interface _UIFocusEffectManager : NSObject <_UIGeometryChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<UIFocusItem> *focusedItem; // ivar: _focusedItem
@property (readonly, nonatomic) _UIFocusHaloView *haloView; // ivar: _haloView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_geometryChanged:(struct ? *)arg0 forAncestor:(id)arg1 ;
-(void)_observeFocusedItemGeometryForItem:(id)arg0 ;
-(void)moveFocusToItem:(id)arg0 ;


@end


#endif