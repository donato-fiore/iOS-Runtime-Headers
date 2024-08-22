// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPROPERTYPREDICATEVIEWELEMENT_H
#define SKUIPROPERTYPREDICATEVIEWELEMENT_H

@class NSString;


#import "SKUIPredicateViewElement.h"

@interface SKUIPropertyPredicateViewElement : SKUIPredicateViewElement

@property (readonly, nonatomic) NSInteger comparisonType; // ivar: _comparisonType
@property (readonly, copy, nonatomic) NSString *property; // ivar: _property
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)shouldParseChildDOMElements;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)entityValuePredicate;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif