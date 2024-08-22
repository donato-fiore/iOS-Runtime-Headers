// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VMUNODEGROUP_H
#define VMUNODEGROUP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VMUNodeGroup : NSObject {
    *void _group;
    unsigned int _nodeNamespaceSize;
    unsigned int _count;
    unsigned int _singleNode;
    unsigned int _inlineNodes;
}


@property (readonly) NSString *name; // ivar: _name


-(*void)nodes;
-(NSInteger)count;
-(id)initWithName:(id)arg0 graph:(id)arg1 ;
-(void)_createGroup;
-(void)addNode:(unsigned int)arg0 ;
-(void)dealloc;
-(void)enumerateNodesWithBlock:(id)arg0 ;


@end


#endif