// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITHREADSAFENODE_H
#define UITHREADSAFENODE_H

@class DOMNode;

#import <Foundation/Foundation.h>


@interface UIThreadSafeNode : NSObject {
    DOMNode *_node;
}




+(id)threadSafeNodeWithNode:(id)arg0 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_realNode;
-(id)description;
-(id)initWithNode:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif