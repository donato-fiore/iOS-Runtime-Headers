// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNASSEMBLY_H
#define SNASSEMBLY_H

@class NSArray, NSString;
@protocol TFFrameworkAssembly;

#import <Foundation/Foundation.h>


@interface SNAssembly : NSObject <TFFrameworkAssembly>



@property (readonly, copy, nonatomic) NSArray *assemblies; // ivar: _assemblies
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;


@end


#endif