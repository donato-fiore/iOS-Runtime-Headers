// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMHTMLANCHORELEMENT_H
#define DOMHTMLANCHORELEMENT_H

@class NSURL, NSString;


#import "DOMHTMLElement.h"

@interface DOMHTMLAnchorElement : DOMHTMLElement

@property (readonly, copy) NSURL *absoluteLinkURL;
@property (copy) NSString *accessKey;
@property (copy) NSString *charset;
@property (copy) NSString *coords;
@property (readonly, copy) NSString *hashName;
@property (readonly, copy) NSString *host;
@property (readonly, copy) NSString *hostname;
@property (copy) NSString *href;
@property (copy) NSString *hreflang;
@property (copy) NSString *name;
@property (readonly, copy) NSString *pathname;
@property (readonly, copy) NSString *port;
@property (readonly, copy) NSString *protocol;
@property (copy) NSString *rel;
@property (copy) NSString *rev;
@property (readonly, copy) NSString *search;
@property (copy) NSString *shape;
@property (copy) NSString *target;
@property (readonly, copy) NSString *text;
@property (copy) NSString *type;


-(id)download;
-(id)origin;
-(id)ping;
-(void)setDownload:(id)arg0 ;
-(void)setPing:(id)arg0 ;


@end


#endif