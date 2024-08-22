// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TILRUDICTIONARYNODE_H
#define TILRUDICTIONARYNODE_H


#import <Foundation/Foundation.h>

#import "TILRUDictionaryNode.h"

@interface TILRUDictionaryNode : NSObject {
    TILRUDictionaryNode *next;
    TILRUDictionaryNode *prev;
}


@property (readonly, nonatomic) id *key; // ivar: _key
@property (retain, nonatomic) id *object; // ivar: _object


-(id)initWithKey:(id)arg0 object:(id)arg1 ;


@end


#endif