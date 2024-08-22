// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMHTMLOPTIONELEMENT_H
#define DOMHTMLOPTIONELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"
#import "DOMHTMLFormElement.h"

@interface DOMHTMLOptionElement : DOMHTMLElement

@property BOOL defaultSelected;
@property BOOL disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (readonly) int index;
@property (copy) NSString *label;
@property BOOL selected;
@property (readonly, copy) NSString *text;
@property (copy) NSString *value;




@end


#endif