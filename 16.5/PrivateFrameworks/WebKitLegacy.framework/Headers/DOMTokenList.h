// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMTOKENLIST_H
#define DOMTOKENLIST_H

@class NSString;


#import "DOMObject.h"

@interface DOMTokenList : DOMObject

@property (readonly) unsigned int length;
@property (copy) NSString *value;


-(BOOL)contains:(id)arg0 ;
-(BOOL)toggle:(id)arg0 force:(BOOL)arg1 ;
-(id)item:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif