// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMHTMLBUTTONELEMENT_H
#define DOMHTMLBUTTONELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"
#import "DOMHTMLFormElement.h"

@interface DOMHTMLButtonElement : DOMHTMLElement

@property (copy) NSString *accessKey;
@property BOOL autofocus;
@property BOOL disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *name;
@property (copy) NSString *type;
@property (copy) NSString *value;
@property (readonly) BOOL willValidate;


-(int)structuralComplexityContribution;
-(void)click;


@end


#endif