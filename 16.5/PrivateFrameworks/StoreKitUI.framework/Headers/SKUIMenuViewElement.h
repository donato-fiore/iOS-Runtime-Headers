// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIMENUVIEWELEMENT_H
#define SKUIMENUVIEWELEMENT_H

@class NSArray;


#import "SKUIViewElement.h"
#import "SKUILabelViewElement.h"
#import "SKUIItemViewElement.h"

@interface SKUIMenuViewElement : SKUIViewElement {
    char _enabled;
}


@property (readonly, nonatomic) NSArray *menuItemTitles;
@property (readonly, nonatomic) SKUILabelViewElement *menuLabel; // ivar: _menuLabel
@property (readonly, nonatomic) NSInteger selectedItemIndex;
@property (readonly, nonatomic) SKUIItemViewElement *titleItem;


-(BOOL)isEnabled;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(void)_enumerateItemElementsUsingBlock:(id)arg0 ;
-(void)dispatchEventOfType:(NSUInteger)arg0 forItemAtIndex:(NSInteger)arg1 ;


@end


#endif