// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMDOCUMENT_H
#define DOMDOCUMENT_H

@class NSString;


#import "DOMNode.h"
#import "DOMElement.h"
#import "DOMHTMLCollection.h"
#import "DOMHTMLElement.h"
#import "DOMAbstractView.h"
#import "DOMDocumentType.h"
#import "DOMImplementation.h"
#import "DOMStyleSheetList.h"
#import "WebFrame.h"

@interface DOMDocument : DOMNode

@property (readonly, copy) NSString *URL;
@property (readonly) DOMElement *activeElement;
@property (readonly) DOMHTMLCollection *anchors;
@property (readonly) DOMHTMLCollection *applets;
@property (retain) DOMHTMLElement *body;
@property (readonly, copy) NSString *characterSet;
@property (copy) NSString *charset;
@property (copy) NSString *cookie;
@property (readonly, copy) NSString *defaultCharset;
@property (readonly) DOMAbstractView *defaultView;
@property (readonly) DOMDocumentType *doctype;
@property (readonly) DOMElement *documentElement;
@property (copy) NSString *documentURI;
@property (readonly, copy) NSString *domain;
@property (readonly) DOMHTMLCollection *forms;
@property (readonly) DOMHTMLCollection *images;
@property (readonly) DOMImplementation *implementation;
@property (readonly, copy) NSString *inputEncoding;
@property (readonly, copy) NSString *lastModified;
@property (readonly) DOMHTMLCollection *links;
@property (readonly, copy) NSString *preferredStylesheetSet;
@property (readonly, copy) NSString *readyState;
@property (readonly, copy) NSString *referrer;
@property (copy) NSString *selectedStylesheetSet;
@property (readonly) DOMStyleSheetList *styleSheets;
@property (copy) NSString *title;
@property (readonly, nonatomic) WebFrame *webFrame;
@property (readonly, copy) NSString *xmlEncoding;
@property BOOL xmlStandalone;
@property (copy) NSString *xmlVersion;


-(BOOL)execCommand:(id)arg0 ;
-(BOOL)execCommand:(id)arg0 userInterface:(BOOL)arg1 ;
-(BOOL)execCommand:(id)arg0 userInterface:(BOOL)arg1 value:(id)arg2 ;
-(BOOL)hasFocus;
-(BOOL)hidden;
-(BOOL)queryCommandEnabled:(id)arg0 ;
-(BOOL)queryCommandIndeterm:(id)arg0 ;
-(BOOL)queryCommandState:(id)arg0 ;
-(BOOL)queryCommandSupported:(id)arg0 ;
-(BOOL)webkitFullScreenKeyboardInputAllowed;
-(BOOL)webkitFullscreenEnabled;
-(BOOL)webkitIsFullScreen;
-(id)URLWithAttributeString:(id)arg0 ;
-(id)_documentRange;
-(id)adoptNode:(id)arg0 ;
-(id)caretRangeFromPoint:(int)arg0 y:(int)arg1 ;
-(id)children;
-(id)compatMode;
-(id)contentType;
-(id)createAttribute:(id)arg0 ;
-(id)createAttributeNS:(id)arg0 ;
-(id)createAttributeNS:(id)arg0 qualifiedName:(id)arg1 ;
-(id)createCDATASection:(id)arg0 ;
-(id)createCSSStyleDeclaration;
-(id)createComment:(id)arg0 ;
-(id)createDocumentFragment;
-(id)createElement:(id)arg0 ;
-(id)createElementNS:(id)arg0 ;
-(id)createElementNS:(id)arg0 qualifiedName:(id)arg1 ;
-(id)createEntityReference:(id)arg0 ;
-(id)createEvent:(id)arg0 ;
-(id)createExpression:(id)arg0 ;
-(id)createExpression:(id)arg0 resolver:(id)arg1 ;
-(id)createNSResolver:(id)arg0 ;
-(id)createNodeIterator:(id)arg0 ;
-(id)createNodeIterator:(id)arg0 whatToShow:(unsigned int)arg1 filter:(id)arg2 expandEntityReferences:(BOOL)arg3 ;
-(id)createProcessingInstruction:(id)arg0 ;
-(id)createProcessingInstruction:(id)arg0 data:(id)arg1 ;
-(id)createRange;
-(id)createTextNode:(id)arg0 ;
-(id)createTreeWalker:(id)arg0 ;
-(id)createTreeWalker:(id)arg0 whatToShow:(unsigned int)arg1 filter:(id)arg2 expandEntityReferences:(BOOL)arg3 ;
-(id)currentScript;
-(id)dir;
-(id)elementFromPoint:(int)arg0 y:(int)arg1 ;
-(id)evaluate:(id)arg0 ;
-(id)evaluate:(id)arg0 contextNode:(id)arg1 resolver:(id)arg2 type:(unsigned short)arg3 inResult:(id)arg4 ;
-(id)firstElementChild;
-(id)getComputedStyle:(id)arg0 ;
-(id)getComputedStyle:(id)arg0 pseudoElement:(id)arg1 ;
-(id)getElementById:(id)arg0 ;
-(id)getElementsByClassName:(id)arg0 ;
-(id)getElementsByName:(id)arg0 ;
-(id)getElementsByTagName:(id)arg0 ;
-(id)getElementsByTagNameNS:(id)arg0 ;
-(id)getElementsByTagNameNS:(id)arg0 localName:(id)arg1 ;
-(id)getMatchedCSSRules:(id)arg0 pseudoElement:(id)arg1 ;
-(id)getMatchedCSSRules:(id)arg0 pseudoElement:(id)arg1 authorOnly:(BOOL)arg2 ;
-(id)getOverrideStyle:(id)arg0 ;
-(id)getOverrideStyle:(id)arg0 pseudoElement:(id)arg1 ;
-(id)head;
-(id)importNode:(id)arg0 ;
-(id)importNode:(id)arg0 deep:(BOOL)arg1 ;
-(id)lastElementChild;
-(id)origin;
-(id)queryCommandValue:(id)arg0 ;
-(id)querySelector:(id)arg0 ;
-(id)querySelectorAll:(id)arg0 ;
-(id)scrollingElement;
-(id)visibilityState;
-(id)webkitCurrentFullScreenElement;
-(id)webkitFullscreenElement;
-(unsigned int)childElementCount;
-(void)setDir:(id)arg0 ;
-(void)webkitCancelFullScreen;
-(void)webkitExitFullscreen;


@end


#endif