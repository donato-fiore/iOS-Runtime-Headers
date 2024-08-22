// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPARAMETERVALUEREGISTRY_H
#define WFPARAMETERVALUEREGISTRY_H


#import <Foundation/Foundation.h>


@interface WFParameterValueRegistry : NSObject



+(id)allParameterValueClassesInWorkflowKit;
+(id)registeredValueClasses;
+(void)createRegisteredValueClassesSet;
+(void)initialize;
+(void)rediscoverParameterValueClassesIfNeeded;
+(void)registerValueClass:(Class)arg0 ;


@end


#endif