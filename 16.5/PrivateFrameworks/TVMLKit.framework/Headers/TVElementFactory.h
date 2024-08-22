// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVELEMENTFACTORY_H
#define TVELEMENTFACTORY_H


#import <Foundation/Foundation.h>


@interface TVElementFactory : NSObject



+(Class)classForElementType:(NSUInteger)arg0 ;
+(void)_registerDefaultElements;
+(void)initialize;
+(void)registerClass:(Class)arg0 forElementName:(id)arg1 elementType:(NSUInteger)arg2 dependent:(BOOL)arg3 ;
+(void)registerIKClass:(Class)arg0 forElementName:(id)arg1 elementType:(NSUInteger)arg2 dependent:(BOOL)arg3 ;
+(void)registerViewElementClass:(Class)arg0 forElementName:(id)arg1 ;


@end


#endif