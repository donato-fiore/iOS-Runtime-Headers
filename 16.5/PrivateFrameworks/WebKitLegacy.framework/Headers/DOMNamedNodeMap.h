// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMNAMEDNODEMAP_H
#define DOMNAMEDNODEMAP_H



#import "DOMObject.h"

@interface DOMNamedNodeMap : DOMObject

@property (readonly) unsigned int length;


-(id)getNamedItem:(id)arg0 ;
-(id)getNamedItemNS:(id)arg0 ;
-(id)getNamedItemNS:(id)arg0 localName:(id)arg1 ;
-(id)item:(unsigned int)arg0 ;
-(id)removeNamedItem:(id)arg0 ;
-(id)removeNamedItemNS:(id)arg0 ;
-(id)removeNamedItemNS:(id)arg0 localName:(id)arg1 ;
-(id)setNamedItem:(id)arg0 ;
-(id)setNamedItemNS:(id)arg0 ;
-(void)dealloc;


@end


#endif