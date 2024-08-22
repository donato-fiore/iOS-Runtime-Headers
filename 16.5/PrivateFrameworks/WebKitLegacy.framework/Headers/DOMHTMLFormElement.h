// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMHTMLFORMELEMENT_H
#define DOMHTMLFORMELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"
#import "DOMHTMLCollection.h"

@interface DOMHTMLFormElement : DOMHTMLElement

@property (copy) NSString *acceptCharset;
@property (copy) NSString *action;
@property (readonly) DOMHTMLCollection *elements;
@property (copy) NSString *encoding;
@property (copy) NSString *enctype;
@property (readonly) int length;
@property (copy) NSString *method;
@property (copy) NSString *name;
@property (copy) NSString *target;


-(BOOL)checkValidity;
-(BOOL)noValidate;
-(id)autocomplete;
-(int)structuralComplexityContribution;
-(void)reset;
-(void)setAutocomplete:(id)arg0 ;
-(void)setNoValidate:(BOOL)arg0 ;
-(void)submit;


@end


#endif