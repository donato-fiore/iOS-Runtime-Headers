// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSLINEBREAKERNODEPOOL_H
#define _NSLINEBREAKERNODEPOOL_H


#import <Foundation/Foundation.h>

#import "_NSBumpAllocator.h"

@interface _NSLineBreakerNodePool : NSObject {
    _NSBumpAllocator *_allocator;
    *_WLNode _freeList;
}




-(struct _WLNode *)allocNode;
-(struct _WLNode *)retainNode:(struct _WLNode *)arg0 ;
-(void)releaseNode:(struct _WLNode *)arg0 ;
-(void)reset;


@end


#endif