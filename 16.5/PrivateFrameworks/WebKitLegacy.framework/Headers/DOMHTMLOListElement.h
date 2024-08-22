// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMHTMLOLISTELEMENT_H
#define DOMHTMLOLISTELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"

@interface DOMHTMLOListElement : DOMHTMLElement

@property BOOL compact;
@property int start;
@property (copy) NSString *type;


-(BOOL)reversed;
-(void)setReversed:(BOOL)arg0 ;


@end


#endif