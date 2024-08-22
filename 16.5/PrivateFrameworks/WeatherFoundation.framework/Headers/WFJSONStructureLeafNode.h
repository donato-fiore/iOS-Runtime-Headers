// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFJSONSTRUCTURELEAFNODE_H
#define WFJSONSTRUCTURELEAFNODE_H


#import <Foundation/Foundation.h>


@interface WFJSONStructureLeafNode : NSObject

@property (nonatomic, getter=isRequired) BOOL required; // ivar: _required


+(id)optionalLeafNode;
+(id)requiredLeafNode;


@end


#endif