// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIEXPANDVIEWELEMENT_H
#define SKUIEXPANDVIEWELEMENT_H



#import "SKUIViewElement.h"

@interface SKUIExpandViewElement : SKUIViewElement

@property (readonly, nonatomic, getter=isOpen) BOOL open; // ivar: _open
@property (nonatomic) BOOL previousIsOpen; // ivar: _previousIsOpen


-(NSInteger)pageComponentType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif