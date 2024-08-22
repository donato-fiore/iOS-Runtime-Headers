// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHARNESSACTIONSELECTOR_H
#define WFHARNESSACTIONSELECTOR_H

@class NSPredicate;

#import <Foundation/Foundation.h>


@interface WFHarnessActionSelector : NSObject

@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate


+(id)matchAll;
-(BOOL)matchesContext:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;


@end


#endif