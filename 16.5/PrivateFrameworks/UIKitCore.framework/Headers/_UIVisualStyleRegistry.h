// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVISUALSTYLEREGISTRY_H
#define _UIVISUALSTYLEREGISTRY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UIVisualStyleRegistry : NSObject {
    NSMutableDictionary *__classToVisualStyleClass;
}




+(id)defaultRegistry;
+(id)registryForIdiom:(NSInteger)arg0 ;
+(id)registryForTraitEnvironment:(id)arg0 ;
-(Class)visualStyleClassForStylableClass:(Class)arg0 ;
-(Class)visualStyleClassForView:(id)arg0 ;
-(id)init;
-(void)registerVisualStyleClass:(Class)arg0 forStylableClass:(Class)arg1 ;


@end


#endif