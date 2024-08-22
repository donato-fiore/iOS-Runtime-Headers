// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUILOCKUPCOMPONENT_H
#define SKUILOCKUPCOMPONENT_H



#import "SKUIPageComponent.h"
#import "SKUIEditorialComponent.h"
#import "SKUIItem.h"
#import "SKUILockupViewElement.h"

@interface SKUILockupComponent : SKUIPageComponent

@property (readonly, nonatomic) BOOL _needsItemData;
@property (readonly, nonatomic) SKUIEditorialComponent *editorial; // ivar: _editorial
@property (readonly, nonatomic) SKUIItem *item; // ivar: _item
@property (readonly, nonatomic) NSInteger itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) SKUILockupStyle lockupStyle; // ivar: _lockupStyle
@property (readonly, nonatomic) SKUILockupViewElement *viewElement;


-(NSInteger)componentType;
-(id)initWithCustomPageContext:(id)arg0 ;
-(id)initWithItem:(id)arg0 style:(struct SKUILockupStyle )arg1 ;
-(id)initWithItemIdentifier:(NSInteger)arg0 style:(struct SKUILockupStyle )arg1 ;
-(id)initWithViewElement:(id)arg0 ;


@end


#endif