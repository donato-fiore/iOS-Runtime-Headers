// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIGROUPCOMPLETION_H
#define _UIGROUPCOMPLETION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _UIGroupCompletion : NSObject {
    NSMutableArray *_completions;
    NSUInteger _refCount;
}




-(void)_performAllCompletions;
-(void)addCompletion:(id)arg0 ;
-(void)complete;


@end


#endif