// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITRACKVIEWELEMENT_H
#define SKUITRACKVIEWELEMENT_H



#import "SKUIViewElement.h"
#import "SKUIActionsViewElement.h"

@interface SKUITrackViewElement : SKUIViewElement {
    char _enabled;
}


@property (readonly, nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) SKUIActionsViewElement *swipeActions;


-(BOOL)isEnabled;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(void)enumerateChildrenUsingBlock:(id)arg0 ;


@end


#endif