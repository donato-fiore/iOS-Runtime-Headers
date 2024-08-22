// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMHTMLAREAELEMENT_H
#define DOMHTMLAREAELEMENT_H

@class NSURL, NSString;


#import "DOMHTMLElement.h"

@interface DOMHTMLAreaElement : DOMHTMLElement

@property (readonly, copy) NSURL *absoluteLinkURL;
@property (copy) NSString *accessKey;
@property (copy) NSString *alt;
@property (copy) NSString *coords;
@property (readonly, copy) NSString *hashName;
@property (readonly, copy) NSString *host;
@property (readonly, copy) NSString *hostname;
@property (copy) NSString *href;
@property BOOL noHref;
@property (readonly, copy) NSString *pathname;
@property (readonly, copy) NSString *port;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *search;
@property (copy) NSString *shape;
@property (copy) NSString *target;


-(id)absoluteQuadsWithOwner:(id)arg0 ;
-(id)boundingBoxesWithOwner:(id)arg0 ;
-(id)origin;
-(id)ping;
-(id)rel;
-(id)relList;
-(struct CGRect )boundingBoxWithOwner:(id)arg0 ;
-(struct _WKQuad )absoluteQuadWithOwner:(id)arg0 ;
-(void)setPing:(id)arg0 ;
-(void)setRel:(id)arg0 ;


@end


#endif