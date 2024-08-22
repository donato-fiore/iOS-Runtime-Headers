// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSASERVERAPPLICATIONDELEGATE_H
#define TSASERVERAPPLICATIONDELEGATE_H


#import <Foundation/Foundation.h>

#import "TSABaseApplicationDelegate.h"

@interface TSAServerApplicationDelegate : NSObject

@property (retain, nonatomic) TSABaseApplicationDelegate *baseApplicationDelegate; // ivar: _baseApplicationDelegate


+(id)sharedDelegate;
-(id)createBaseApplicationDelegate;
-(id)init;


@end


#endif