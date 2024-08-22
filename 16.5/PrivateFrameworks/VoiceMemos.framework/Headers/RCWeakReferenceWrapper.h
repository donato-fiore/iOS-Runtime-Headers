// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCWEAKREFERENCEWRAPPER_H
#define RCWEAKREFERENCEWRAPPER_H


#import <Foundation/Foundation.h>


@interface RCWeakReferenceWrapper : NSObject

@property (weak, nonatomic) id *weakReference; // ivar: _weakReference


+(id)withReference:(id)arg0 ;


@end


#endif