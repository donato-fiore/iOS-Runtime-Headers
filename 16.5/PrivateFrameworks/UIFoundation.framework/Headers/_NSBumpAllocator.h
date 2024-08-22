// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSBUMPALLOCATOR_H
#define _NSBUMPALLOCATOR_H


#import <Foundation/Foundation.h>


@interface _NSBumpAllocator : NSObject {
    *Slab _firstSlab;
    *Slab _curSlab;
    char * _ptr;
    char * _endPtr;
}




-(*void)allocate:(NSUInteger)arg0 ;
-(struct Slab *)_allocateSlabWithSize:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif