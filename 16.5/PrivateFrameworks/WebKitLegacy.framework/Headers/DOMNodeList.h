// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMNODELIST_H
#define DOMNODELIST_H



#import "DOMObject.h"

@interface DOMNodeList : DOMObject

@property (readonly) unsigned int length;


-(id)item:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif