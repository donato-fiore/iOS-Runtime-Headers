// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMELEMENT_H
#define DOMELEMENT_H

@class NSString;


#import "DOMNode.h"
#import "DOMElement.h"
#import "DOMCSSStyleDeclaration.h"

@interface DOMElement : DOMNode

@property (readonly) CGRect boundsInRootViewSpace;
@property (readonly) unsigned int childElementCount;
@property (copy) NSString *className;
@property (readonly) int clientHeight;
@property (readonly) int clientLeft;
@property (readonly) int clientTop;
@property (readonly) int clientWidth;
@property (readonly) DOMElement *firstElementChild;
@property (copy) NSString *innerHTML;
@property (readonly, copy) NSString *innerText;
@property (readonly) DOMElement *lastElementChild;
@property (readonly) DOMElement *nextElementSibling;
@property (readonly) int offsetHeight;
@property (readonly) int offsetLeft;
@property (readonly) DOMElement *offsetParent;
@property (readonly) int offsetTop;
@property (readonly) int offsetWidth;
@property (copy) NSString *outerHTML;
@property (readonly) DOMElement *previousElementSibling;
@property (readonly) int scrollHeight;
@property int scrollLeft;
@property int scrollTop;
@property (readonly) int scrollWidth;
@property (readonly) DOMCSSStyleDeclaration *style;
@property (readonly, copy) NSString *tagName;


+(id)_DOMElementFromJSContext:(struct OpaqueJSContext *)arg0 value:(struct OpaqueJSValue *)arg1 ;
-(BOOL)hasAttribute:(id)arg0 ;
-(BOOL)hasAttributeNS:(id)arg0 ;
-(BOOL)hasAttributeNS:(id)arg0 localName:(id)arg1 ;
-(BOOL)isFocused;
-(BOOL)matches:(id)arg0 ;
-(BOOL)webkitMatchesSelector:(id)arg0 ;
-(id)_getURLAttribute:(id)arg0 ;
-(id)children;
-(id)classList;
-(id)closest:(id)arg0 ;
-(id)getAttribute:(id)arg0 ;
-(id)getAttributeNS:(id)arg0 ;
-(id)getAttributeNS:(id)arg0 localName:(id)arg1 ;
-(id)getAttributeNode:(id)arg0 ;
-(id)getAttributeNodeNS:(id)arg0 ;
-(id)getAttributeNodeNS:(id)arg0 localName:(id)arg1 ;
-(id)getElementsByClassName:(id)arg0 ;
-(id)getElementsByTagName:(id)arg0 ;
-(id)getElementsByTagNameNS:(id)arg0 ;
-(id)getElementsByTagNameNS:(id)arg0 localName:(id)arg1 ;
-(id)querySelector:(id)arg0 ;
-(id)querySelectorAll:(id)arg0 ;
-(id)removeAttributeNode:(id)arg0 ;
-(id)setAttributeNode:(id)arg0 ;
-(id)setAttributeNodeNS:(id)arg0 ;
-(id)uiactions;
-(int)structuralComplexityContribution;
-(struct __CTFont *)_font;
-(void)blur;
-(void)focus;
-(void)remove;
-(void)removeAttribute:(id)arg0 ;
-(void)removeAttributeNS:(id)arg0 ;
-(void)removeAttributeNS:(id)arg0 localName:(id)arg1 ;
-(void)scrollByLines:(int)arg0 ;
-(void)scrollByPages:(int)arg0 ;
-(void)scrollIntoView:(BOOL)arg0 ;
-(void)scrollIntoViewIfNeeded:(BOOL)arg0 ;
-(void)setAttribute:(id)arg0 ;
-(void)setAttribute:(id)arg0 value:(id)arg1 ;
-(void)setAttributeNS:(id)arg0 ;
-(void)setAttributeNS:(id)arg0 qualifiedName:(id)arg1 value:(id)arg2 ;
-(void)setUiactions:(id)arg0 ;
-(void)webkitRequestFullScreen:(unsigned short)arg0 ;
-(void)webkitRequestFullscreen;


@end


#endif