// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMHTMLLABELELEMENT_H
#define DOMHTMLLABELELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"
#import "DOMHTMLFormElement.h"

@interface DOMHTMLLabelElement : DOMHTMLElement

@property (copy) NSString *accessKey;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *htmlFor;


-(id)control;


@end


#endif