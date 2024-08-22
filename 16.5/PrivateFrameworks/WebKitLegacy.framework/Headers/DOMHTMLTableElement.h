// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMHTMLTABLEELEMENT_H
#define DOMHTMLTABLEELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"
#import "DOMHTMLTableCaptionElement.h"
#import "DOMHTMLCollection.h"
#import "DOMHTMLTableSectionElement.h"

@interface DOMHTMLTableElement : DOMHTMLElement

@property (copy) NSString *align;
@property (copy) NSString *bgColor;
@property (copy) NSString *border;
@property (retain) DOMHTMLTableCaptionElement *caption;
@property (copy) NSString *cellPadding;
@property (copy) NSString *cellSpacing;
@property (copy) NSString *frameBorders;
@property (readonly) DOMHTMLCollection *rows;
@property (copy) NSString *rules;
@property (copy) NSString *summary;
@property (readonly) DOMHTMLCollection *tBodies;
@property (retain) DOMHTMLTableSectionElement *tFoot;
@property (retain) DOMHTMLTableSectionElement *tHead;
@property (copy) NSString *width;


-(id)createCaption;
-(id)createTBody;
-(id)createTFoot;
-(id)createTHead;
-(id)insertRow:(int)arg0 ;
-(int)structuralComplexityContribution;
-(void)deleteCaption;
-(void)deleteRow:(int)arg0 ;
-(void)deleteTFoot;
-(void)deleteTHead;


@end


#endif