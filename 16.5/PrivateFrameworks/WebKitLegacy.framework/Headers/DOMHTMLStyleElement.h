// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMHTMLSTYLEELEMENT_H
#define DOMHTMLSTYLEELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"
#import "DOMStyleSheet.h"

@interface DOMHTMLStyleElement : DOMHTMLElement

@property BOOL disabled;
@property (copy) NSString *media;
@property (readonly) DOMStyleSheet *sheet;
@property (copy) NSString *type;


-(id)nonce;
-(void)setNonce:(id)arg0 ;


@end


#endif