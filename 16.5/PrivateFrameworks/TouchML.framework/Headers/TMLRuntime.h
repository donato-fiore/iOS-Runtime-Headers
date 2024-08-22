// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLRUNTIME_H
#define TMLRUNTIME_H


#import <Foundation/Foundation.h>


@interface TMLRuntime : NSObject



+(Class)createClass:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)childClassForName:(id)arg0 inClass:(id)arg1 ;
+(id)classForName:(id)arg0 ;
+(id)classForObject:(id)arg0 ;
+(id)createObjectWithIdentifier:(id)arg0 ofClass:(id)arg1 initializer:(id)arg2 ;
+(id)createObjectWithIdentifier:(id)arg0 ofType:(id)arg1 initializer:(id)arg2 ;
// +(id)createObjectWithIdentifier:(id)arg0 ofType:(id)arg1 initializer:(id)arg2 parentObject:(unk)arg3  ;
+(id)ensureClass:(id)arg0 ;
+(id)ensurePropertyWithKeyPath:(id)arg0 forObject:(id)arg1 writable:(BOOL)arg2 ;
+(id)property:(id)arg0 forClass:(id)arg1 ;
+(id)property:(id)arg0 forObject:(id)arg1 ;
+(id)propertyWithKeyPath:(id)arg0 forObject:(id)arg1 ;
+(id)propertyWithKeyPath:(id)arg0 inClass:(id)arg1 ;
+(id)protocolForName:(id)arg0 ;
+(id)requireModule:(id)arg0 ;
+(id)rootClassDescriptor;
+(id)signal:(id)arg0 forObject:(id)arg1 ;
+(void)addProperty:(id)arg0 toClass:(Class)arg1 ;
+(void)bootstrap;
+(void)makeObject:(id)arg0 implementProtocols:(id)arg1 ;
+(void)registerClass:(id)arg0 ;
+(void)registerClass:(id)arg0 className:(id)arg1 ;
+(void)registerMethod:(id)arg0 forObject:(id)arg1 ;
+(void)registerProperty:(id)arg0 forObject:(id)arg1 ;
+(void)registerProtocol:(id)arg0 ;
+(void)registerSignal:(id)arg0 forObject:(id)arg1 ;
+(void)verifyMethod:(id)arg0 forProtocol:(id)arg1 ;
+(void)verifyMethod:(id)arg0 withClass:(Class)arg1 ;
+(void)verifyProperty:(id)arg0 withClass:(Class)arg1 ;


@end


#endif