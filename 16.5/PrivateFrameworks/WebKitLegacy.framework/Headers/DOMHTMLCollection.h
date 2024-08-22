// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMHTMLCOLLECTION_H
#define DOMHTMLCOLLECTION_H



#import "DOMObject.h"

@interface DOMHTMLCollection : DOMObject

@property (readonly) unsigned int length;


-(id)item:(unsigned int)arg0 ;
-(id)namedItem:(id)arg0 ;
-(id)tags:(id)arg0 ;
-(void)dealloc;


@end


#endif